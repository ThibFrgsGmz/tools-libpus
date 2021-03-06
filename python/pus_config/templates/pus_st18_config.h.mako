//
// H2020 ESROCOS Project
// Company: GMV Aerospace & Defence S.A.U.
// Licence: GPLv2
//
// PUS Service ST[18] On-board control procedure
// 
// File automatically generated from the pus_st18_config.h.mako template
//
//                     -- DO NOT MODIFY --


#ifndef PUS_ST18_CONFIG_H
#define PUS_ST18_CONFIG_H

#include "pus_types.h"
#ifdef PUS_CONFIGURE_OBCP_ENGINE

#ifdef __cplusplus
extern "C" {
#endif



#include "pus_threads.h"
#include <string.h>

#include "pus_obcp_engine.h"


#define MAXIMUN_OBCP ${config['maximumObcp']}

#ifndef PUS_DISABLE_THREADS
extern pthread_t pus_obcp_threads[];
#endif


extern const size_t pus_obcp_ObcpLimit;

extern pusObcpInfo_t pus_obcp_infoList[];


#ifdef __cplusplus
}
#endif

#endif 

#endif