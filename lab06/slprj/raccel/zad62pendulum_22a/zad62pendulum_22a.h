#ifndef RTW_HEADER_zad62pendulum_22a_h_
#define RTW_HEADER_zad62pendulum_22a_h_
#ifndef zad62pendulum_22a_COMMON_INCLUDES_
#define zad62pendulum_22a_COMMON_INCLUDES_
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
#include "zad62pendulum_22a_types.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME zad62pendulum_22a
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (18) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (15)   
#elif NCSTATES != 15
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
typedef struct { real_T g2tyavdgbs ; real_T bjlxrzpo40 ; real_T n355mqws3o [
2 ] ; real_T pkc0g4sgww [ 2 ] ; real_T hbhs0yltpk [ 2 ] ; real_T erdvkrtgt2 ;
real_T f0gd3ousez ; real_T jydw3zcoum ; real_T nfdyhzfu2k ; real_T ofzbqdti32
; real_T ad11h3ymy0 ; real_T fyifxepdcj [ 2 ] ; real_T jlt4s4n5cm [ 2 ] ;
real_T glnshetsas [ 2 ] ; real_T dsmklnb4cq [ 2 ] ; real_T l3ywnj4gmc [ 2 ] ;
real_T ile0rmegxy [ 2 ] ; real_T ddbpyibsa0 ; } B ; typedef struct { struct {
void * LoggedData ; } jbp4qtz0nd ; struct { void * LoggedData [ 3 ] ; }
bavoze0sth ; struct { void * LoggedData [ 2 ] ; } lorx5hfnhc ; struct { void
* AQHandles ; } l2bs1ppigh ; struct { void * AQHandles ; } orvaqec2lw ;
struct { void * AQHandles ; } ihss3iy0dw ; struct { void * AQHandles ; }
g1au1rfhgz ; } DW ; typedef struct { real_T onelqbcplr ; real_T lvfeyz5eww ;
real_T ahrujsx5gr [ 2 ] ; real_T ebe0redak1 [ 2 ] ; real_T clubkpriha [ 2 ] ;
real_T gyzlj0vh1x [ 2 ] ; real_T htx15fprfh [ 2 ] ; real_T c1xcvoh0wq [ 2 ] ;
real_T pdrh5zbefo ; } X ; typedef struct { real_T onelqbcplr ; real_T
lvfeyz5eww ; real_T ahrujsx5gr [ 2 ] ; real_T ebe0redak1 [ 2 ] ; real_T
clubkpriha [ 2 ] ; real_T gyzlj0vh1x [ 2 ] ; real_T htx15fprfh [ 2 ] ; real_T
c1xcvoh0wq [ 2 ] ; real_T pdrh5zbefo ; } XDot ; typedef struct { boolean_T
onelqbcplr ; boolean_T lvfeyz5eww ; boolean_T ahrujsx5gr [ 2 ] ; boolean_T
ebe0redak1 [ 2 ] ; boolean_T clubkpriha [ 2 ] ; boolean_T gyzlj0vh1x [ 2 ] ;
boolean_T htx15fprfh [ 2 ] ; boolean_T c1xcvoh0wq [ 2 ] ; boolean_T
pdrh5zbefo ; } XDis ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
DataMapInfo ; struct P_ { real_T A [ 4 ] ; real_T B [ 2 ] ; real_T C [ 2 ] ;
real_T K [ 2 ] ; real_T N_bar ; real_T Q [ 4 ] ; real_T R ; real_T x0 [ 2 ] ;
real_T Integrator1_IC ; real_T Integrator_IC ; real_T Integrator3_IC ; real_T
Integrator3_IC_me1ffwbjo3 ; real_T Integrator3_IC_dcvhd54gkt ; real_T
TransferFcn1_A ; real_T TransferFcn1_C ; real_T TransferFcn1_D ; real_T
Constant_Value ; } ; extern const char * RT_MEMORY_ALLOCATION_ERROR ; extern
B rtB ; extern X rtX ; extern DW rtDW ; extern P rtP ; extern mxArray *
mr_zad62pendulum_22a_GetDWork ( ) ; extern void mr_zad62pendulum_22a_SetDWork
( const mxArray * ssDW ) ; extern mxArray *
mr_zad62pendulum_22a_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * zad62pendulum_22a_GetCAPIStaticMap ( void )
; extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
