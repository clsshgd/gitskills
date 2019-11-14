Date: <2019/11/8>

RELEASED BY carlwang@celestica.com

What Is Included：
	1、ntb_test_server_A 
	2、ntb_test_server_B：check share memory data
	3、PCIeSwitch-release_v4.1.1： ntb driver
New features:
	NTB 1MB share memory test

Test User Guide:
1、install ntb driver，remove the ntb_perf&ntb_transport

2、server A：install ntb_test driver

3、server B：

    1、dmesg check the DMA address：

           bar4 shared dma add:0x2f68f00000

    2、 use this address to memremap

           dma_addr=memremap(0x2f68f00000,(1024*1024),MEMREMAP_WB); 

    3、 check 1M Shared memory with the memremap function return pointer.

    4、limitation:

        Only offset address（“0xffffd - 0xfffff） of the ntb share memory cannot be modified.
		
Changes:
None.

Known Issues:
None.

Repository Information：  (SVN/Git path and commit num/id) 

Dependent Version information:

Install/Upgrade Instruction: