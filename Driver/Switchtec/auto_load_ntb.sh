#!/bin/sh

modprobe ntb dyndbg=+p
modprobe ntb_transport use_dma dyndbg=+p
modprobe ntb_netdev dyndbg=+p
modprobe ntb_perf dyndbg=+p


