#ifndef GENERATED_ASN1SCC_Context_onboardapid_H
#define GENERATED_ASN1SCC_Context_onboardapid_H
/*
Code automatically generated by asn1scc tool
*/
#include "dataview-uniq.h"
#include "asn1crt.h"

#ifdef  __cplusplus
extern "C" {
#endif



typedef struct {
    asn1SccPusApid apid;
} asn1SccContext_onboardapid;

flag asn1SccContext_onboardapid_Equal(const asn1SccContext_onboardapid* pVal1, const asn1SccContext_onboardapid* pVal2);

void asn1SccContext_onboardapid_Initialize(asn1SccContext_onboardapid* pVal);

#define ERR_CONTEXT_ONBOARDAPID_APID		1  /**/
flag asn1SccContext_onboardapid_IsConstraintValid(const asn1SccContext_onboardapid* pVal, int* pErrCode);

extern const asn1SccContext_onboardapid onboardapid_ctxt; 

/* ================= Encoding/Decoding function prototypes =================
 * These functions are placed at the end of the file to make sure all types
 * have been declared first, in case of parameterized ACN encodings
 * ========================================================================= */

 


#ifdef  __cplusplus
}

#endif

#endif