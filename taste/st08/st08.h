/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_st08__
#define __USER_CODE_H_st08__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void st08_startup();

void st08_PI_tc08(const asn1SccPusPacket *);

extern void st08_RI_ACK(const asn1SccPusPacket *,
                        const asn1SccPusSubserviceType *,
                        const asn1SccPusSt01FailureCode *,
                        const asn1SccPusSt01FailureInfo *,
                        const asn1SccPusStepId *);

#ifdef __cplusplus
}
#endif


#endif
