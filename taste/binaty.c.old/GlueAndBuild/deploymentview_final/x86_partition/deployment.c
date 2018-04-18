#include <po_hi_protected.h>
#include <deployment.h>
#include <po_hi_types.h>
#include <po_hi_transport.h>
/*****************************************************/
/*  This file was automatically generated by Ocarina */
/*  Do NOT hand-modify this file, as your            */
/*  changes will be lost when you re-run Ocarina     */
/*****************************************************/
__po_hi_protected_protocol_t __po_hi_protected_configuration[__PO_HI_NB_PROTECTED] = {__PO_HI_PROTECTED_REGULAR,__PO_HI_PROTECTED_REGULAR,__PO_HI_PROTECTED_REGULAR,__PO_HI_PROTECTED_REGULAR,__PO_HI_PROTECTED_REGULAR,__PO_HI_PROTECTED_REGULAR,__PO_HI_PROTECTED_REGULAR,__PO_HI_PROTECTED_REGULAR,__PO_HI_PROTECTED_REGULAR,__PO_HI_PROTECTED_REGULAR,__PO_HI_PROTECTED_REGULAR,__PO_HI_PROTECTED_REGULAR,__PO_HI_PROTECTED_REGULAR,__PO_HI_PROTECTED_REGULAR,__PO_HI_PROTECTED_REGULAR,__PO_HI_PROTECTED_REGULAR,__PO_HI_PROTECTED_REGULAR,__PO_HI_PROTECTED_REGULAR,__PO_HI_PROTECTED_REGULAR,__PO_HI_PROTECTED_REGULAR,__PO_HI_PROTECTED_REGULAR};
__po_hi_uint8_t __po_hi_protected_priorities[__PO_HI_NB_PROTECTED] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
__po_hi_entity_t __po_hi_port_global_to_entity[__PO_HI_NB_PORTS] = {x86_partition_tcdispatch_k_entity,x86_partition_tcdispatch_k_entity,x86_partition_tmdispatch_k_entity,x86_partition_tmdispatch_k_entity,x86_partition_st05_k_entity,x86_partition_st03_k_entity,x86_partition_vt_ground_newtm_k_entity,x86_partition_vt_ground_newtm_k_entity,x86_partition_vt_ground_triggertmgui_k_entity,x86_partition_vt_tcqueue_newtc_k_entity,x86_partition_vt_events_debugeventstrigger_k_entity,x86_partition_vt_st19_eventactiontrigger_k_entity,x86_partition_vt_st19_eventactiontrigger_k_entity,x86_partition_vt_st12_pmontrigger_k_entity,x86_partition_vt_trigger_hkreporttrigger_k_entity,x86_partition_vt_trigger_hkreporttrigger_k_entity,x86_partition_vt_trigger_hkreporttrigger_k_entity,x86_partition_vt_trigger_hkreporttrigger_k_entity,x86_partition_vt_trigger_hkreporttrigger_k_entity,x86_partition_vt_trigger_hkreporttrigger_k_entity,x86_partition_vt_trigger_hkreporttrigger_k_entity,x86_partition_vt_trigger_tmdispatchtrigger_k_entity,x86_partition_vt_trigger_tmdispatchtrigger_k_entity,x86_partition_vt_trigger_tmdispatchtrigger_k_entity,x86_partition_vt_trigger_tmdispatchtrigger_k_entity,x86_partition_vt_trigger_tmdispatchtrigger_k_entity,x86_partition_vt_trigger_tmdispatchtrigger_k_entity,x86_partition_vt_trigger_tmdispatchtrigger_k_entity,x86_partition_vt_trigger_eventactiontrigger_k_entity,x86_partition_vt_trigger_eventactiontrigger_k_entity,x86_partition_vt_trigger_eventactiontrigger_k_entity,x86_partition_vt_trigger_eventactiontrigger_k_entity,x86_partition_vt_trigger_eventactiontrigger_k_entity,x86_partition_vt_trigger_eventactiontrigger_k_entity,x86_partition_vt_trigger_eventactiontrigger_k_entity,x86_partition_vt_trigger_tcdispatchtrigger_k_entity,x86_partition_vt_trigger_tcdispatchtrigger_k_entity,x86_partition_vt_trigger_tcdispatchtrigger_k_entity,x86_partition_vt_trigger_tcdispatchtrigger_k_entity,x86_partition_vt_trigger_tcdispatchtrigger_k_entity,x86_partition_vt_trigger_tcdispatchtrigger_k_entity,x86_partition_vt_trigger_tcdispatchtrigger_k_entity,x86_partition_vt_trigger_pmontrigger_k_entity,x86_partition_vt_trigger_pmontrigger_k_entity,x86_partition_vt_trigger_pmontrigger_k_entity,x86_partition_vt_trigger_pmontrigger_k_entity,x86_partition_vt_trigger_pmontrigger_k_entity,x86_partition_vt_trigger_pmontrigger_k_entity,x86_partition_vt_trigger_pmontrigger_k_entity,x86_partition_vt_trigger_eventreporttrigger_k_entity,x86_partition_vt_trigger_eventreporttrigger_k_entity,x86_partition_vt_trigger_eventreporttrigger_k_entity,x86_partition_vt_trigger_eventreporttrigger_k_entity,x86_partition_vt_trigger_eventreporttrigger_k_entity,x86_partition_vt_trigger_eventreporttrigger_k_entity,x86_partition_vt_trigger_eventreporttrigger_k_entity,x86_partition_vt_trigger_debugeventtrigger_k_entity,x86_partition_vt_trigger_debugeventtrigger_k_entity,x86_partition_vt_trigger_debugeventtrigger_k_entity,x86_partition_vt_trigger_debugeventtrigger_k_entity,x86_partition_vt_trigger_debugeventtrigger_k_entity,x86_partition_vt_trigger_debugeventtrigger_k_entity,x86_partition_vt_trigger_debugeventtrigger_k_entity};
char* __po_hi_port_global_names[__PO_HI_NB_PORTS] = {"tcdispatch_global_inport_tctrigger","tcdispatch_global_outport_newtc_vt","tmdispatch_global_inport_tmtrigger","tmdispatch_global_outport_newtm","st05_global_inport_eventreporttrigger","st03_global_inport_hkreporttrigger","vt_ground_newtm_global_inport_artificial_newtm","vt_ground_newtm_global_outport_newtc_vt","vt_ground_triggertmgui_global_outport_newtc_vt","vt_tcqueue_newtc_global_inport_artificial_newtc","vt_events_debugeventstrigger_global_inport_artificial_debugeventstrigger","vt_st19_eventactiontrigger_global_inport_artificial_eventactiontrigger","vt_st19_eventactiontrigger_global_outport_newtc_vt","vt_st12_pmontrigger_global_inport_artificial_pmontrigger","vt_trigger_hkreporttrigger_global_outport_tmtrigger_vt","vt_trigger_hkreporttrigger_global_outport_hkreporttrigger_vt","vt_trigger_hkreporttrigger_global_outport_pmontrigger_vt","vt_trigger_hkreporttrigger_global_outport_eventreporttrigger_vt","vt_trigger_hkreporttrigger_global_outport_tctrigger_vt","vt_trigger_hkreporttrigger_global_outport_debugeventstrigger_vt","vt_trigger_hkreporttrigger_global_outport_eventactiontrigger_vt","vt_trigger_tmdispatchtrigger_global_outport_tmtrigger_vt","vt_trigger_tmdispatchtrigger_global_outport_hkreporttrigger_vt","vt_trigger_tmdispatchtrigger_global_outport_pmontrigger_vt","vt_trigger_tmdispatchtrigger_global_outport_eventreporttrigger_vt","vt_trigger_tmdispatchtrigger_global_outport_tctrigger_vt","vt_trigger_tmdispatchtrigger_global_outport_debugeventstrigger_vt","vt_trigger_tmdispatchtrigger_global_outport_eventactiontrigger_vt","vt_trigger_eventactiontrigger_global_outport_tmtrigger_vt","vt_trigger_eventactiontrigger_global_outport_hkreporttrigger_vt","vt_trigger_eventactiontrigger_global_outport_pmontrigger_vt","vt_trigger_eventactiontrigger_global_outport_eventreporttrigger_vt","vt_trigger_eventactiontrigger_global_outport_tctrigger_vt","vt_trigger_eventactiontrigger_global_outport_debugeventstrigger_vt","vt_trigger_eventactiontrigger_global_outport_eventactiontrigger_vt","vt_trigger_tcdispatchtrigger_global_outport_tmtrigger_vt","vt_trigger_tcdispatchtrigger_global_outport_hkreporttrigger_vt","vt_trigger_tcdispatchtrigger_global_outport_pmontrigger_vt","vt_trigger_tcdispatchtrigger_global_outport_eventreporttrigger_vt","vt_trigger_tcdispatchtrigger_global_outport_tctrigger_vt","vt_trigger_tcdispatchtrigger_global_outport_debugeventstrigger_vt","vt_trigger_tcdispatchtrigger_global_outport_eventactiontrigger_vt","vt_trigger_pmontrigger_global_outport_tmtrigger_vt","vt_trigger_pmontrigger_global_outport_hkreporttrigger_vt","vt_trigger_pmontrigger_global_outport_pmontrigger_vt","vt_trigger_pmontrigger_global_outport_eventreporttrigger_vt","vt_trigger_pmontrigger_global_outport_tctrigger_vt","vt_trigger_pmontrigger_global_outport_debugeventstrigger_vt","vt_trigger_pmontrigger_global_outport_eventactiontrigger_vt","vt_trigger_eventreporttrigger_global_outport_tmtrigger_vt","vt_trigger_eventreporttrigger_global_outport_hkreporttrigger_vt","vt_trigger_eventreporttrigger_global_outport_pmontrigger_vt","vt_trigger_eventreporttrigger_global_outport_eventreporttrigger_vt","vt_trigger_eventreporttrigger_global_outport_tctrigger_vt","vt_trigger_eventreporttrigger_global_outport_debugeventstrigger_vt","vt_trigger_eventreporttrigger_global_outport_eventactiontrigger_vt","vt_trigger_debugeventtrigger_global_outport_tmtrigger_vt","vt_trigger_debugeventtrigger_global_outport_hkreporttrigger_vt","vt_trigger_debugeventtrigger_global_outport_pmontrigger_vt","vt_trigger_debugeventtrigger_global_outport_eventreporttrigger_vt","vt_trigger_debugeventtrigger_global_outport_tctrigger_vt","vt_trigger_debugeventtrigger_global_outport_debugeventstrigger_vt","vt_trigger_debugeventtrigger_global_outport_eventactiontrigger_vt"};
char* __po_hi_port_global_model_names[__PO_HI_NB_PORTS] = {"inport_tctrigger","outport_newtc_vt","inport_tmtrigger","outport_newtm","inport_eventreporttrigger","inport_hkreporttrigger","inport_artificial_newtm","outport_newtc_vt","outport_newtc_vt","inport_artificial_newtc","inport_artificial_debugeventstrigger","inport_artificial_eventactiontrigger","outport_newtc_vt","inport_artificial_pmontrigger","outport_tmtrigger_vt","outport_hkreporttrigger_vt","outport_pmontrigger_vt","outport_eventreporttrigger_vt","outport_tctrigger_vt","outport_debugeventstrigger_vt","outport_eventactiontrigger_vt","outport_tmtrigger_vt","outport_hkreporttrigger_vt","outport_pmontrigger_vt","outport_eventreporttrigger_vt","outport_tctrigger_vt","outport_debugeventstrigger_vt","outport_eventactiontrigger_vt","outport_tmtrigger_vt","outport_hkreporttrigger_vt","outport_pmontrigger_vt","outport_eventreporttrigger_vt","outport_tctrigger_vt","outport_debugeventstrigger_vt","outport_eventactiontrigger_vt","outport_tmtrigger_vt","outport_hkreporttrigger_vt","outport_pmontrigger_vt","outport_eventreporttrigger_vt","outport_tctrigger_vt","outport_debugeventstrigger_vt","outport_eventactiontrigger_vt","outport_tmtrigger_vt","outport_hkreporttrigger_vt","outport_pmontrigger_vt","outport_eventreporttrigger_vt","outport_tctrigger_vt","outport_debugeventstrigger_vt","outport_eventactiontrigger_vt","outport_tmtrigger_vt","outport_hkreporttrigger_vt","outport_pmontrigger_vt","outport_eventreporttrigger_vt","outport_tctrigger_vt","outport_debugeventstrigger_vt","outport_eventactiontrigger_vt","outport_tmtrigger_vt","outport_hkreporttrigger_vt","outport_pmontrigger_vt","outport_eventreporttrigger_vt","outport_tctrigger_vt","outport_debugeventstrigger_vt","outport_eventactiontrigger_vt"};
__po_hi_port_kind_t __po_hi_port_global_kind[__PO_HI_NB_PORTS] = {__PO_HI_IN_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_DATA_INTRA_PROCESS,__PO_HI_IN_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_DATA_INTRA_PROCESS,__PO_HI_IN_EVENT_INTRA_PROCESS,__PO_HI_IN_EVENT_INTRA_PROCESS,__PO_HI_IN_EVENT_DATA_INTRA_PROCESS,__PO_HI_OUT_EVENT_DATA_INTRA_PROCESS,__PO_HI_OUT_EVENT_DATA_INTRA_PROCESS,__PO_HI_IN_EVENT_DATA_INTRA_PROCESS,__PO_HI_IN_EVENT_INTRA_PROCESS,__PO_HI_IN_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_DATA_INTRA_PROCESS,__PO_HI_IN_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS,__PO_HI_OUT_EVENT_INTRA_PROCESS};
__po_hi_uint32_t __po_hi_port_global_data_size[__PO_HI_NB_PORTS] = {sizeof (dataview__puspacket_buffer_impl),sizeof (dataview__puspacket_buffer_impl),sizeof (dataview__puspacket_buffer_impl),sizeof (dataview__puspacket_buffer_impl),sizeof (dataview__puspacket_buffer_impl),sizeof (dataview__puspacket_buffer_impl),sizeof (dataview__puspacket_buffer_impl)};
__po_hi_uint32_t __po_hi_port_global_queue_size[__PO_HI_NB_PORTS] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
__po_hi_local_port_t __po_hi_port_global_to_local[__PO_HI_NB_PORTS] = {tcdispatch_local_inport_tctrigger,tcdispatch_local_outport_newtc_vt,tmdispatch_local_inport_tmtrigger,tmdispatch_local_outport_newtm,st05_local_inport_eventreporttrigger,st03_local_inport_hkreporttrigger,vt_ground_newtm_local_inport_artificial_newtm,vt_ground_newtm_local_outport_newtc_vt,vt_ground_triggertmgui_local_outport_newtc_vt,vt_tcqueue_newtc_local_inport_artificial_newtc,vt_events_debugeventstrigger_local_inport_artificial_debugeventstrigger,vt_st19_eventactiontrigger_local_inport_artificial_eventactiontrigger,vt_st19_eventactiontrigger_local_outport_newtc_vt,vt_st12_pmontrigger_local_inport_artificial_pmontrigger,vt_trigger_hkreporttrigger_local_outport_tmtrigger_vt,vt_trigger_hkreporttrigger_local_outport_hkreporttrigger_vt,vt_trigger_hkreporttrigger_local_outport_pmontrigger_vt,vt_trigger_hkreporttrigger_local_outport_eventreporttrigger_vt,vt_trigger_hkreporttrigger_local_outport_tctrigger_vt,vt_trigger_hkreporttrigger_local_outport_debugeventstrigger_vt,vt_trigger_hkreporttrigger_local_outport_eventactiontrigger_vt,vt_trigger_tmdispatchtrigger_local_outport_tmtrigger_vt,vt_trigger_tmdispatchtrigger_local_outport_hkreporttrigger_vt,vt_trigger_tmdispatchtrigger_local_outport_pmontrigger_vt,vt_trigger_tmdispatchtrigger_local_outport_eventreporttrigger_vt,vt_trigger_tmdispatchtrigger_local_outport_tctrigger_vt,vt_trigger_tmdispatchtrigger_local_outport_debugeventstrigger_vt,vt_trigger_tmdispatchtrigger_local_outport_eventactiontrigger_vt,vt_trigger_eventactiontrigger_local_outport_tmtrigger_vt,vt_trigger_eventactiontrigger_local_outport_hkreporttrigger_vt,vt_trigger_eventactiontrigger_local_outport_pmontrigger_vt,vt_trigger_eventactiontrigger_local_outport_eventreporttrigger_vt,vt_trigger_eventactiontrigger_local_outport_tctrigger_vt,vt_trigger_eventactiontrigger_local_outport_debugeventstrigger_vt,vt_trigger_eventactiontrigger_local_outport_eventactiontrigger_vt,vt_trigger_tcdispatchtrigger_local_outport_tmtrigger_vt,vt_trigger_tcdispatchtrigger_local_outport_hkreporttrigger_vt,vt_trigger_tcdispatchtrigger_local_outport_pmontrigger_vt,vt_trigger_tcdispatchtrigger_local_outport_eventreporttrigger_vt,vt_trigger_tcdispatchtrigger_local_outport_tctrigger_vt,vt_trigger_tcdispatchtrigger_local_outport_debugeventstrigger_vt,vt_trigger_tcdispatchtrigger_local_outport_eventactiontrigger_vt,vt_trigger_pmontrigger_local_outport_tmtrigger_vt,vt_trigger_pmontrigger_local_outport_hkreporttrigger_vt,vt_trigger_pmontrigger_local_outport_pmontrigger_vt,vt_trigger_pmontrigger_local_outport_eventreporttrigger_vt,vt_trigger_pmontrigger_local_outport_tctrigger_vt,vt_trigger_pmontrigger_local_outport_debugeventstrigger_vt,vt_trigger_pmontrigger_local_outport_eventactiontrigger_vt,vt_trigger_eventreporttrigger_local_outport_tmtrigger_vt,vt_trigger_eventreporttrigger_local_outport_hkreporttrigger_vt,vt_trigger_eventreporttrigger_local_outport_pmontrigger_vt,vt_trigger_eventreporttrigger_local_outport_eventreporttrigger_vt,vt_trigger_eventreporttrigger_local_outport_tctrigger_vt,vt_trigger_eventreporttrigger_local_outport_debugeventstrigger_vt,vt_trigger_eventreporttrigger_local_outport_eventactiontrigger_vt,vt_trigger_debugeventtrigger_local_outport_tmtrigger_vt,vt_trigger_debugeventtrigger_local_outport_hkreporttrigger_vt,vt_trigger_debugeventtrigger_local_outport_pmontrigger_vt,vt_trigger_debugeventtrigger_local_outport_eventreporttrigger_vt,vt_trigger_debugeventtrigger_local_outport_tctrigger_vt,vt_trigger_debugeventtrigger_local_outport_debugeventstrigger_vt,vt_trigger_debugeventtrigger_local_outport_eventactiontrigger_vt};
__po_hi_node_t __po_hi_entity_table[__PO_HI_NB_ENTITIES] = {x86_partition_k,x86_partition_k,x86_partition_k,x86_partition_k,x86_partition_k,x86_partition_k,x86_partition_k,x86_partition_k,x86_partition_k,x86_partition_k,x86_partition_k,x86_partition_k,x86_partition_k,x86_partition_k,x86_partition_k,x86_partition_k,x86_partition_k,x86_partition_k};
__po_hi_uint8_t __po_hi_deployment_endiannesses[__PO_HI_NB_NODES] = {__PO_HI_LITTLEENDIAN};
__po_hi_device_id __po_hi_port_to_device[__PO_HI_NB_PORTS] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

