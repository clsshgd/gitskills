#include <linux/init.h>
#include <linux/module.h>
#include <linux/pci.h>
MODULE_LICENSE("GPL");
unsigned int *bar4p, dma_p;
struct pci_dev *pdev;
u64 addr=0;
static char *addr_str = NULL;

static void __exit ntbtest_exit(void) {
	pci_iounmap(pdev,bar4p);
	return;
}
static int __init ntbtest_init(void) {
	u32 val = 0;
        int i = 0;
	void __iomem *dma_addr;

	pdev = pci_get_class(0x068000,NULL);
	if(pdev==NULL){
		pr_emerg("Unable to find ntb\n");
		return -ENODEV;
	}
	bar4p=ioremap_wc(pci_resource_start(pdev, 4),pci_resource_len(pdev,4));
	if(bar4p==NULL){
		pr_emerg("bar 4 not mapped\n");
		return -ENOMEM;
	}

	dma_addr=memremap(0x2f68f00000,(1024*1024),MEMREMAP_WB);    
	if(dma_addr == NULL)
	{
		printk("ioremap error\n");
		return -ENOMEM;
	}

	mb();
#if 0
	memcpy(&val, dma_addr, sizeof(val));
	printk("dma val:0x%x\n", val);
#else
	for(i=0;i<0x100000;i++)
	{
		mb();
		memcpy(&val, (dma_addr+i), sizeof(val));
		if (val != 0x65656565)
			printk("dma val:0x%x i:0x%x\n", val, i);
		mb();
	}
#endif
	mb();
	memunmap(dma_addr);
	return 0;
}
module_init(ntbtest_init);
module_exit(ntbtest_exit);
module_param_named(addr,addr_str,charp,0);
