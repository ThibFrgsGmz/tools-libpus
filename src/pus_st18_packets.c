#include "pus_st18_packets.h"
#include "pus_error.h"
#include "pus_packet.h"

pusError_t pus_tc_18_X_createDefaultRequest(pusPacket_t* outTc, pusApid_t apid, pusSequenceCount_t sequenceCount, pusSubservice_t subtype)
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

		// Service identification
		pus_setTcService(outTc, pus_ST18_onBoardControlProcedure);
		pus_setTcSubtype(outTc, subtype);
		pus_setTcSource(outTc, apid);

		return PUS_GET_ERROR();
	}

	return PUS_SET_ERROR(PUS_NO_ERROR);
}

pusError_t pus_tc_18_1_createLoadObcpDirectRequest(pusPacket_t* outTc, pusApid_t apid, pusSequenceCount_t sequenceCount)
{
	if ( NULL == outTc )
	{
		return PUS_SET_ERROR(PUS_ERROR_NULLPTR);
	}

	pusError_t error = pus_tc_18_X_createDefaultRequest(outTc, apid, sequenceCount, pus_TC_18_1_loadObcpDirect);
	if( PUS_NO_ERROR != error )
	{
		return PUS_GET_ERROR();
	}

	//Set data field
	//pus_setTcDataKind(outTc, kind);

	return PUS_SET_ERROR(PUS_NO_ERROR);
}

pusError_t pus_tc_18_2_createUnloadObcpRequest(pusPacket_t* outTc, pusApid_t apid, pusSequenceCount_t sequenceCount)
{
	if ( NULL == outTc )
	{
		return PUS_SET_ERROR(PUS_ERROR_NULLPTR);
	}

	pusError_t error = pus_tc_18_X_createDefaultRequest(outTc, apid, sequenceCount, pus_TC_18_2_unloadObcp);
	if( PUS_NO_ERROR != error )
	{
		return PUS_GET_ERROR();
	}

	//Set data field
	//pus_setTcDataKind(outTc, kind);

	return PUS_SET_ERROR(PUS_NO_ERROR);
}

pusError_t pus_tc_18_3_createActivateObcpRequest(pusPacket_t* outTc, pusApid_t apid, pusSequenceCount_t sequenceCount)
{
	if ( NULL == outTc )
	{
		return PUS_SET_ERROR(PUS_ERROR_NULLPTR);
	}

	pusError_t error = pus_tc_18_X_createDefaultRequest(outTc, apid, sequenceCount, pus_TC_18_3_activateObcp);
	if( PUS_NO_ERROR != error )
	{
		return PUS_GET_ERROR();
	}

	//Set data field
	//pus_setTcDataKind(outTc, kind);

	return PUS_SET_ERROR(PUS_NO_ERROR);
}

pusError_t pus_tc_18_4_createStopObcpRequest(pusPacket_t* outTc, pusApid_t apid, pusSequenceCount_t sequenceCount)
{
	if ( NULL == outTc )
	{
		return PUS_SET_ERROR(PUS_ERROR_NULLPTR);
	}

	pusError_t error = pus_tc_18_X_createDefaultRequest(outTc, apid, sequenceCount, pus_TC_18_4_stopObcp);
	if( PUS_NO_ERROR != error )
	{
		return PUS_GET_ERROR();
	}

	//Set data field
	//pus_setTcDataKind(outTc, kind);

	return PUS_SET_ERROR(PUS_NO_ERROR);
}

pusError_t pus_tc_18_5_createSuspendObcpRequest(pusPacket_t* outTc, pusApid_t apid, pusSequenceCount_t sequenceCount)
{
	if ( NULL == outTc )
	{
		return PUS_SET_ERROR(PUS_ERROR_NULLPTR);
	}

	pusError_t error = pus_tc_18_X_createDefaultRequest(outTc, apid, sequenceCount, pus_TC_18_5_suspendObcp);
	if( PUS_NO_ERROR != error )
	{
		return PUS_GET_ERROR();
	}

	//Set data field
	//pus_setTcDataKind(outTc, kind);

	return PUS_SET_ERROR(PUS_NO_ERROR);
}

pusError_t pus_tc_18_6_createResumeObcpRequest(pusPacket_t* outTc, pusApid_t apid, pusSequenceCount_t sequenceCount)
{
	if ( NULL == outTc )
	{
		return PUS_SET_ERROR(PUS_ERROR_NULLPTR);
	}

	pusError_t error = pus_tc_18_X_createDefaultRequest(outTc, apid, sequenceCount, pus_TC_18_6_resumeObcp);
	if( PUS_NO_ERROR != error )
	{
		return PUS_GET_ERROR();
	}

	//Set data field
	//pus_setTcDataKind(outTc, kind);

	return PUS_SET_ERROR(PUS_NO_ERROR);
}

pusError_t pus_tc_18_12_createAbortObcpRequest(pusPacket_t* outTc, pusApid_t apid, pusSequenceCount_t sequenceCount)
{
	if ( NULL == outTc )
	{
		return PUS_SET_ERROR(PUS_ERROR_NULLPTR);
	}

	pusError_t error = pus_tc_18_X_createDefaultRequest(outTc, apid, sequenceCount, pus_TC_18_12_abortObcp);
	if( PUS_NO_ERROR != error )
	{
		return PUS_GET_ERROR();
	}

	//Set data field
	//pus_setTcDataKind(outTc, kind);

	return PUS_SET_ERROR(PUS_NO_ERROR);
}

pusError_t pus_tc_18_13_createLoadObcpReferenceRequest(pusPacket_t* outTc, pusApid_t apid, pusSequenceCount_t sequenceCount)
{
	if ( NULL == outTc )
	{
		return PUS_SET_ERROR(PUS_ERROR_NULLPTR);
	}

	pusError_t error = pus_tc_18_X_createDefaultRequest(outTc, apid, sequenceCount, pus_TC_18_13_loadObcpByReference);
	if( PUS_NO_ERROR != error )
	{
		return PUS_GET_ERROR();
	}

	//Set data field
	//pus_setTcDataKind(outTc, kind);

	return PUS_SET_ERROR(PUS_NO_ERROR);
}

pusError_t pus_tc_18_21_createStartObcpEngineRequest(pusPacket_t* outTc, pusApid_t apid, pusSequenceCount_t sequenceCount)
{
	if ( NULL == outTc )
	{
		return PUS_SET_ERROR(PUS_ERROR_NULLPTR);
	}

	pusError_t error = pus_tc_18_X_createDefaultRequest(outTc, apid, sequenceCount, pus_TC_18_21_startObcpEngine);
	if( PUS_NO_ERROR != error )
	{
		return PUS_GET_ERROR();
	}

	pus_setTcDataKind(outTc, pus_TC_DATA_NONE);

	return PUS_SET_ERROR(PUS_NO_ERROR);
}

pusError_t pus_tc_18_22_createStopObcpEngineRequest(pusPacket_t* outTc, pusApid_t apid, pusSequenceCount_t sequenceCount)
{
	if ( NULL == outTc )
	{
		return PUS_SET_ERROR(PUS_ERROR_NULLPTR);
	}

	pusError_t error = pus_tc_18_X_createDefaultRequest(outTc, apid, sequenceCount, pus_TC_18_22_stopObcpEngine);
	if( PUS_NO_ERROR != error )
	{
		return PUS_GET_ERROR();
	}

	pus_setTcDataKind(outTc, pus_TC_DATA_NONE);

	return PUS_SET_ERROR(PUS_NO_ERROR);
}

pusError_t pus_expectSt18Tc(const pusPacket_t* packet, pusSubservice_t expectedSubtype, const char* function)
{
	pusError_t expectResult = pus_expectTcHeader(packet, function, (pusErrorData_t){.integer=0});
	if (PUS_NO_ERROR == expectResult)
	{
		pusService_t service = pus_getTcService(packet);
		pusSubservice_t subtype = pus_getTcSubtype(packet);

		if (service != pus_ST18_onBoardControlProcedure)
		{
			pus_setError(PUS_ERROR_TC_SERVICE, function, (pusErrorData_t){.integer=service});
			return PUS_ERROR_TC_SERVICE;
		}

		if (expectedSubtype == pusSubtype_NONE)
		{
			// Check that subtype corresponds to ST[17]
			if ((subtype != pus_TC_18_1_loadObcpDirect) &&
				(subtype != pus_TC_18_2_unloadObcp) &&
				(subtype != pus_TC_18_3_activateObcp) &&
				(subtype != pus_TC_18_4_stopObcp) &&
				(subtype != pus_TC_18_5_suspendObcp) &&
				(subtype != pus_TC_18_6_resumeObcp) &&
				(subtype != pus_TC_18_12_abortObcp) &&
				(subtype != pus_TC_18_13_loadObcpByReference) &&
				(subtype != pus_TC_18_21_startObcpEngine) &&
				(subtype != pus_TC_18_22_stopObcpEngine))
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

		return PUS_NO_ERROR;
	}
	else
	{
		return expectResult;
	}
}


