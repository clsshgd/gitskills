#include <linux/init.h>
#include <linux/module.h>
#include <linux/pci.h>
MODULE_LICENSE("GPL");
u8 *bar4p;
struct pci_dev *pdev;
u64 addr=0;
static char *addr_str = NULL;

static void __exit ntbtest_exit(void) {
	pci_iounmap(pdev,bar4p);
	return;
}
static int __init ntbtest_init(void) {
	u32 val = 0;
//	void __iomem *dma_addr;
	
	pdev = pci_get_class(0x068000,NULL);
	if(pdev==NULL){
		pr_emerg("Unable to find ntb\n");
		return -ENODEV;
	}
	bar4p=ioremap_wc(pci_resource_start(pdev,4),pci_resource_len(pdev,4));
	if(bar4p==NULL){
		pr_emerg("bar 4 not mapped\n");
		return -ENOMEM;
	}
#if 0
	mb();
	val=0xaeaaccbb;
	memcpy(bar4p,&val,sizeof(val));
	printk("val is 0x%x\n",val);
#else

	mb();
	memset(bar4p, 0x65, 0x100000);
	mb();
#endif	
//	dma_addr=memremap(0x1fd7a00000,(1024*1024),MEMREMAP_WB);
//	memunmap(dma_addr);
	return 0;
}
module_init(ntbtest_init);
module_exit(ntbtest_exit);
module_param_named(addr,addr_str,charp,0);
