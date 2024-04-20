/* SPDX-License-Identifier: GPL-2.0+ */

/*
 * (C) Copyright 2023 Linaro Ltd. <maxim.uvarov@linaro.org>
 */

#ifndef LWIP_LWIPOPTS_H
#define LWIP_LWIPOPTS_H

#define NO_SYS                          1
#define LWIP_NETCONN                    0
#define LWIP_SOCKET                     0
#define LWIP_COMPAT_SOCKETS             0
#define LWIP_COMPAT_MUTEX 1
#define SYS_LIGHTWEIGHT_PROT            0
#define LWIP_TCPIP_TIMEOUT              0
// #define LWIP_NO_STDINT_H                1
// #define LWIP_NO_INTTYPES_H 1
// #define LWIP_NO_LIMITS_H 1
// #define LWIP_NO_UNISTD_H 1
// #define LWIP_NO_CTYPE_H 1

/* use malloc instead of pool */
#define MEMP_MEM_MALLOC                 1
#define MEMP_MEM_INIT			1
#define MEM_LIBC_MALLOC			1

#define LWIP_STATS                      0

#define LWIP_IPV6                       0

#define LWIP_DHCP                       1
#define LWIP_DHCP_BOOTP_FILE		1
#define LWIP_DHCP_DOES_ACD_CHECK	0

#define LWIP_RAW                       1

#define LWIP_DNS                        1

#define LWIP_TCP                        1
#define LWIP_ALTCP                      1
#define LWIP_ALTCP_TLS                  1
#define LWIP_ALTCP_TLS_MBEDTLS          1

// TCP WND must be at least 16 kb to match TLS record size
// or you will get a warning:
// "altcp_tls: TCP_WND is smaller than the RX decrypion buffer, connection RX might stall!"
#undef TCP_WND
#define TCP_WND  16384
// #define LWIP_TCP_KEEPALIVE              1

#define LWIP_DEBUG 1
#define LWIP_DBG_MIN_LEVEL              LWIP_DBG_LEVEL_ALL
#define LWIP_DBG_TYPES_ON               LWIP_DBG_ON
#define API_LIB_DEBUG                   LWIP_DBG_ON
#define API_MSG_DEBUG                   LWIP_DBG_ON
#define AUTOIP_DEBUG                    LWIP_DBG_OFF
#define DHCP6_DEBUG                     LWIP_DBG_OFF
#define DHCP_DEBUG                      LWIP_DBG_OFF
#define DNS_DEBUG                       LWIP_DBG_OFF
#define ETHARP_DEBUG                    LWIP_DBG_ON
#define ICMP_DEBUG                      LWIP_DBG_OFF
#define IGMP_DEBUG                      LWIP_DBG_OFF
#define INET_DEBUG                      LWIP_DBG_OFF
#define IP6_DEBUG                       LWIP_DBG_OFF
#define IP_DEBUG                        LWIP_DBG_ON
#define IP_REASS_DEBUG                  LWIP_DBG_OFF
#define LWIP_DBG_TYPES_ON               LWIP_DBG_ON
#define MEMP_DEBUG                      LWIP_DBG_OFF
#define MEM_DEBUG                       LWIP_DBG_OFF
#define NETIF_DEBUG                     LWIP_DBG_ON
#define PBUF_DEBUG                      LWIP_DBG_ON
#define RAW_DEBUG                       LWIP_DBG_ON
#define SLIP_DEBUG                      LWIP_DBG_OFF
#define SOCKETS_DEBUG                   LWIP_DBG_ON
#define SYS_DEBUG                       LWIP_DBG_ON
#define TCPIP_DEBUG                     LWIP_DBG_ON
#define TCP_CWND_DEBUG                  LWIP_DBG_ON
#define TCP_DEBUG                       LWIP_DBG_ON
#define TCP_FR_DEBUG                    LWIP_DBG_ON
#define TCP_INPUT_DEBUG                 LWIP_DBG_ON
#define TCP_OUTPUT_DEBUG                LWIP_DBG_OFF
#define TCP_QLEN_DEBUG                  LWIP_DBG_ON
#define TCP_RST_DEBUG                   LWIP_DBG_ON
#define TCP_RTO_DEBUG                   LWIP_DBG_ON
#define TCP_WND_DEBUG                   LWIP_DBG_ON
#define TIMERS_DEBUG                    LWIP_DBG_ON
#define UDP_DEBUG                       LWIP_DBG_OFF

#define ALTCP_MBEDTLS_DEBUG             LWIP_DBG_ON
#define ALTCP_MBEDTLS_LIB_DEBUG         LWIP_DBG_ON
#define ALTCP_MBEDTLS_LIB_DEBUG_LEVEL_MIN             0

#define LWIP_PLATFORM_DIAG(x) do {printf x;} while(0)
#define TCP_WND_UPDATE_THRESHOLD   (TCP_WND / 8)

/*
 * Include user defined options first. Anything not defined in these files
 * will be set to standard values. Override anything you don't like!
 */
#include "lwipopts.h"
#include "lwip/debug.h"

#endif /* LWIP_LWIPOPTS_H */
