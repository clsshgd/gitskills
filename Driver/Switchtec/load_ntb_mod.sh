#!/bin/sh

MODULE_NAME="hgst"
KERNEL_UNAME=$(uname -r)
KERNEL_VER=${KERNEL_UNAME:0:4}

modprobe ntb dyndbg=+p

if [ "${KERNEL_VER}" == "4.14" ]; then
	cd $(pwd)/switchtec-kernel-release_4.13_to_4.14/ && insmod ${MODULE_NAME}.ko dyndbg=+p && insmod ntb_hw_switchtec.ko 
elif [ "${KERNEL_VER}" == "4.19" ]; then
	cd $(pwd)/switchtec-kernel-release_4.19/ && insmod ${MODULE_NAME}.ko  dyndbg=+p && insmod ntb_hw_switchtec.ko
else
	echo "Thers is no switchtec code branch mactch to the running kernel"
fi

modprobe ntb_transport use_dma dyndbg=+p
modprobe ntb_netdev dyndbg=+p
modprobe ntb_perf dyndbg=+p
sleep 1s
ifconfig eth0 192.168.1.100
echo -e "BOOTPROTO=static\nIPADDR=192.168.1.100\nNETMASK=255.255.255.0\nNAME=eth0\nDEVICE=eth0\nONBOOT=yes" > /etc/sysconfig/network-scripts/ifcfg-eth0

