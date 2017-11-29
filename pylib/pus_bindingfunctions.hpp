#ifndef PUS_BINDINGFUNCTIONS_HPP
#define PUS_BINDINGFUNCTIONS_HPP
#include <time.h>
#include "pus_packet.h"
#include "pus_apid.h"
#include "pus_st01_packets.h"
#include "pus_st03_packets.h"
#include "pus_st05_packets.h"
#include "pus_st08_packets.h"
#include "pus_st17_packets.h"
#include "pus_st19_packets.h"

typedef unsigned int uint;

pusError_t pus_initApidInfo_(pusApidInfo_t* obj, pusApid_t apid);
uint pus_getPacketVersion_(const pusPacket_t* packet);
uint pus_getPacketType_(const pusPacket_t* packet);
uint pus_getSequenceFlags_(const pusPacket_t* packet);
uint pus_getTmPusVersion_(const pusPacket_t* packet);
uint pus_getTcPusVersion_(const pusPacket_t* packet);
struct timespec *pus_getTmPacketTime_(const pusPacket_t* packet);


#endif
