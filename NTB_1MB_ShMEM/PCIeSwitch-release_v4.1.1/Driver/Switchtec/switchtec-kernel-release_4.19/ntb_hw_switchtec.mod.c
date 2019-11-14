#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x19af3adf, "module_layout" },
	{ 0x8b008f8d, "param_ops_ulong" },
	{ 0xaba64591, "param_ops_bool" },
	{ 0xc46062be, "class_interface_unregister" },
	{ 0x9ae87032, "class_interface_register" },
	{ 0x3684f3a, "switchtec_class" },
	{ 0xc5f7ac44, "ntb_register_device" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xe4ccd3fc, "pci_irq_vector" },
	{ 0xdab32e6c, "pci_iomap" },
	{ 0xfb578fc5, "memset" },
	{ 0x830b7703, "pci_iomap_range" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x4ff914bf, "arch_dma_alloc_attrs" },
	{ 0xd6cca767, "kmem_cache_alloc_node_trace" },
	{ 0xadd0006d, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x9aaeb0e0, "ntb_unregister_device" },
	{ 0xb82e4e3b, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x885d0b17, "pci_iounmap" },
	{ 0x433602da, "_dev_info" },
	{ 0xd5027692, "ntb_link_event" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9bd72798, "_dev_err" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf10de535, "ioread8" },
	{ 0x1fd21d5f, "ntb_db_event" },
	{ 0x55f83eac, "__dynamic_dev_dbg" },
	{ 0x848d372e, "iowrite8" },
	{ 0xc5534d64, "ioread16" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x2e0d2f7f, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe484e35f, "ioread32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cls_switchtec,ntb";


MODULE_INFO(srcversion, "885F441369ABDF911E16700");
