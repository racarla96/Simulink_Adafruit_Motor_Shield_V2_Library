/*
 * AFMSV2_Driver_Motor_Test.c
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

#include "AFMSV2_Driver_Motor_Test.h"
#include "AFMSV2_Driver_Motor_Test_private.h"

/* Block states (default storage) */
DW_AFMSV2_Driver_Motor_Test_T AFMSV2_Driver_Motor_Test_DW;

/* Real-time model */
static RT_MODEL_AFMSV2_Driver_Motor__T AFMSV2_Driver_Motor_Test_M_;
RT_MODEL_AFMSV2_Driver_Motor__T *const AFMSV2_Driver_Motor_Test_M =
  &AFMSV2_Driver_Motor_Test_M_;

/* Model step function */
void AFMSV2_Driver_Motor_Test_step(void)
{
  real_T sampleTime;

  /* MATLABSystem: '<Root>/MATLAB System' incorporates:
   *  Constant: '<Root>/Constant'
   */
  if (AFMSV2_Driver_Motor_Test_DW.obj.SampleTime !=
      AFMSV2_Driver_Motor_Test_P.MATLABSystem_SampleTime) {
    if (((!rtIsInf(AFMSV2_Driver_Motor_Test_P.MATLABSystem_SampleTime)) &&
         (!rtIsNaN(AFMSV2_Driver_Motor_Test_P.MATLABSystem_SampleTime))) ||
        rtIsInf(AFMSV2_Driver_Motor_Test_P.MATLABSystem_SampleTime)) {
      sampleTime = AFMSV2_Driver_Motor_Test_P.MATLABSystem_SampleTime;
    }

    AFMSV2_Driver_Motor_Test_DW.obj.SampleTime = sampleTime;
  }

  /*         %% Define output properties */
  /* 'AFMSV2Driver:71' num = 4; */
  /* 'AFMSV2Driver:75' num = 0; */
  /* 'AFMSV2Driver:50' if isempty(coder.target) */
  /* 'AFMSV2Driver:52' else */
  /*  Call C-function implementing device output */
  /* 'AFMSV2Driver:54' coder.ceval('AFMSV2Driver_Step', U1, U2, U3, U4); */
  AFMSV2Driver_Step(AFMSV2_Driver_Motor_Test_P.Constant_Value,
                    AFMSV2_Driver_Motor_Test_P.Constant_Value,
                    AFMSV2_Driver_Motor_Test_P.Constant_Value,
                    AFMSV2_Driver_Motor_Test_P.Constant_Value);

  /* End of MATLABSystem: '<Root>/MATLAB System' */
}

/* Model initialize function */
void AFMSV2_Driver_Motor_Test_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(AFMSV2_Driver_Motor_Test_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&AFMSV2_Driver_Motor_Test_DW, 0,
                sizeof(DW_AFMSV2_Driver_Motor_Test_T));

  {
    real_T sampleTime;

    /* Start for MATLABSystem: '<Root>/MATLAB System' */
    /*  Constructor */
    /* 'AFMSV2Driver:1' realtime.internal.SourceSampleTime */
    /* 'AFMSV2Driver:2' coder.ExternalDependency */
    /*  Support name-value pair arguments when constructing the object. */
    /* 'AFMSV2Driver:34' setProperties(obj,nargin,varargin{:}); */
    AFMSV2_Driver_Motor_Test_DW.obj.matlabCodegenIsDeleted = false;
    if (((!rtIsInf(AFMSV2_Driver_Motor_Test_P.MATLABSystem_SampleTime)) &&
         (!rtIsNaN(AFMSV2_Driver_Motor_Test_P.MATLABSystem_SampleTime))) ||
        rtIsInf(AFMSV2_Driver_Motor_Test_P.MATLABSystem_SampleTime)) {
      sampleTime = AFMSV2_Driver_Motor_Test_P.MATLABSystem_SampleTime;
    }

    AFMSV2_Driver_Motor_Test_DW.obj.SampleTime = sampleTime;
    AFMSV2_Driver_Motor_Test_DW.obj.isInitialized = 1;

    /*         %% Define output properties */
    /* 'AFMSV2Driver:71' num = 4; */
    /*         %% Define output properties */
    /* 'AFMSV2Driver:71' num = 4; */
    /*         %% Define output properties */
    /* 'AFMSV2Driver:71' num = 4; */
    /*         %% Define output properties */
    /* 'AFMSV2Driver:71' num = 4; */
    /*         %% Define output properties */
    /* 'AFMSV2Driver:71' num = 4; */
    /*         %% Define output properties */
    /* 'AFMSV2Driver:71' num = 4; */
    /* 'AFMSV2Driver:87' if isempty(coder.target) */
    /* 'AFMSV2Driver:40' if isempty(coder.target) */
    /* 'AFMSV2Driver:42' else */
    /*  Call C-function implementing device initialization */
    /* 'AFMSV2Driver:44' coder.cinclude('AFMSV2Driver.h'); */
    /* 'AFMSV2Driver:45' coder.ceval('AFMSV2Driver_Init'); */
    AFMSV2Driver_Init();
    AFMSV2_Driver_Motor_Test_DW.obj.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<Root>/MATLAB System' */
  }
}

/* Model terminate function */
void AFMSV2_Driver_Motor_Test_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/MATLAB System' */
  if (!AFMSV2_Driver_Motor_Test_DW.obj.matlabCodegenIsDeleted) {
    AFMSV2_Driver_Motor_Test_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/MATLAB System' */
}
