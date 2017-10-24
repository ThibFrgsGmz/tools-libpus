## Template for generating the PUS ST[03] housekeeping and diagnostic
## service configuration
##
## The template expects the following arguments:
## - config: a dictionary containing the service configuration, read from the JSON file
## - tempvars: an empty dictionary to be used to store global counters within the template 
##             (see http://docs.makotemplates.org/en/latest/runtime.html#context)
##
// PUS service ST[03] configuration
// 
// File automatically generated from the pus_st30_config.h.mako template
//
//                     -- DO NOT MODIFY --

#ifndef PUS_ST03_CONFIG_H
#define PUS_ST03_CONFIG_H

#include "pus_error.h"
#include "pus_types.h"
#include "pus_st03.h"


// Parameter identifiers
<% count = 0 %>
% for param in config['parameters']:
#define ${param['label']} ((pusSt03ParamId_t) ${count}) \
<% count = count + 1 %>
% endfor
#define PUS_ST03_PARAM_LIMIT ((pusSt03ParamId_t) ${count})


//! Array with parameter information (length = number of parameters)
extern pusSt03ParamInfo_t pus_st03_paramInfo[];

//! Array for parameters values (all stored in 64 bits)
extern pusInternalParam_t pus_st03_params[];

//! Structure of the default HK report
extern pusSt03ReportInfo_t pus_st03_defaultHkReportInfo;

//! First invalid parameter ID
extern const pusSt03ParamId_t pus_ST03_PARAM_LIMIT;

//! Initialize the configuration of the ST[03] service from the mission database
pusError_t pus_st03_configure();


#endif // PUS_ST03_CONFIG_H
