/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */ 

#include "mpcontext.h"
#include "pthread.h"

pthread_t mp_ctx_id[MP_MAX_CONTEXT];
struct _mp_state_ctx_t* mp_ctx_ptr[MP_MAX_CONTEXT];

// LOCK
pthread_mutex_t mp_context_lock;

void mp_init_context_arrays()
{
    for (int i = 0; i < MP_MAX_CONTEXT; i++)
    {
        mp_ctx_id[i] = 0;
        mp_ctx_ptr[i] = NULL;
    }
    
    // LOCK
    pthread_mutex_init(&mp_context_lock, NULL);
}


struct _mp_state_ctx_t* mp_get_context()
{
    pthread_mutex_lock(&mp_context_lock);
    
    pthread_t self = pthread_self();
    for (int i = 0; i < MP_MAX_CONTEXT; i++)
    {
        if (self == mp_ctx_id[i])
        {
            pthread_mutex_unlock(&mp_context_lock);
            return mp_ctx_ptr[i];
        }
    }
    
    pthread_mutex_unlock(&mp_context_lock);
    return NULL;
}


int mp_register_current_context(struct _mp_state_ctx_t* ctx)
{
    pthread_mutex_lock(&mp_context_lock);
    
    for (int i = 0; i < MP_MAX_CONTEXT; i++)
    {
        if (0 == mp_ctx_id[i])
        {
            mp_ctx_id[i] = pthread_self();
            mp_ctx_ptr[i] = ctx;
            pthread_mutex_unlock(&mp_context_lock);
            return i;
        }
    }

    pthread_mutex_unlock(&mp_context_lock);
    return -1;
}
    
