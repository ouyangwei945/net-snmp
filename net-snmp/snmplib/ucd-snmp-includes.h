#include <stdio.h>
#include <sys/types.h>

#ifdef HAVE_NETINET_IN_H
#include <netinet/in.h>
#endif
#if TIME_WITH_SYS_TIME
# ifdef WIN32
#  include <sys/timeb.h>
# else
#  include <sys/time.h>
# endif
# include <time.h>
#else
# if HAVE_SYS_TIME_H
#  include <sys/time.h>
# else
#  include <time.h>
# endif
#endif

/* uncomment if you don't have in_addr_t in netinet/in.h */
/* typedef u_int in_addr_t; */

#ifndef IN_UCD_SNMP_SOURCE
#include <ucd-snmp/asn1.h>
#include <ucd-snmp/snmp_api.h>
#include <ucd-snmp/snmp_impl.h>
#include <ucd-snmp/snmp_client.h>
#include <ucd-snmp/mib.h>
#include <ucd-snmp/snmp.h>

#include <ucd-snmp/default_store.h>
#include <ucd-snmp/snmp_logging.h>
#include <ucd-snmp/snmp_debug.h>
#include <ucd-snmp/read_config.h>
#include <ucd-snmp/tools.h>
#include <ucd-snmp/system.h>
#else
#include "asn1.h"
#include "snmp_api.h"
#include "snmp_impl.h"
#include "snmp_client.h"
#include "mib.h"
#include "snmp.h"

#include "default_store.h"
#include "snmp_logging.h"
#include "snmp_debug.h"
#include "read_config.h"
#include "tools.h"
#include "system.h"
#endif /* IN_UCD_SNMP_SOURCE */
