#psx-switchtec Makefile

#find related version file according to $(PDT)
#for example COMe/Stingray/Sella belongs to Euclid
ifeq ($(PDT), Stingray)
	VERSION_FILE = ../../../Euclid/Stingray/VERSION-GEN
	MODULE_NAME=cls_switchtec_f2
else ifeq ($(PDT), COMe)
	VERSION_FILE = ../../../Euclid/COMe/VERSION-GEN
	MODULE_NAME=cls_switchtec_f1
else
	VERSION_FILE = ../../../$(PDT)/VERSION-GEN
	MODULE_NAME=cls_switchtec
endif

4.4:	
	cp -f switchtec_sg.c switchtec-kernel-release_4.4_to_4.7/
	cp -f switchtec_sg.h switchtec-kernel-release_4.4_to_4.7/	
	cd switchtec-kernel-release_4.4_to_4.7 && chmod +x VERSION-GEN && make MODULE_NAME=$(MODULE_NAME) && cp -f $(MODULE_NAME).ko ntb_hw_switchtec.ko /lib/modules/$(shell uname -r)/kernel/drivers/ntb/
	depmod
	chmod +x /etc/rc.d/rc.local
	echo "$(shell pwd)/auto_load_ntb.sh" >> /etc/rc.d/rc.local
	chmod +x $(shell pwd)/auto_load_ntb.sh
	chmod +x $(shell pwd)/load_ntb_mod.sh
	chmod +x $(shell pwd)/rm_ntb_mod.sh
	sh $(shell pwd)/load_ntb_mod.sh
4.9:
	cp -f switchtec_sg.c switchtec-kernel-release_4.8_to_4.11/
	cp -f switchtec_sg.h switchtec-kernel-release_4.8_to_4.11/
	cd switchtec-kernel-release_4.8_to_4.11 && chmod +x VERSION-GEN && make MODULE_NAME=$(MODULE_NAME) && cp -f $(MODULE_NAME).ko ntb_hw_switchtec.ko /lib/modules/$(shell uname -r)/kernel/drivers/ntb/
	depmod
	chmod +x /etc/rc.d/rc.local
	echo "$(shell pwd)/auto_load_ntb.sh" >> /etc/rc.d/rc.local
	chmod +x $(shell pwd)/auto_load_ntb.sh
	chmod +x $(shell pwd)/load_ntb_mod.sh
	chmod +x $(shell pwd)/rm_ntb_mod.sh
	sh $(shell pwd)/load_ntb_mod.sh
4.14:
	cp -f switchtec_sg.c switchtec-kernel-release_4.13_to_4.14/
	cp -f switchtec_sg.h switchtec-kernel-release_4.13_to_4.14/
	cd switchtec-kernel-release_4.13_to_4.14 && chmod +x VERSION-GEN && make MODULE_NAME=$(MODULE_NAME) && cp -f $(MODULE_NAME).ko ntb_hw_switchtec.ko /lib/modules/$(shell uname -r)/kernel/drivers/ntb/
	depmod
	chmod +x /etc/rc.d/rc.local
	echo "$(shell pwd)/auto_load_ntb.sh" >> /etc/rc.d/rc.local
	chmod +x $(shell pwd)/auto_load_ntb.sh
	chmod +x $(shell pwd)/load_ntb_mod.sh
	chmod +x $(shell pwd)/rm_ntb_mod.sh
	sh $(shell pwd)/load_ntb_mod.sh
4.19:
	cp -f switchtec_sg.c switchtec-kernel-release_4.19/
	cp -f switchtec_sg.h switchtec-kernel-release_4.19/
	cd switchtec-kernel-release_4.19 && chmod +x VERSION-GEN && make MODULE_NAME=$(MODULE_NAME) && cp -f $(MODULE_NAME).ko ntb_hw_switchtec.ko /lib/modules/$(shell uname -r)/kernel/drivers/ntb/ 
	depmod
	chmod +x /etc/rc.d/rc.local
	echo "$(shell pwd)/auto_load_ntb.sh" >> /etc/rc.d/rc.local
	chmod +x $(shell pwd)/auto_load_ntb.sh
	chmod +x $(shell pwd)/load_ntb_mod.sh
	chmod +x $(shell pwd)/rm_ntb_mod.sh
	sh $(shell pwd)/load_ntb_mod.sh
4.4_clean:
	cd switchtec-kernel-release_4.4_to_4.7 && make clean
	sh $(shell pwd)/rm_ntb_mod.sh
	rm -f /lib/modules/$(shell uname -r)/kernel/drivers/ntb/$(MODULE_NAME).ko
	rm -f /lib/modules/$(shell uname -r)/kernel/drivers/ntb/ntb_hw_switchtec.ko
	sed -i -e '/auto_load_ntb/d'  /etc/rc.d/rc.local
4.9_clean:
	cd switchtec-kernel-xlink_4.8_to_4.11 && make clean
	sh $(shell pwd)/rm_ntb_mod.sh
	rm -f /lib/modules/$(shell uname -r)/kernel/drivers/ntb/$(MODULE_NAME).ko
	rm -f /lib/modules/$(shell uname -r)/kernel/drivers/ntb/ntb_hw_switchtec.ko
	sed -i -e '/auto_load_ntb/d'  /etc/rc.d/rc.local
4.14_clean:
	cd switchtec-kernel-release_4.13_to_4.14 && make clean
	sh $(shell pwd)/rm_ntb_mod.sh
	rm -f /lib/modules/$(shell uname -r)/kernel/drivers/ntb/$(MODULE_NAME).ko
	rm -f /lib/modules/$(shell uname -r)/kernel/drivers/ntb/ntb_hw_switchtec.ko 
	sed -i -e '/auto_load_ntb/d'  /etc/rc.d/rc.local
4.19_clean:
	cd switchtec-kernel-release_4.19 && make clean
	sh $(shell pwd)/rm_ntb_mod.sh
	rm -f /lib/modules/$(shell uname -r)/kernel/drivers/ntb/$(MODULE_NAME).ko
	rm -f /lib/modules/$(shell uname -r)/kernel/drivers/ntb/ntb_hw_switchtec.ko
	sed -i -e '/auto_load_ntb/d'  /etc/rc.d/rc.local



