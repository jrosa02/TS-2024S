#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "zad62pendulum_22a_capi_host.h"
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
#include "zad62pendulum_22a.h"
#include "zad62pendulum_22a_capi.h"
#include "zad62pendulum_22a_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"zad62pendulum_22a/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1
, 0 , TARGET_STRING ( "zad62pendulum_22a/Integrator" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 1 } , { 2 , 0 , TARGET_STRING (
"zad62pendulum_22a/Integrator1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1
} , { 3 , 0 , TARGET_STRING ( "zad62pendulum_22a/Math Function" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 4 , 0 , TARGET_STRING (
"zad62pendulum_22a/Product" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } ,
{ 5 , 0 , TARGET_STRING ( "zad62pendulum_22a/Sum" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 1 } , { 6 , 0 , TARGET_STRING (
"zad62pendulum_22a/Subsystem/Integrator3" ) , TARGET_STRING ( "" ) , 0 , 0 ,
1 , 0 , 1 } , { 7 , 0 , TARGET_STRING (
"zad62pendulum_22a/Subsystem/Product2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 1 } , { 8 , 0 , TARGET_STRING ( "zad62pendulum_22a/Subsystem/Sum1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 9 , 0 , TARGET_STRING (
"zad62pendulum_22a/Subsystem/Sum3" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 ,
1 } , { 10 , 0 , TARGET_STRING ( "zad62pendulum_22a/Subsystem1/Integrator3" )
, TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 11 , 0 , TARGET_STRING (
"zad62pendulum_22a/Subsystem1/Product2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 1 } , { 12 , 0 , TARGET_STRING ( "zad62pendulum_22a/Subsystem1/Sum1" )
, TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 13 , 0 , TARGET_STRING (
"zad62pendulum_22a/Subsystem1/Sum3" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0
, 1 } , { 14 , 0 , TARGET_STRING ( "zad62pendulum_22a/Subsystem2/Integrator3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 15 , 0 , TARGET_STRING (
"zad62pendulum_22a/Subsystem2/Product2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 1 } , { 16 , 0 , TARGET_STRING ( "zad62pendulum_22a/Subsystem2/Sum1" )
, TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 17 , 0 , TARGET_STRING (
"zad62pendulum_22a/Subsystem2/Sum3" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0
, 1 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 18 , TARGET_STRING (
"zad62pendulum_22a/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , {
19 , TARGET_STRING ( "zad62pendulum_22a/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 20 , TARGET_STRING (
"zad62pendulum_22a/Integrator1" ) , TARGET_STRING ( "InitialCondition" ) , 0
, 0 , 0 } , { 21 , TARGET_STRING ( "zad62pendulum_22a/Transfer Fcn1" ) ,
TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 22 , TARGET_STRING (
"zad62pendulum_22a/Transfer Fcn1" ) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , {
23 , TARGET_STRING ( "zad62pendulum_22a/Transfer Fcn1" ) , TARGET_STRING (
"D" ) , 0 , 0 , 0 } , { 24 , TARGET_STRING (
"zad62pendulum_22a/Subsystem/Integrator3" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 25 , TARGET_STRING (
"zad62pendulum_22a/Subsystem1/Integrator3" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 26 , TARGET_STRING (
"zad62pendulum_22a/Subsystem2/Integrator3" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 }
} ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 ,
( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 27 , TARGET_STRING ( "A"
) , 0 , 3 , 0 } , { 28 , TARGET_STRING ( "B" ) , 0 , 1 , 0 } , { 29 ,
TARGET_STRING ( "C" ) , 0 , 4 , 0 } , { 30 , TARGET_STRING ( "K" ) , 0 , 4 ,
0 } , { 31 , TARGET_STRING ( "N_bar" ) , 0 , 0 , 0 } , { 32 , TARGET_STRING (
"Q" ) , 0 , 3 , 0 } , { 33 , TARGET_STRING ( "R" ) , 0 , 0 , 0 } , { 34 ,
TARGET_STRING ( "x0" ) , 0 , 1 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . ddbpyibsa0 , & rtB . bjlxrzpo40 ,
& rtB . g2tyavdgbs , & rtB . ofzbqdti32 , & rtB . ad11h3ymy0 , & rtB .
nfdyhzfu2k , & rtB . pkc0g4sgww [ 0 ] , & rtB . f0gd3ousez , & rtB .
fyifxepdcj [ 0 ] , & rtB . jlt4s4n5cm [ 0 ] , & rtB . n355mqws3o [ 0 ] , &
rtB . erdvkrtgt2 , & rtB . glnshetsas [ 0 ] , & rtB . dsmklnb4cq [ 0 ] , &
rtB . hbhs0yltpk [ 0 ] , & rtB . jydw3zcoum , & rtB . l3ywnj4gmc [ 0 ] , &
rtB . ile0rmegxy [ 0 ] , & rtP . Constant_Value , & rtP . Integrator_IC , &
rtP . Integrator1_IC , & rtP . TransferFcn1_A , & rtP . TransferFcn1_C , &
rtP . TransferFcn1_D , & rtP . Integrator3_IC_me1ffwbjo3 , & rtP .
Integrator3_IC , & rtP . Integrator3_IC_dcvhd54gkt , & rtP . A [ 0 ] , & rtP
. B [ 0 ] , & rtP . C [ 0 ] , & rtP . K [ 0 ] , & rtP . N_bar , & rtP . Q [ 0
] , & rtP . R , & rtP . x0 [ 0 ] , } ; static int32_T * rtVarDimsAddrMap [ ]
= { ( NULL ) } ;
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
rtwCAPI_MATRIX_COL_MAJOR , 2 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 4 , 2 ,
0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } } ; static const uint_T rtDimensionArray
[ ] = { 1 , 1 , 2 , 1 , 2 , 2 , 1 , 2 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.0 } ; static const rtwCAPI_FixPtMap rtFixPtMap [
] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0
} , } ; static const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( NULL )
, ( NULL ) , 2 , 0 } , { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , ( int8_T ) 0 , ( uint8_T ) 0 } }
; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 18 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 9 ,
rtModelParameters , 8 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 485367134U , 4205088805U , 192371372U , 2081878811U } , ( NULL ) , 0 , (
boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * zad62pendulum_22a_GetCAPIStaticMap ( void )
{ return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void zad62pendulum_22a_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion (
( * rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
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
void zad62pendulum_22a_host_InitializeDataMapInfo (
zad62pendulum_22a_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
