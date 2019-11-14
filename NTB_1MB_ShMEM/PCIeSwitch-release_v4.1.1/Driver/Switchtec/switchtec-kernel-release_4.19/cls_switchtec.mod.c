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
	{ 0x2d3385d3, "system_wq" },
	{ 0x402b8281, "__request_module" },
	{ 0xadd0006d, "kmalloc_caches" },
	{ 0x7fa19331, "cdev_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4005f38c, "try_wait_for_completion" },
	{ 0xaa30e614, "pcim_enable_device" },
	{ 0x788d933e, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x754d539c, "strlen" },
	{ 0x7ae5ad74, "sme_active" },
	{ 0x55a3766, "devm_ioremap_wc" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xaba64591, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf6c1256d, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x91715312, "sprintf" },
	{ 0x34a028e2, "nonseekable_open" },
	{ 0xfd94814e, "complete_all" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x968a8d45, "pci_set_master" },
	{ 0x7799d44c, "pci_alloc_irq_vectors_affinity" },
	{ 0x4465b92f, "cancel_delayed_work" },
	{ 0xf10de535, "ioread8" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xadf4146a, "ida_free" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x9bd72798, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb488bc06, "pci_clear_master" },
	{ 0x4ff914bf, "arch_dma_alloc_attrs" },
	{ 0x433602da, "_dev_info" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0xd6cca767, "kmem_cache_alloc_node_trace" },
	{ 0xea61c420, "put_device" },
	{ 0x164e7c53, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x20335a53, "cdev_device_add" },
	{ 0xafc84da8, "__devm_request_region" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x847a5359, "pci_unregister_driver" },
	{ 0xc1875af2, "kmem_cache_alloc_trace" },
	{ 0x55f83eac, "__dynamic_dev_dbg" },
	{ 0xea78f588, "get_device" },
	{ 0xe4ccd3fc, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc42a71c5, "device_initialize" },
	{ 0xae437486, "devm_ioremap" },
	{ 0xe1f5b91e, "__pci_register_driver" },
	{ 0x582e396d, "class_destroy" },
	{ 0xc5534d64, "ioread16" },
	{ 0x74aff162, "cdev_device_del" },
	{ 0x2e0d2f7f, "queue_work_on" },
	{ 0xabeae04d, "dev_set_name" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x2482af4c, "devm_request_threaded_irq" },
	{ 0xeacb1fbe, "__class_create" },
	{ 0xe013f905, "ida_destroy" },
	{ 0xb82e4e3b, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe484e35f, "ioread32" },
	{ 0xa14ab2f3, "ida_alloc_range" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000011F8d00008531sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008531sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008532sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008532sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008533sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008533sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008534sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008534sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008535sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008535sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008536sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008536sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008541sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008541sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008542sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008542sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008543sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008543sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008544sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008544sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008545sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008545sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008546sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008546sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008551sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008551sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008552sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008552sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008553sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008553sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008554sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008554sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008555sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008555sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008556sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008556sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008561sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008561sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008562sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008562sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008563sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008563sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008564sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008564sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008565sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008565sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008566sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008566sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008571sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008571sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008572sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008572sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008573sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008573sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008574sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008574sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008575sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008575sv*sd*bc06sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008576sv*sd*bc05sc80i00*");
MODULE_ALIAS("pci:v000011F8d00008576sv*sd*bc06sc80i00*");

MODULE_INFO(srcversion, "22D446C0EC43E5CAB7CF4BE");
