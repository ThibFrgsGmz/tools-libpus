//! \file pus_st03_packets.h
/*! \brief Implementation of the PUS service ST[03] Housekeeping.
 *
 *  This module contains the functions to manage the on-board housekeeping parameters
 *  database, to generate housekeeping and parameter reports, and to process the TCs
 *  to manage this service.
 *
 *  Only a subset of the standard requests and reports are implemented.
 *
 *  - Housekeeping
 *    + TM[3,25] Housekeeping parameter report
 *
 *  \author GMV
 */

#ifndef PUS_ST03_PACKETS_H
#define PUS_ST03_PACKETS_H

#include "pus_apid.h"
#include "pus_error.h"
#include "pus_housekeeping.h"
#include "pus_threads.h"
#include "pus_types.h"


//
// Service initialization and tear down
//

//! Function to initialize the service ST[03] configuration
/*! This function is generated from the mission database, and it should be declared
 *  in \ref pus_st03_config.h
 */
extern pusError_t pus_hk_configure();

//! Initialize the data structures of the PUS ST[03] service
/*! Create the parameter tables from the configuration and initializes a mutex.
 *  Alternatively, can pass NULL as mutex if access protection is provided externally,
 *  for instance, by TASTE.
 *  \param[inout] mutex Mutex to be initialized; if NULL, access protection is disabled
 *  \return Error code (PUS_NO_ERROR if success)
 */
pusError_t pus_hk_initialize(pusMutex_t* mutex);

//! Release the resources allocated by the PUS ST[03] service
/*! \return Error code (PUS_NO_ERROR if success)
 */
pusError_t pus_hk_finalize();

//! Check if the service ST[03] is initialized
bool pus_hk_isInitialized();


//
// Report creation
//

//! Build the default housekeeping parameter report
/*! Builds a TM[3_25] packet in the packet passed as parameter.
 *  \param[out] outTm Packet variable to build the TM
 *  \param[in] apid APID of the process sending the report
 *  \param[in] count TM sequence counter for the source APID
 *  \return Error code (PUS_NO_ERROR if success)
 */
pusError_t pus_tm_3_25_createHousekeepingReportDefault(pusPacket_t* outTm, pusApidInfo_t* apid, pusApid_t destination);

//! Build a housekeeping parameter report
/*! Builds a TM[3,25 packet in the packet passed as parameter.
 *  \param[out] outTm Packet variable to build the TM
 *  \param[in] apid APID of the process sending the report
 *  \param[in] count TM sequence counter for the source APID
 *  \param[in] reportId The report ID
 *  \return Error code (PUS_NO_ERROR if success)
 */
pusError_t pus_tm_3_25_createHousekeepingReport(pusPacket_t* outTm, pusApidInfo_t* apid, pusSt03HousekeepingReportId_t reportId, pusApid_t destination);



//
// Getters and setters for HK parameters
//

//! Get the current value of an uint32_t parameter, using a lock
/*! If the service was initialized with mutex, uses it to lock the parameter table.
 *  \param[in] param The parameter identifier
 *  \param[out] outValue The parameter value
 *  \return Error code (PUS_NO_ERROR if success)
 */
pusError_t pus_hk_getUInt32Param(pusSt03ParamId_t param, uint32_t* outValue);

//! Set the value of an uint32_t parameter, using a lock
/*! If the service was initialized with mutex, uses it to lock the parameter table.
 *  \param[in] param The parameter identifier
 *  \param[in] value The parameter value
 *  \return Error code (PUS_NO_ERROR if success)
 */
pusError_t pus_hk_setUInt32Param(pusSt03ParamId_t param, uint32_t value);

//! Get the current value of an int32_t parameter, using a lock
/*! If the service was initialized with mutex, uses it to lock the parameter table.
 *  \param[in] param The parameter identifier
 *  \param[out] outValue The parameter value
 *  \return Error code (PUS_NO_ERROR if success)
 */
pusError_t pus_hk_getInt32Param(pusSt03ParamId_t param, int32_t* outValue);

//! Set the value of an int32_t parameter, using a lock
/*! If the service was initialized with mutex, uses it to lock the parameter table.
 *  \param[in] param The parameter identifier
 *  \param[in] value The parameter value
 *  \return Error code (PUS_NO_ERROR if success)
 */
pusError_t pus_hk_setInt32Param(pusSt03ParamId_t param, int32_t value);

//! Get the current value of a double parameter, using a lock
/*! If the service was initialized with mutex, uses it to lock the parameter table.
 *  \param[in] param The parameter identifier
 *  \param[out] outValue The parameter value
 *  \return Error code (PUS_NO_ERROR if success)
 */
pusError_t pus_hk_getReal64Param(pusSt03ParamId_t param, double* outValue);

//! Set the value of a double parameter, using a lock
/*! If the service was initialized with mutex, uses it to lock the parameter table.
 *  \param[in] param The parameter identifier
 *  \param[in] value The parameter value
 *  \return Error code (PUS_NO_ERROR if success)
 */
pusError_t pus_hk_setReal64Param(pusSt03ParamId_t param, double value);

//! Get the current value of a bool parameter, using a lock
/*! If the service was initialized with mutex, uses it to lock the parameter table.
 *  \param[in] param The parameter identifier
 *  \param[out] outValue The parameter value
 *  \return Error code (PUS_NO_ERROR if success)
 */
pusError_t pus_hk_getBoolParam(pusSt03ParamId_t param, bool* outValue);

//! Set the value of a Boolean parameter, using a lock
/*! If the service was initialized with mutex, uses it to lock the parameter table.
 *  \param[in] param The parameter identifier
 *  \param[in] value The parameter value
 *  \return Error code (PUS_NO_ERROR if success)
 */
pusError_t pus_hk_setBoolParam(pusSt03ParamId_t param, bool value);

//! Get the current value of an uint8_t parameter, using a lock
/*! If the service was initialized with mutex, uses it to lock the parameter table.
 *  \param[in] param The parameter identifier
 *  \param[out] outValue The parameter value
 *  \return Error code (PUS_NO_ERROR if success)
 */
pusError_t pus_hk_getByteParam(pusSt03ParamId_t param, uint8_t* outValue);

//! Set the value of an uint8_t parameter, using a lock
/*! If the service was initialized with mutex, uses it to lock the parameter table.
 *  \param[in] param The parameter identifier
 *  \param[in] value The parameter value
 *  \return Error code (PUS_NO_ERROR if success)
 */
pusError_t pus_hk_setByteParam(pusSt03ParamId_t param, uint8_t value);


//
// Getters and setters for report fields
//

//! Getter for the TM[3,25] report ID field
pusSt03HousekeepingReportId_t pus_tm_3_25_getReportId(const pusPacket_t* tm);

//! Setter for the TM[3,25] report ID field
void pus_tm_3_25_setReportId(pusPacket_t* outTm, pusSt03HousekeepingReportId_t reportId);

//! Copy the values of a list of parameters into an output array
/*! \param[out] outTm TM packet to fill the parameter values
 *  \param[in] paramIds Array of the parameter IDs whose values will be included in the report
 *  \param[in] numParams Length of the paramIds array; must be at most \ref pus_ST03_MAX_REPORT_LENGTH
 */
pusError_t pus_tm_3_25_setParameterValues(pusPacket_t* outTm, const pusSt03ParamId_t* paramIds, size_t numParams);

//! Get the value of one parameter in the report (to be casted to the correct type)
/*! \param[in] tm The TM packet
 *  \param[in] index The index of the parameter to be returned; must be at most \ref pus_ST03_MAX_REPORT_LENGTH
 *  \param[out] outValue Outputs the parameter value as \ref pusInternalParam_t, to be casted to the correct type
 */
pusError_t pus_tm_3_25_getParameterValue(const pusPacket_t* tm, size_t index, pusStoredParam_t* outValue);

//! Get the number of parameters in the report
/*! \param[in] tm The TM packet
 *  \param[out] outNumParams Outputs the number of parameters
 */
pusError_t pus_tm_3_25_getNumParameters(const pusPacket_t* tm, size_t* outNumParams);


//
// Parameter checking
//

//! Check that a packet is of a PUS ST[03] kind
/*! \param[in] packet The PUS packet
 *  \param[in] expectedSubtype Check that the TM has this subtype; use pusSubtype_NONE to check for all TM types in ST[03]
 *  \param[in] function Function name to write as error information (use with the macro \ref PUS_EXPECT_ST03 to include the caller function's name)
 *  \return If valid TM, PUS_NO_ERROR; otherwise, an error code
 */
pusError_t pus_expectSt03Tm(const pusPacket_t* packet, pusSubservice_t expectedSubtype, const char* function);

//! Helper macro for pus_expectSt01; adds function name
#define PUS_EXPECT_ST03(packet, subtype) pus_expectSt03Tm((packet), (subtype), __func__)


#endif // PUS_ST03_PACKETS_H