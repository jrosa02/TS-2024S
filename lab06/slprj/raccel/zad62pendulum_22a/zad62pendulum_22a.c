#include "zad62pendulum_22a.h"
#include "mwmathutil.h"
#include "rtwtypes.h"
#include "zad62pendulum_22a_private.h"
#include "rt_logging_mmi.h"
#include "zad62pendulum_22a_capi.h"
#include "zad62pendulum_22a_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , & stopRequested ) ; }
rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 1 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "10.6 (R2022b) 13-May-2022" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; void MdlInitialize ( void ) { rtX . onelqbcplr = rtP .
Integrator1_IC ; rtX . lvfeyz5eww = rtP . Integrator_IC ; rtX . ahrujsx5gr [
0 ] = rtP . Integrator3_IC ; rtX . ebe0redak1 [ 0 ] = rtP .
Integrator3_IC_me1ffwbjo3 ; rtX . clubkpriha [ 0 ] = rtP .
Integrator3_IC_dcvhd54gkt ; rtX . gyzlj0vh1x [ 0 ] = rtP . x0 [ 0 ] ; rtX .
htx15fprfh [ 0 ] = rtP . x0 [ 0 ] ; rtX . c1xcvoh0wq [ 0 ] = rtP . x0 [ 0 ] ;
rtX . ahrujsx5gr [ 1 ] = rtP . Integrator3_IC ; rtX . ebe0redak1 [ 1 ] = rtP
. Integrator3_IC_me1ffwbjo3 ; rtX . clubkpriha [ 1 ] = rtP .
Integrator3_IC_dcvhd54gkt ; rtX . gyzlj0vh1x [ 1 ] = rtP . x0 [ 1 ] ; rtX .
htx15fprfh [ 1 ] = rtP . x0 [ 1 ] ; rtX . c1xcvoh0wq [ 1 ] = rtP . x0 [ 1 ] ;
rtX . pdrh5zbefo = 0.0 ; } void MdlStart ( void ) { { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "Subsystem1:1" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Subsystem1:1" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "zad62pendulum_22a/To Workspace" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Subsystem1:1" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. l2bs1ppigh . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"07c3ef53-2681-4e24-8a07-f1f86cb12511" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . l2bs1ppigh . AQHandles , hDT , & srcInfo ) ; if ( rtDW . l2bs1ppigh .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . l2bs1ppigh . AQHandles ,
"0.001" , 0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
l2bs1ppigh . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . l2bs1ppigh .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . l2bs1ppigh . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . l2bs1ppigh . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . l2bs1ppigh . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"y" ) ; sdiRegisterWksVariable ( rtDW . l2bs1ppigh . AQHandles , varName ,
"array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Integrator" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Integrator" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "zad62pendulum_22a/To Workspace1" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Integrator" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. orvaqec2lw . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"18c5d6c4-3c1e-4545-9305-d7b01f9c26e9" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . orvaqec2lw . AQHandles , hDT , & srcInfo ) ; if ( rtDW . orvaqec2lw .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . orvaqec2lw . AQHandles ,
"0.001" , 0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
orvaqec2lw . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . orvaqec2lw .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . orvaqec2lw . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . orvaqec2lw . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . orvaqec2lw . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"ISE" ) ; sdiRegisterWksVariable ( rtDW . orvaqec2lw . AQHandles , varName ,
"array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Integrator1" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Integrator1" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "zad62pendulum_22a/To Workspace2" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Integrator1" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. ihss3iy0dw . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"a70ec41e-78c4-498c-aa82-b72214a62e0f" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . ihss3iy0dw . AQHandles , hDT , & srcInfo ) ; if ( rtDW . ihss3iy0dw .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . ihss3iy0dw . AQHandles ,
"0.001" , 0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
ihss3iy0dw . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . ihss3iy0dw .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . ihss3iy0dw . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . ihss3iy0dw . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . ihss3iy0dw . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"ISET" ) ; sdiRegisterWksVariable ( rtDW . ihss3iy0dw . AQHandles , varName ,
"array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Subsystem:3" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Subsystem:3" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "zad62pendulum_22a/To Workspace3" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Subsystem:3" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 2 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. g1au1rfhgz . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"bc1887bc-7232-41c7-87c2-0c68c4b94b2c" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . g1au1rfhgz . AQHandles , hDT , & srcInfo ) ; if ( rtDW . g1au1rfhgz .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . g1au1rfhgz . AQHandles ,
"0.001" , 0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
g1au1rfhgz . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . g1au1rfhgz .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . g1au1rfhgz . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . g1au1rfhgz . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . g1au1rfhgz . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"LQRcost" ) ; sdiRegisterWksVariable ( rtDW . g1au1rfhgz . AQHandles ,
varName , "array" ) ; sdiFreeLabel ( varName ) ; } } } } } MdlInitialize ( )
; } void MdlOutputs ( int_T tid ) { real_T ffgzlxkw30 ; real_T h3r1muq0q3 ;
real_T j4dwu4hnii ; real_T llkud53axh_idx_0 ; real_T ouvkq3y043 ; rtB .
g2tyavdgbs = rtX . onelqbcplr ; rtB . bjlxrzpo40 = rtX . lvfeyz5eww ; rtB .
n355mqws3o [ 0 ] = rtX . ahrujsx5gr [ 0 ] ; rtB . pkc0g4sgww [ 0 ] = rtX .
ebe0redak1 [ 0 ] ; rtB . hbhs0yltpk [ 0 ] = rtX . clubkpriha [ 0 ] ; rtB .
n355mqws3o [ 1 ] = rtX . ahrujsx5gr [ 1 ] ; rtB . pkc0g4sgww [ 1 ] = rtX .
ebe0redak1 [ 1 ] ; rtB . hbhs0yltpk [ 1 ] = rtX . clubkpriha [ 1 ] ; rtB .
erdvkrtgt2 = rtP . C [ 0 ] * rtX . gyzlj0vh1x [ 0 ] + rtP . C [ 1 ] * rtX .
gyzlj0vh1x [ 1 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . f0gd3ousez
= rtP . C [ 0 ] * rtX . htx15fprfh [ 0 ] + rtP . C [ 1 ] * rtX . htx15fprfh [
1 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . jydw3zcoum = rtP . C [ 0
] * rtX . c1xcvoh0wq [ 0 ] + rtP . C [ 1 ] * rtX . c1xcvoh0wq [ 1 ] ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( rtDW . l2bs1ppigh . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . l2bs1ppigh . AQHandles ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . erdvkrtgt2 + 0 ) ; } } { if (
rtDW . orvaqec2lw . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
rtDW . orvaqec2lw . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB
. bjlxrzpo40 + 0 ) ; } } { if ( rtDW . ihss3iy0dw . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . ihss3iy0dw . AQHandles ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . g2tyavdgbs + 0 ) ; } } { if (
rtDW . g1au1rfhgz . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
rtDW . g1au1rfhgz . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB
. pkc0g4sgww [ 0 ] + 0 ) ; } } } rtB . nfdyhzfu2k = rtP . Constant_Value -
rtB . erdvkrtgt2 ; rtB . ofzbqdti32 = rtB . nfdyhzfu2k * rtB . nfdyhzfu2k ;
rtB . ad11h3ymy0 = muDoubleScalarExp ( ssGetT ( rtS ) ) * rtB . ofzbqdti32 ;
llkud53axh_idx_0 = rtP . Q [ 0 ] * rtX . htx15fprfh [ 0 ] + rtX . htx15fprfh
[ 1 ] * rtP . Q [ 2 ] ; h3r1muq0q3 = rtX . htx15fprfh [ 0 ] * rtP . Q [ 1 ] +
rtX . htx15fprfh [ 1 ] * rtP . Q [ 3 ] ; ouvkq3y043 = rtB . ddbpyibsa0 - (
rtP . K [ 0 ] * rtX . htx15fprfh [ 0 ] + rtP . K [ 1 ] * rtX . htx15fprfh [ 1
] ) ; ffgzlxkw30 = rtP . R * ouvkq3y043 ; ffgzlxkw30 *= ffgzlxkw30 ;
j4dwu4hnii = rtP . TransferFcn1_C * rtX . pdrh5zbefo + rtP . TransferFcn1_D *
rtB . nfdyhzfu2k ; rtB . jlt4s4n5cm [ 0 ] = llkud53axh_idx_0 *
llkud53axh_idx_0 + ffgzlxkw30 ; llkud53axh_idx_0 = rtP . Q [ 0 ] * rtX .
gyzlj0vh1x [ 0 ] + rtX . gyzlj0vh1x [ 1 ] * rtP . Q [ 2 ] ; rtB . fyifxepdcj
[ 0 ] = ( rtP . A [ 0 ] * rtX . htx15fprfh [ 0 ] + rtX . htx15fprfh [ 1 ] *
rtP . A [ 2 ] ) + rtP . B [ 0 ] * ouvkq3y043 ; rtB . glnshetsas [ 0 ] = ( rtP
. A [ 0 ] * rtX . gyzlj0vh1x [ 0 ] + rtX . gyzlj0vh1x [ 1 ] * rtP . A [ 2 ] )
+ rtP . B [ 0 ] * j4dwu4hnii ; rtB . jlt4s4n5cm [ 1 ] = h3r1muq0q3 *
h3r1muq0q3 + ffgzlxkw30 ; h3r1muq0q3 = rtX . gyzlj0vh1x [ 0 ] * rtP . Q [ 1 ]
+ rtX . gyzlj0vh1x [ 1 ] * rtP . Q [ 3 ] ; rtB . fyifxepdcj [ 1 ] = ( rtX .
htx15fprfh [ 0 ] * rtP . A [ 1 ] + rtX . htx15fprfh [ 1 ] * rtP . A [ 3 ] ) +
rtP . B [ 1 ] * ouvkq3y043 ; rtB . glnshetsas [ 1 ] = ( rtX . gyzlj0vh1x [ 0
] * rtP . A [ 1 ] + rtX . gyzlj0vh1x [ 1 ] * rtP . A [ 3 ] ) + rtP . B [ 1 ]
* j4dwu4hnii ; ouvkq3y043 = rtP . R * j4dwu4hnii ; ouvkq3y043 *= ouvkq3y043 ;
rtB . dsmklnb4cq [ 0 ] = llkud53axh_idx_0 * llkud53axh_idx_0 + ouvkq3y043 ;
llkud53axh_idx_0 = rtP . Q [ 0 ] * rtX . c1xcvoh0wq [ 0 ] + rtX . c1xcvoh0wq
[ 1 ] * rtP . Q [ 2 ] ; rtB . dsmklnb4cq [ 1 ] = h3r1muq0q3 * h3r1muq0q3 +
ouvkq3y043 ; h3r1muq0q3 = rtX . c1xcvoh0wq [ 0 ] * rtP . Q [ 1 ] + rtX .
c1xcvoh0wq [ 1 ] * rtP . Q [ 3 ] ; j4dwu4hnii = rtB . ddbpyibsa0 - ( rtP . K
[ 0 ] * rtX . c1xcvoh0wq [ 0 ] + rtP . K [ 1 ] * rtX . c1xcvoh0wq [ 1 ] ) ;
ouvkq3y043 = rtP . R * j4dwu4hnii ; ouvkq3y043 *= ouvkq3y043 ; rtB .
l3ywnj4gmc [ 0 ] = rtP . B [ 0 ] * j4dwu4hnii + rtX . c1xcvoh0wq [ 1 ] ; rtB
. l3ywnj4gmc [ 1 ] = ( 1.9620000000000002 * muDoubleScalarSin ( rtX .
c1xcvoh0wq [ 0 ] ) - 0.1 * rtX . c1xcvoh0wq [ 1 ] ) + rtP . B [ 1 ] *
j4dwu4hnii ; rtB . ile0rmegxy [ 0 ] = llkud53axh_idx_0 * llkud53axh_idx_0 +
ouvkq3y043 ; rtB . ile0rmegxy [ 1 ] = h3r1muq0q3 * h3r1muq0q3 + ouvkq3y043 ;
UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID2 ( int_T tid ) { rtB .
ddbpyibsa0 = rtP . N_bar * rtP . Constant_Value ; UNUSED_PARAMETER ( tid ) ;
} void MdlUpdate ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlUpdateTID2 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { XDot * _rtXdot ; _rtXdot = ( ( XDot * ) ssGetdX (
rtS ) ) ; _rtXdot -> onelqbcplr = rtB . ad11h3ymy0 ; _rtXdot -> lvfeyz5eww =
rtB . ofzbqdti32 ; _rtXdot -> ahrujsx5gr [ 0 ] = rtB . dsmklnb4cq [ 0 ] ;
_rtXdot -> ebe0redak1 [ 0 ] = rtB . jlt4s4n5cm [ 0 ] ; _rtXdot -> clubkpriha
[ 0 ] = rtB . ile0rmegxy [ 0 ] ; _rtXdot -> gyzlj0vh1x [ 0 ] = rtB .
glnshetsas [ 0 ] ; _rtXdot -> htx15fprfh [ 0 ] = rtB . fyifxepdcj [ 0 ] ;
_rtXdot -> c1xcvoh0wq [ 0 ] = rtB . l3ywnj4gmc [ 0 ] ; _rtXdot -> ahrujsx5gr
[ 1 ] = rtB . dsmklnb4cq [ 1 ] ; _rtXdot -> ebe0redak1 [ 1 ] = rtB .
jlt4s4n5cm [ 1 ] ; _rtXdot -> clubkpriha [ 1 ] = rtB . ile0rmegxy [ 1 ] ;
_rtXdot -> gyzlj0vh1x [ 1 ] = rtB . glnshetsas [ 1 ] ; _rtXdot -> htx15fprfh
[ 1 ] = rtB . fyifxepdcj [ 1 ] ; _rtXdot -> c1xcvoh0wq [ 1 ] = rtB .
l3ywnj4gmc [ 1 ] ; _rtXdot -> pdrh5zbefo = rtP . TransferFcn1_A * rtX .
pdrh5zbefo ; _rtXdot -> pdrh5zbefo += rtB . nfdyhzfu2k ; } void MdlProjection
( void ) { } void MdlTerminate ( void ) { { if ( rtDW . l2bs1ppigh .
AQHandles ) { sdiTerminateStreaming ( & rtDW . l2bs1ppigh . AQHandles ) ; } }
{ if ( rtDW . orvaqec2lw . AQHandles ) { sdiTerminateStreaming ( & rtDW .
orvaqec2lw . AQHandles ) ; } } { if ( rtDW . ihss3iy0dw . AQHandles ) {
sdiTerminateStreaming ( & rtDW . ihss3iy0dw . AQHandles ) ; } } { if ( rtDW .
g1au1rfhgz . AQHandles ) { sdiTerminateStreaming ( & rtDW . g1au1rfhgz .
AQHandles ) ; } } } static void mr_zad62pendulum_22a_cacheDataAsMxArray (
mxArray * destArray , mwIndex i , int j , const void * srcData , size_t
numBytes ) ; static void mr_zad62pendulum_22a_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) {
mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void mr_zad62pendulum_22a_restoreDataFromMxArray (
void * destData , const mxArray * srcArray , mwIndex i , int j , size_t
numBytes ) ; static void mr_zad62pendulum_22a_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) {
memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void
mr_zad62pendulum_22a_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i
, int j , uint_T bitVal ) ; static void
mr_zad62pendulum_22a_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i
, int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_zad62pendulum_22a_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_zad62pendulum_22a_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_zad62pendulum_22a_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_zad62pendulum_22a_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_zad62pendulum_22a_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void
mr_zad62pendulum_22a_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_zad62pendulum_22a_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_zad62pendulum_22a_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_zad62pendulum_22a_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_zad62pendulum_22a_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_zad62pendulum_22a_GetDWork ( ) {
static const char * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "NULL_PrevZCX"
, } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_zad62pendulum_22a_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & (
rtB ) , sizeof ( rtB ) ) ; return ssDW ; } void mr_zad62pendulum_22a_SetDWork
( const mxArray * ssDW ) { ( void ) ssDW ;
mr_zad62pendulum_22a_restoreDataFromMxArray ( ( void * ) & ( rtB ) , ssDW , 0
, 0 , sizeof ( rtB ) ) ; } mxArray *
mr_zad62pendulum_22a_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 3 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char * blockType [ 3 ] = { "Scope" , "Scope" , "Scope" , } ; static const
char * blockPath [ 3 ] = { "zad62pendulum_22a/Scope" ,
"zad62pendulum_22a/Scope1" , "zad62pendulum_22a/Scope2" , } ; static const
int reason [ 3 ] = { 0 , 0 , 0 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] < 3 ;
++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript ( data
, 2 , subs ) ; mxSetCell ( data , offset , mxCreateString ( blockType [ subs
[ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data , 2 ,
subs ) ; mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [ 0 ]
] ) ) ; subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateDoubleScalar ( ( double ) reason [ subs [
0 ] ] ) ) ; } } return data ; } void MdlInitializeSizes ( void ) {
ssSetNumContStates ( rtS , 15 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ;
ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS
, 0 ) ; ssSetNumSampleTimes ( rtS , 2 ) ; ssSetNumBlocks ( rtS , 76 ) ;
ssSetNumBlockIO ( rtS , 18 ) ; ssSetNumBlockParams ( rtS , 27 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.001 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 485367134U ) ; ssSetChecksumVal ( rtS , 1 ,
4205088805U ) ; ssSetChecksumVal ( rtS , 2 , 192371372U ) ; ssSetChecksumVal
( rtS , 3 , 2081878811U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; ( void ) memset ( ( char * )
rtS , 0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0
, sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char * ) & blkInfo2 ,
0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char * ) &
blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ; ssSetBlkInfo2Ptr (
rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , & blkInfoSLSize ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo ( rtS ,
executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset (
( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS
, & dtInfo ) ; dtInfo . numDataTypes = 23 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
zad62pendulum_22a_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive (
rtS , true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "zad62pendulum_22a" ) ;
ssSetPath ( rtS , "zad62pendulum_22a" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 40.0 ) ; ssSetStepSize ( rtS , 0.001 ) ;
ssSetFixedStepSize ( rtS , 0.001 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 1 , 1
, 2 , 2 , 2 , 2 , 2 , 2 , 1 } ; static int_T rt_LoggedStateNumDimensions [ ]
= { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 1 , 1 , 2 , 2 , 2 , 2 , 2 , 2 , 1 } ; static
boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 }
; static BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE } ; static int_T rt_LoggedStateComplexSignals [ ] = { 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static
const char_T * rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" } ; static
const char_T * rt_LoggedStateBlockNames [ ] = {
"zad62pendulum_22a/Integrator1" , "zad62pendulum_22a/Integrator" ,
"zad62pendulum_22a/Subsystem1/Integrator3" ,
"zad62pendulum_22a/Subsystem/Integrator3" ,
"zad62pendulum_22a/Subsystem2/Integrator3" ,
"zad62pendulum_22a/Subsystem1/Integrator2" ,
"zad62pendulum_22a/Subsystem/Integrator2" ,
"zad62pendulum_22a/Subsystem2/Integrator2" ,
"zad62pendulum_22a/Transfer Fcn1" } ; static const char_T *
rt_LoggedStateNames [ ] = { "" , "" , "" , "" , "" , "" , "" , "" , "" } ;
static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 } ; static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0
, SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 , 3 , 4 , 5 ,
6 , 7 , 8 } ; static RTWLogSignalInfo rt_LoggedStateSignalInfo = { 9 ,
rt_LoggedStateWidths , rt_LoggedStateNumDimensions , rt_LoggedStateDimensions
, rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 9 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . onelqbcplr ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . lvfeyz5eww ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . ahrujsx5gr [ 0 ] ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . ebe0redak1 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . clubkpriha [ 0 ] ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . gyzlj0vh1x [ 0 ] ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . htx15fprfh [ 0 ] ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . c1xcvoh0wq [ 0 ] ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . pdrh5zbefo ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"xFinal" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 15 ] ;
ssSetNumNonContDerivSigInfos ( rtS , 0 ) ; ssSetNonContDerivSigInfos ( rtS ,
( NULL ) ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS ,
"ode3" ) ; ssSetVariableStepSolver ( rtS , 0 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 0 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ;
ssSetSolverStateProjection ( rtS , 0 ) ; ssSetSolverMassMatrixType ( rtS , (
ssMatrixType ) 0 ) ; ssSetSolverMassMatrixNzMax ( rtS , 0 ) ;
ssSetModelOutputs ( rtS , MdlOutputs ) ; ssSetModelUpdate ( rtS , MdlUpdate )
; ssSetModelDerivatives ( rtS , MdlDerivatives ) ; ssSetTNextTid ( rtS ,
INT_MIN ) ; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; } ssSetChecksumVal ( rtS , 0 , 485367134U ) ;
ssSetChecksumVal ( rtS , 1 , 4205088805U ) ; ssSetChecksumVal ( rtS , 2 ,
192371372U ) ; ssSetChecksumVal ( rtS , 3 , 2081878811U ) ; { static const
sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo
rt_ExtModeInfo ; static const sysRanDType * systemRan [ 2 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = &
rtAlwaysEnabled ; rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) ,
& ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo
( rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS
) , ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_zad62pendulum_22a_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_zad62pendulum_22a_GetDWork ) ;
slsaSetWorkFcnForSimTargetOP ( rtS , mr_zad62pendulum_22a_SetDWork ) ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID2 ( tid ) ; }
