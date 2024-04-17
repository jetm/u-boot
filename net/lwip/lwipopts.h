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
/* TCP WND must be at least 16 kb to match TLS record size
   or you will get a warning "altcp_tls: TCP_WND is smaller than the RX decrypion buffer, connection RX might stall!" */
#undef TCP_WND
#define TCP_WND  16384

#define LWIP_DEBUG 1
#define LWIP_DBG_TYPES_ON               LWIP_DBG_ON
#define API_LIB_DEBUG                   LWIP_DBG_ON
#define API_MSG_DEBUG                   LWIP_DBG_ON
#define ALTCP_MBEDTLS_DEBUG             LWIP_DBG_ON
#define ALTCP_MBEDTLS_LIB_DEBUG         LWIP_DBG_ON
#define ALTCP_MBEDTLS_LIB_DEBUG_LEVEL_MIN             0

/*
 * Include user defined options first. Anything not defined in these files
 * will be set to standard values. Override anything you don't like!
 */
#include "lwipopts.h"
#include "lwip/debug.h"

#endif /* LWIP_LWIPOPTS_H */
