#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Lab1_var6_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "Lab1_var6.h"
#include "Lab1_var6_capi.h"
#include "Lab1_var6_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"Lab1_var6/KDp" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0 ,
TARGET_STRING ( "Lab1_var6/KIp" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 2 , 0 , TARGET_STRING ( "Lab1_var6/KPp" ) , TARGET_STRING ( "Kp" ) , 0
, 0 , 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING ( "Lab1_var6/Integrator" ) ,
TARGET_STRING ( "Ki" ) , 0 , 0 , 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"Lab1_var6/Sum" ) , TARGET_STRING ( "err" ) , 0 , 0 , 0 , 0 , 0 } , { 5 , 0 ,
TARGET_STRING ( "Lab1_var6/Sum1" ) , TARGET_STRING ( "Summator" ) , 0 , 0 , 0
, 0 , 0 } , { 6 , 0 , TARGET_STRING ( "Lab1_var6/Transfer Fcn1" ) ,
TARGET_STRING ( "out" ) , 0 , 0 , 0 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"Lab1_var6/Transfer Fcn2" ) , TARGET_STRING ( "Kd" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 8 , TARGET_STRING (
"Lab1_var6/Integrator" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 }
, { 9 , TARGET_STRING ( "Lab1_var6/Transfer Fcn1" ) , TARGET_STRING ( "A" ) ,
0 , 1 , 0 } , { 10 , TARGET_STRING ( "Lab1_var6/Transfer Fcn1" ) ,
TARGET_STRING ( "C" ) , 0 , 2 , 0 } , { 11 , TARGET_STRING (
"Lab1_var6/Transfer Fcn2" ) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 12 ,
TARGET_STRING ( "Lab1_var6/Transfer Fcn2" ) , TARGET_STRING ( "C" ) , 0 , 0 ,
0 } , { 13 , TARGET_STRING ( "Lab1_var6/Transfer Fcn2" ) , TARGET_STRING (
"D" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ; static
int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const rtwCAPI_Signals
rtRootInputs [ ] = { { 14 , 0 , TARGET_STRING ( "Lab1_var6/Input" ) ,
TARGET_STRING ( "input" ) , 1 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] =
{ { 15 , 0 , TARGET_STRING ( "Lab1_var6/Output" ) , TARGET_STRING ( "out" ) ,
1 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 16 ,
TARGET_STRING ( "Kd" ) , 0 , 0 , 0 } , { 17 , TARGET_STRING ( "Ki" ) , 0 , 0
, 0 } , { 18 , TARGET_STRING ( "Kp" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , 0 , 0
, 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . csgeclaf41 , & rtB . kj1tdtzjma ,
& rtB . kdionuhshn , & rtB . ctqn5kamza , & rtB . k2lvatveae , & rtB .
ft4pg2wifg , & rtB . ndedipnfq1 , & rtB . dtd4wkfa3h , & rtP . Integrator_IC
, & rtP . TransferFcn1_A [ 0 ] , & rtP . TransferFcn1_C [ 0 ] , & rtP .
TransferFcn2_A , & rtP . TransferFcn2_C , & rtP . TransferFcn2_D , & rtU .
adzfuowhmu , & rtY . kvorxb20w4 , & rtP . Kd , & rtP . Ki , & rtP . Kp , } ;
static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = {
1 , 1 , 2 , 1 , 1 , 2 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0
} ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , (
int8_T ) 0 , ( uint8_T ) 0 } } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 8 , rtRootInputs , 1 , rtRootOutputs , 1 } ,
{ rtBlockParameters , 6 , rtModelParameters , 3 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 625466064U , 690198011U , 1013704761U ,
729869715U } , ( NULL ) , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ;
const rtwCAPI_ModelMappingStaticInfo * Lab1_var6_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void Lab1_var6_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Lab1_var6_host_InitializeDataMapInfo ( Lab1_var6_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath
( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
