/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "pus_notify.h"
#include "pus_packet_queues.h"
#include "pus_error.h"

pthread_mutex_t receivedMutex; // needed to add/remove data from the buffer

pusError_t pus_notify_initialize()
{
	int res = 0;
	res = pthread_mutex_init(&receivedMutex, NULL);
	if (0 != res)
	{
		return PUS_SET_ERROR(PUS_ERROR_THREADS);
	}

	return pus_packetQueues_initialize();
}

pusError_t pus_notify_finalize()
{
	int res = 0;
	res = pthread_mutex_destroy(&receivedMutex);
	if (0 != res)
	{
		return PUS_SET_ERROR(PUS_ERROR_THREADS);
	}
	return PUS_NO_ERROR;
}

// produce random numbers
pusError_t pus_notify_writeTm(pusPacket_t *packet)
{
	pusError_t error;
	pthread_mutex_lock(&receivedMutex);
	error = pus_packetQueues_push(packet, &pus_packetQueue_tm);
	pthread_mutex_unlock(&receivedMutex);

	return error;
}

// consume random numbers
pusError_t pus_notify_readTm(pusPacket_t *packet)
{
	pusError_t error;
	pthread_mutex_lock(&receivedMutex);
	error = pus_packetQueues_pop(packet, &pus_packetQueue_tm);
	pthread_mutex_unlock(&receivedMutex);

	return error;
}

// produce random numbers
pusError_t pus_notify_writeTc(pusPacket_t *packet)
{
	pusError_t error;
	pthread_mutex_lock(&receivedMutex);
	error = pus_packetQueues_push(packet, &pus_packetQueue_tc);
	pthread_mutex_unlock(&receivedMutex);

	return error;
}

// consume random numbers
pusError_t pus_notify_readTc(pusPacket_t *packet)
{
	pusError_t error;
	pthread_mutex_lock(&receivedMutex);
	error = pus_packetQueues_pop(packet, &pus_packetQueue_tc);
	pthread_mutex_unlock(&receivedMutex);

	return error;
}

pusError_t pus_notify_sendPacket(pusPacket_t *packet)
{
	return pus_notify_writeTc(packet);
}

/*void set_fun_pointer(void (*sending_interface_)(pusPacket_t *))
{
	sending_interface = sending_interface_;
}*/

size_t pus_notify_getNumPackets()
{
	return pus_packetQueue_tm.nPacketInside;
}

