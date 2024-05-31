#ifndef RTW_HEADER_zad62pendulum_22a_cap_host_h__
#define RTW_HEADER_zad62pendulum_22a_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap_simtarget.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
zad62pendulum_22a_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void zad62pendulum_22a_host_InitializeDataMapInfo (
zad62pendulum_22a_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
