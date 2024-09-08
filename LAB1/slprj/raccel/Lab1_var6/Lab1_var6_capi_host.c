#include "Lab1_var6_capi_host.h"
static Lab1_var6_host_DataMapInfo_T root;
static int initialized = 0;
rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        Lab1_var6_host_InitializeDataMapInfo(&(root), "Lab1_var6");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction(){return(getRootMappingInfo());}
