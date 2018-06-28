#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

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

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x44e68084, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb7d297fa, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x285f13cb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf097f9a7, __VMLINUX_SYMBOL_STR(pci_free_irq_vectors) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x76172947, __VMLINUX_SYMBOL_STR(pci_write_config_word) },
	{ 0x72fb8286, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0x5f4eb8bc, __VMLINUX_SYMBOL_STR(napi_schedule_prep) },
	{ 0x37613521, __VMLINUX_SYMBOL_STR(ethtool_convert_legacy_u32_to_link_mode) },
	{ 0x7ae5ad74, __VMLINUX_SYMBOL_STR(sme_active) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x57d21f1a, __VMLINUX_SYMBOL_STR(pcie_set_readrq) },
	{ 0xde6e9873, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x4ea25709, __VMLINUX_SYMBOL_STR(dql_reset) },
	{ 0x1879537a, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xdf566a59, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r9) },
	{ 0xead19057, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xad27f361, __VMLINUX_SYMBOL_STR(__warn_printk) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x22bce513, __VMLINUX_SYMBOL_STR(mdio_mii_ioctl) },
	{ 0xa78b8f96, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x8aaf58a7, __VMLINUX_SYMBOL_STR(pci_enable_wake) },
	{ 0xab88bf2e, __VMLINUX_SYMBOL_STR(pcie_get_readrq) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc685a73d, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x15ba50a6, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x26aff076, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xb47cca30, __VMLINUX_SYMBOL_STR(csum_ipv6_magic) },
	{ 0xa4f4a556, __VMLINUX_SYMBOL_STR(arch_dma_supported) },
	{ 0x8592716e, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x69baadde, __VMLINUX_SYMBOL_STR(netif_schedule_queue) },
	{ 0xb6224260, __VMLINUX_SYMBOL_STR(pci_alloc_irq_vectors_affinity) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8e82ee02, __VMLINUX_SYMBOL_STR(pci_enable_pcie_error_reporting) },
	{ 0xe6acafe7, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x46dbd678, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xa92845ad, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x7ac83c66, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x6331c6c8, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0xa00aca2a, __VMLINUX_SYMBOL_STR(dql_completed) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xb4de9ba7, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x39afd04a, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xbca8b8bb, __VMLINUX_SYMBOL_STR(pci_read_config_word) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x703d41bf, __VMLINUX_SYMBOL_STR(netif_set_real_num_rx_queues) },
	{ 0x7e4a25d5, __VMLINUX_SYMBOL_STR(netif_set_real_num_tx_queues) },
	{ 0x720ec3b5, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xce8b1878, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r14) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x4c759827, __VMLINUX_SYMBOL_STR(byte_rev_table) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xfddb4ba9, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x493d1680, __VMLINUX_SYMBOL_STR(pci_select_bars) },
	{ 0xfe9869cb, __VMLINUX_SYMBOL_STR(ethtool_convert_link_mode_to_legacy_u32) },
	{ 0x516b9827, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xefbadba4, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0xbf587bfb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x8ff4079b, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xd2182c28, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xaef14dc7, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x2d4265f, __VMLINUX_SYMBOL_STR(pci_cleanup_aer_uncorrect_error_status) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf99ce4a7, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbfdcb43a, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r11) },
	{ 0xc94a99a9, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x80d0953e, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xeda1bc2b, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xf078bb66, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xeab5e884, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xaf6f022, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0x3e76b445, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x171150a6, __VMLINUX_SYMBOL_STR(pci_irq_vector) },
	{ 0xe1658912, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xb44912b4, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xb20f2cdc, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xd4cddfc4, __VMLINUX_SYMBOL_STR(pci_disable_pcie_error_reporting) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x27ca7e38, __VMLINUX_SYMBOL_STR(pci_prepare_to_sleep) },
	{ 0xb02417a4, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x23d4bc87, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x4d523aca, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb35f5c67, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x54d831eb, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0xa24b824f, __VMLINUX_SYMBOL_STR(pci_enable_device_mem) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x7cb096ca, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9a19293f, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xeba0588b, __VMLINUX_SYMBOL_STR(pci_wake_from_d3) },
	{ 0xd8c5240, __VMLINUX_SYMBOL_STR(pci_release_selected_regions) },
	{ 0x3dbe88f0, __VMLINUX_SYMBOL_STR(pci_request_selected_regions) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xb2bf7d10, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x6214181c, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xc1514a3b, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x8bc0c167, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x2ae3ffca, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x17fbce60, __VMLINUX_SYMBOL_STR(sme_me_mask) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mdio";

MODULE_ALIAS("pci:v00001969d00001091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d0000E091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d0000E0A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d0000E0B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d00001090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d000010A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d000010A0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "02DFB48CE82B9DFE0952012");
