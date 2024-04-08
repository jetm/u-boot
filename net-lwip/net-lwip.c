#include <net.h>

#if defined(CONFIG_API) || defined(CONFIG_EFI_LOADER)
void (*push_packet)(void *, int len) = 0;
#endif
int net_restart_wrap;

int net_init(void)
{
	return 0;
}

void net_process_received_packet(uchar *in_packet, int len)
{
}
