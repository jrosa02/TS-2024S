#include "zad62pendulum_22a_capi_host.h"
static zad62pendulum_22a_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        zad62pendulum_22a_host_InitializeDataMapInfo(&(root), "zad62pendulum_22a");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
