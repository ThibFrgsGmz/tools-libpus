#include "pus_st19_packets.h"



pusError_t pus_tc_19_X_createDefaultEventActionRequest(pusPacket_t* outTc, pusApid_t apid, pusSequenceCount_t sequenceCount)
{
	if (NULL == outTc)
	{
		return PUS_SET_ERROR(PUS_ERROR_NULLPTR);
	}
	else
	{
		pus_initTcPacket(outTc);

		// Source information
		pus_setApid(outTc, apid);
		pus_setSequenceCount(outTc, sequenceCount);

		// Data length
		pus_setPacketDataLength(outTc, sizeof(pusPacketData_t));

		pus_setTcService(outTc, pus_ST19_eventAction);

		// Timestamp
		//pus_setTmPacketTimeNow(outTm);

		return PUS_GET_ERROR();
	}

	return PUS_NO_ERROR;
}



pusError_t pus_tc_19_1_createAddEventActionDefinitionsRequest(pusPacket_t* outTc, pusApid_t apid, pusSequenceCount_t sequenceCount, pusSt05EventId_t eventId, pusPacket_t* tcAction)
{
	if (NULL == outTc)
	{
		return PUS_SET_ERROR(PUS_ERROR_NULLPTR);
	}

	if( PUS_NO_ERROR !=  pus_tc_19_X_createDefaultEventActionRequest(outTc, apid, sequenceCount) )
	{
		return PUS_GET_ERROR();
	}

	pus_setTcSubtype(outTc, pus_TC_19_1_addEventActionDefinitions);
	pus_setTcDataKind(outTc, pus_TC_DATA_ST_19_1);

	pusPacketReduced_t tcActionR;

	pus_packetReduced_createPacketReducedFromPacket(&tcActionR, tcAction); // Revisar
	pus_tc_19_1_setAction(outTc, &tcActionR);
	pus_tc_19_X_setEventId(outTc, eventId);

	return PUS_NO_ERROR;
}


pusError_t pus_tc_19_2_createDeleteEventActionDefinitionsRequest(pusPacket_t* outTc, pusApid_t apid, pusSequenceCount_t sequenceCount, pusSt05EventId_t eventId)
{
	if (NULL == outTc)
	{
		return PUS_SET_ERROR(PUS_ERROR_NULLPTR);
	}

	if( PUS_NO_ERROR !=  pus_tc_19_X_createDefaultEventActionRequest(outTc, apid, sequenceCount) )
	{
		return PUS_GET_ERROR();
	}

	pus_setTcSubtype(outTc, pus_TC_19_2_deleteEventActionDefinitions);
	pus_setTcDataKind(outTc, pus_TC_DATA_ST_19_X);

	pus_tc_19_X_setEventId(outTc, eventId);

	return PUS_NO_ERROR;
}

pusError_t pus_tc_19_4_createEnableEventActionDefinitions(pusPacket_t* outTc, pusApid_t apid, pusSequenceCount_t sequenceCount, pusSt05EventId_t eventId)
{
	if (NULL == outTc)
	{
		return PUS_SET_ERROR(PUS_ERROR_NULLPTR);
	}

	if( PUS_NO_ERROR !=  pus_tc_19_X_createDefaultEventActionRequest(outTc, apid, sequenceCount) )
	{
		return PUS_GET_ERROR();
	}

	pus_setTcSubtype(outTc, pus_TC_19_4_enableEventActionDefinitions);
	pus_setTcDataKind(outTc, pus_TC_DATA_ST_19_X);

	pus_tc_19_X_setEventId(outTc, eventId);

	return PUS_NO_ERROR;
}

pusError_t pus_tc_19_5_createDisableEventActionDefinitions(pusPacket_t* outTc, pusApid_t apid, pusSequenceCount_t sequenceCount, pusSt05EventId_t eventId)
{
	if (NULL == outTc)
	{
		return PUS_SET_ERROR(PUS_ERROR_NULLPTR);
	}

	if( PUS_NO_ERROR !=  pus_tc_19_X_createDefaultEventActionRequest(outTc, apid, sequenceCount) )
	{
		return PUS_GET_ERROR();
	}

	pus_setTcSubtype(outTc, pus_TC_19_5_disableEventActionDefinitions);
	pus_setTcDataKind(outTc, pus_TC_DATA_ST_19_X);

	pus_tc_19_X_setEventId(outTc, eventId);

	return PUS_NO_ERROR;
}

pusError_t pus_packetReduced_setDataFromPacketToPacketReduced(pusPacketReduced_t* outTcR, pusPacket_t* inTc)
{
	if (NULL == outTcR || NULL == inTc)
	{
		return PUS_SET_ERROR(PUS_ERROR_NULLPTR);
	}

	switch( inTc->data.u.tcData.data.kind )
	{
		case pus_TC_DATA_NONE:
			return PUS_SET_ERROR(PUS_ERROR_TC_KIND);
			break;
		case pus_TC_DATA_ST_8_1:
			outTcR->data.u.tcData.data.u.st_8_1 = inTc->data.u.tcData.data.u.st_8_1;
			return PUS_SET_ERROR(PUS_NO_ERROR);
			break;
		case pus_TC_DATA_ST_19_1:
			return PUS_SET_ERROR(PUS_ERROR_TC_KIND);
			break;
		case pus_TC_DATA_ST_19_X:
			return PUS_SET_ERROR(PUS_ERROR_TC_KIND);
			break;
		default:
			return PUS_SET_ERROR(PUS_ERROR_TC_KIND);
			break;
	}
}


pusError_t pus_packetReduced_setDataFromPacketReducedToPacket(pusPacket_t* outTc, pusPacketReduced_t* inTcR)
{
	if (NULL == outTc || NULL == inTcR)
	{
		return PUS_SET_ERROR(PUS_ERROR_NULLPTR);
	}

	switch( inTcR->data.u.tcData.data.kind )
	{
		case pus_TC_DATA_NONE:
			return PUS_SET_ERROR(PUS_ERROR_TC_KIND);
			break;
		case pus_TC_DATA_ST_8_1:
			outTc->data.u.tcData.data.u.st_8_1 = inTcR->data.u.tcData.data.u.st_8_1;
			return PUS_SET_ERROR(PUS_NO_ERROR);
			break;
		case pus_TC_DATA_ST_19_X:
			return PUS_SET_ERROR(PUS_ERROR_TC_KIND);
			break;
		default:
			return PUS_SET_ERROR(PUS_ERROR_TC_KIND);
			break;
	}
}

pusError_t pus_packetReduced_createPacketReducedFromPacket(pusPacketReduced_t* outTcR, pusPacket_t* inTc)
{
	if (NULL == outTcR || NULL == inTc)
	{
		return PUS_SET_ERROR(PUS_ERROR_NULLPTR);
	}

	outTcR->apid = inTc->apid;
	outTcR->dataLength = inTc->dataLength;
	outTcR->packetType = inTc->packetType;
	outTcR->packetVersion = inTc->packetVersion;
	outTcR->secondaryHeaderFlag = inTc->secondaryHeaderFlag;
	outTcR->sequenceCount = inTc->sequenceCount;
	outTcR->sequenceFlags = inTc->sequenceFlags;

	outTcR->data.kind = inTc->data.kind;
	outTcR->data.u.tcData.header = inTc->data.u.tcData.header;

	if ( PUS_NO_ERROR == pus_packetReduced_setDataFromPacketToPacketReduced(outTcR, inTc) )
	{
		outTcR->data.u.tcData.data.kind = inTc->data.u.tcData.data.kind;
	}
	return PUS_GET_ERROR();
}

pusError_t pus_packetReduced_createPacketFromPacketReduced(pusPacket_t* outTc, pusPacketReduced_t* inTcR)
{
	if (NULL == outTc || NULL == inTcR)
	{
		return PUS_SET_ERROR(PUS_ERROR_NULLPTR);
	}

	outTc->apid = inTcR->apid;
	outTc->dataLength = inTcR->dataLength;
	outTc->packetType = inTcR->packetType;
	outTc->packetVersion = inTcR->packetVersion;
	outTc->secondaryHeaderFlag = inTcR->secondaryHeaderFlag;
	outTc->sequenceCount = inTcR->sequenceCount;
	outTc->sequenceFlags = inTcR->sequenceFlags;

	outTc->data.kind = inTcR->data.kind;
	outTc->data.u.tcData.header = inTcR->data.u.tcData.header;

	if ( PUS_NO_ERROR == pus_packetReduced_setDataFromPacketReducedToPacket(outTc, inTcR) )
	{
		outTc->data.u.tcData.data.kind = inTcR->data.u.tcData.data.kind;
	}
	return PUS_GET_ERROR();
}

void pus_tc_19_1_setAction(pusPacket_t* outTc, pusPacketReduced_t* actionR)
{
    if ( NULL == outTc || NULL == actionR )
    {
    	PUS_SET_ERROR(PUS_ERROR_NULLPTR);
    	return;
    }
    else
    {
    	outTc->data.u.tcData.data.u.st_19_1.packetReduced = *actionR;
    }
}

void pus_tc_19_1_getAction(pusPacketReduced_t* action, pusPacket_t* tc)
{
    if ( NULL == tc)
    {
    	PUS_SET_ERROR(PUS_ERROR_NULLPTR);
    	return;
    }
    else
    {
    	*action = tc->data.u.tcData.data.u.st_19_1.packetReduced;
    }
}

pusError_t pus_tc_19_X_setEventId(pusPacket_t* packet, pusSt05EventId_t eventId)
{
	if ( NULL == packet )
	{
		return PUS_SET_ERROR(PUS_ERROR_NULLPTR);
	}

	if( pus_getTcDataKind(packet) == pus_TC_DATA_ST_19_1)
	{
		packet->data.u.tcData.data.u.st_19_1.eventId = eventId;
	}
	else if( pus_TC_DATA_NONE != pus_getTcDataKind(packet) )
	{
		packet->data.u.tcData.data.u.st_19_X.eventId = eventId;
	}
	return PUS_NO_ERROR;
}

pusError_t pus_tc_19_X_getEventId(pusSt05EventId_t* eventID, pusPacket_t* packet)
{
	if ( NULL == packet )
	{
		return PUS_SET_ERROR(PUS_ERROR_NULLPTR);
	}

	if( pus_getTcDataKind(packet) == pus_TC_DATA_ST_19_1)
	{
		*eventID = packet->data.u.tcData.data.u.st_19_1.eventId;
	}
	else if( pus_TC_DATA_NONE != pus_getTcDataKind(packet) )
	{
		*eventID = packet->data.u.tcData.data.u.st_19_X.eventId;
	}
	return PUS_NO_ERROR;
}

//
// Parameter checking
//
pusError_t pus_expectSt19Tc(const pusPacket_t* packet, pusSubservice_t expectedSubtype, const char* function)
{
	pusError_t expectResult = pus_expectTcHeader(packet, function, (pusErrorData_t){.integer=0});
	if (PUS_NO_ERROR == expectResult)
	{
		pusService_t service = pus_getTcService(packet);
		pusSubservice_t subtype = pus_getTcSubtype(packet);

		if (service != pus_ST19_eventAction)
		{
			pus_setError(PUS_ERROR_TC_SERVICE, function, (pusErrorData_t){.integer=service});
			return PUS_ERROR_TC_SERVICE;
		}

		if (expectedSubtype == pusSubtype_NONE)
		{
			// Check that subtype corresponds to ST[01]
			if ((subtype != pus_TC_19_1_addEventActionDefinitions) &&
				(subtype != pus_TC_19_2_deleteEventActionDefinitions) &&
				(subtype != pus_TC_19_4_enableEventActionDefinitions) &&
				(subtype != pus_TC_19_5_disableEventActionDefinitions))
			{
				pus_setError(PUS_ERROR_TC_SUBTYPE, function, (pusErrorData_t){.integer=subtype});
				return PUS_ERROR_TC_SUBTYPE;
			}
		}
		else
		{
			// Check that subtype is as expected
			if (subtype != expectedSubtype)
			{
				pus_setError(PUS_ERROR_TC_SUBTYPE, function, (pusErrorData_t){.integer=subtype});
				return PUS_ERROR_TC_SUBTYPE;

			}
		}

		pusPacketDataKind_t kind = pus_getTcDataKind(packet);
		if (kind != pus_TC_DATA_ST_19_1 && kind != pus_TC_DATA_ST_19_X)
		{
			pus_setError(PUS_ERROR_TC_KIND, function, (pusErrorData_t){.integer=kind});
			return PUS_ERROR_TC_KIND;
		}

		return PUS_NO_ERROR;
	}
	else
	{
		return expectResult;
	}
}
