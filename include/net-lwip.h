#include <lwip/netif.h>

int eth_rx(void);
int eth_get_dev_index(void);
int net_lwip_init(void);
struct netif *net_lwip_get_netif(void);
int do_dhcp(struct cmd_tbl *cmdtp, int flag, int argc, char *const argv[]);
int do_tftpb(struct cmd_tbl *cmdtp, int flag, int argc, char *const argv[]);
