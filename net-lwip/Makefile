obj-$(CONFIG_$(SPL_)DM_ETH) += eth_common.o
obj-$(CONFIG_$(SPL_)DM_ETH) += eth-uclass.o
obj-$(CONFIG_$(SPL_)DM_ETH) += net-lwip.o

# Disable this warning as it is triggered by:
# sprintf(buf, index ? "foo%d" : "foo", index)
# and this is intentional usage.
CFLAGS_eth_common.o += -Wno-format-extra-args
