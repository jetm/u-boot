ccflags-y += -I$(srctree)/lib/lwip/include -I$(srctree)/lib/lwip/u-boot

obj-$(CONFIG_$(SPL_TPL_)BOOTDEV_ETH) += eth_bootdev.o
obj-$(CONFIG_$(SPL_)DM_ETH) += eth_common.o
obj-$(CONFIG_$(SPL_)DM_ETH) += eth-uclass.o
obj-$(CONFIG_$(SPL_)DM_ETH) += net-lwip.o
obj-$(CONFIG_CMD_DHCP_LWIP) += dhcp.o
obj-$(CONFIG_CMD_DNS_LWIP) += dns.o
obj-$(CONFIG_CMD_PING_LWIP) += ping.o
obj-$(CONFIG_CMD_TFTPBOOT_LWIP) += tftp.o
obj-$(CONFIG_CMD_WGET_LWIP) += wget.o

# Disable this warning as it is triggered by:
# sprintf(buf, index ? "foo%d" : "foo", index)
# and this is intentional usage.
CFLAGS_eth_common.o += -Wno-format-extra-args
