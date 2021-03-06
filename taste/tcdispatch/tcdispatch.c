/*
* H2020 ESROCOS Project
* Company: GMV Aerospace & Defence S.A.U.
* Licence: GPLv2
*/

/* User code: This file will not be overwritten by TASTE. */

#include "tcdispatch.h"

#include <stdio.h>
#include "pus_apid.h"
#include "pus_error.h"
#include "pus_packet.h"
#include "pus_time.h"
#include "pus_stored_param.h"
#include "pus_types.h"
#include "pus_packet_queues.h"

#include "pus_st17_packets.h"


void tcdispatch_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void tcdispatch_PI_tcTrigger()
{
    /* Write your code here! */
	pusPacket_t tc;
	asn1SccPusSt01FailureCode isAvailable;
	//printf("TcDispatch: ");

	tcdispatch_RI_tcRequest(&tc, &isAvailable);
	if( PUS_NO_ERROR != isAvailable )
	{
		//printf("NO DATA READ\n");
		pus_clearError();
		return;
	}

	pusError_t error = PUS_EXPECT_TC(&tc);
	if ( PUS_NO_ERROR == error)
	{
		printf("TC%llu_%llu in TcDispatch.\n", pus_getTcService(&tc), pus_getTcSubtype(&tc));

		switch(pus_getTcService(&tc))
		{
			case 8:
				//pus_st08_processTcPacket(&tcRead, &apid);
				tcdispatch_RI_tc08(&tc);
				break;
			case 9:
				//pus_st08_processTcPacket(&tcRead, &apid);
				tcdispatch_RI_tc09(&tc);
				break;
			case 11:
				//pus_st12_processTcPacket(&tcRead, &apid);
				tcdispatch_RI_tc11(&tc);
				break;
			case 12:
				//pus_st12_processTcPacket(&tcRead, &apid);
				tcdispatch_RI_tc12(&tc);
				break;
			case 17:
				//pus_st17_processTcPacket(&tcRead, &apid);
				tcdispatch_RI_tc17(&tc);
				break;
			case 18:
				//pus_st17_processTcPacket(&tcRead, &apid);
				tcdispatch_RI_tc18(&tc);
				break;
			case 19:
				//pus_st19_processTcPacket(&tcRead, &apid);
				tcdispatch_RI_tc19(&tc);
				break;
			case 20:
				//pus_st19_processTcPacket(&tcRead, &apid);
				tcdispatch_RI_tc20(&tc);
				break;
			case 23:
				//pus_st19_processTcPacket(&tcRead, &apid);
				tcdispatch_RI_tc23(&tc);
				break;
			default:
				printf("Exception TC service. (no exit)\n");
				return;
		}

	}
	else
	{
		printf("Error tcdispatch_PI_tcTrigger, %d (no exit)\n", error);
		//TODO ¿¿¿¿¿¿¿????
		pus_clearError();
	}
}

