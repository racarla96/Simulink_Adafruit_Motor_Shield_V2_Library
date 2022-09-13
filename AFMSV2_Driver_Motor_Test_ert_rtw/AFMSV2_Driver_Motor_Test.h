/*
 * AFMSV2_Driver_Motor_Test.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "AFMSV2_Driver_Motor_Test".
 *
 * Model version              : 1.3
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Tue Sep 13 14:44:14 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AFMSV2_Driver_Motor_Test_h_
#define RTW_HEADER_AFMSV2_Driver_Motor_Test_h_
#include <stddef.h>
#include <string.h>
#ifndef AFMSV2_Driver_Motor_Test_COMMON_INCLUDES_
#define AFMSV2_Driver_Motor_Test_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "AFMSV2Driver.h"
#endif                           /* AFMSV2_Driver_Motor_Test_COMMON_INCLUDES_ */

#include "AFMSV2_Driver_Motor_Test_types.h"
#include "MW_target_hardware_resources.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  AFMSV2Driver_AFMSV2_Driver_Mo_T obj; /* '<Root>/MATLAB System' */
} DW_AFMSV2_Driver_Motor_Test_T;

/* Parameters (default storage) */
struct P_AFMSV2_Driver_Motor_Test_T_ {
  real_T MATLABSystem_SampleTime;      /* Expression: 0.1
                                        * Referenced by: '<Root>/MATLAB System'
                                        */
  int16_T Constant_Value;              /* Computed Parameter: Constant_Value
                                        * Referenced by: '<Root>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_AFMSV2_Driver_Motor_T_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (default storage) */
extern P_AFMSV2_Driver_Motor_Test_T AFMSV2_Driver_Motor_Test_P;

/* Block states (default storage) */
extern DW_AFMSV2_Driver_Motor_Test_T AFMSV2_Driver_Motor_Test_DW;

/* Model entry point functions */
extern void AFMSV2_Driver_Motor_Test_initialize(void);
extern void AFMSV2_Driver_Motor_Test_step(void);
extern void AFMSV2_Driver_Motor_Test_terminate(void);

/* Real-time Model object */
extern RT_MODEL_AFMSV2_Driver_Motor__T *const AFMSV2_Driver_Motor_Test_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'AFMSV2_Driver_Motor_Test'
 */
#endif                              /* RTW_HEADER_AFMSV2_Driver_Motor_Test_h_ */
