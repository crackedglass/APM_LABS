#ifndef RTW_HEADER_Lab1_var6_h_
#define RTW_HEADER_Lab1_var6_h_
#ifndef Lab1_var6_COMMON_INCLUDES_
#define Lab1_var6_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "Lab1_var6_types.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME Lab1_var6
#define NSAMPLE_TIMES (2) 
#define NINPUTS (1)       
#define NOUTPUTS (1)     
#define NBLOCKIO (8) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (4)   
#elif NCSTATES != 4
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T ndedipnfq1 ; real_T ctqn5kamza ; real_T k2lvatveae ;
real_T kdionuhshn ; real_T csgeclaf41 ; real_T dtd4wkfa3h ; real_T ft4pg2wifg
; real_T kj1tdtzjma ; } B ; typedef struct { struct { void * AQHandles ; }
jofco0taut ; struct { void * AQHandles ; } ajtz1fvk1i ; struct { void *
AQHandles ; } pckxrh4apq ; struct { void * AQHandles ; } d3sflgs32s ; struct
{ void * AQHandles ; } a2kuqadj5g ; struct { void * AQHandles ; } cyrz4gxcqe
; struct { void * AQHandles ; } ncj1li0w3s ; } DW ; typedef struct { real_T
paev0i0jme [ 2 ] ; real_T hniy43ogbq ; real_T bdiwdntwox ; } X ; typedef
struct { real_T paev0i0jme [ 2 ] ; real_T hniy43ogbq ; real_T bdiwdntwox ; }
XDot ; typedef struct { boolean_T paev0i0jme [ 2 ] ; boolean_T hniy43ogbq ;
boolean_T bdiwdntwox ; } XDis ; typedef struct { real_T paev0i0jme [ 2 ] ;
real_T hniy43ogbq ; real_T bdiwdntwox ; } CStateAbsTol ; typedef struct {
real_T paev0i0jme [ 2 ] ; real_T hniy43ogbq ; real_T bdiwdntwox ; } CXPtMin ;
typedef struct { real_T paev0i0jme [ 2 ] ; real_T hniy43ogbq ; real_T
bdiwdntwox ; } CXPtMax ; typedef struct { real_T adzfuowhmu ; } ExtU ;
typedef struct { real_T kvorxb20w4 ; } ExtY ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T Kd ; real_T
Ki ; real_T Kp ; real_T TransferFcn1_A [ 2 ] ; real_T TransferFcn1_C [ 2 ] ;
real_T Integrator_IC ; real_T TransferFcn2_A ; real_T TransferFcn2_C ; real_T
TransferFcn2_D ; } ; extern const char_T * RT_MEMORY_ALLOCATION_ERROR ;
extern B rtB ; extern X rtX ; extern DW rtDW ; extern ExtU rtU ; extern ExtY
rtY ; extern P rtP ; extern mxArray * mr_Lab1_var6_GetDWork ( ) ; extern void
mr_Lab1_var6_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_Lab1_var6_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Lab1_var6_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern const int_T
gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable
* gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
