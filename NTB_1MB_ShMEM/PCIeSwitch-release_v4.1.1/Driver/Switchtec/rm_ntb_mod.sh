#!/bin/sh

MODULE_NAME="cls_switchtec"

rmmod ntb_perf
rmmod ntb_netdev
rmmod ntb_transport
rmmod ntb_hw_switchtec
rmmod ${MODULE_NAME}
rmmod ntb 
