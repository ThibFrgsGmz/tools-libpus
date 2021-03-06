/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "pus_file_management.h"
#ifdef PUS_CONFIGURE_ST23_ENABLED

#ifndef __sparc__
	#include "pus_file_management_linux.c"
#else
	#include "pus_file_management_rtems.c"
#endif

/*
#ifdef __gnu_linux__
	#include "pus_file_management_linux.c"
#endif

//TODO
#ifdef RTEMS
	#include "pus_filemanagement_rtems.c"
#endif
*/

#endif
