/*
 * File: Code_Generation_Basic.c
 *
 * Code generated for Simulink model 'Code_Generation_Basic'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Tue Jun  1 13:04:36 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Code_Generation_Basic.h"
#include "Code_Generation_Basic_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Code_Generation_Basic_T Code_Generation_Basic_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Code_Generation_Basic_T Code_Generation_Basic_Y;

/* Real-time model */
RT_MODEL_Code_Generation_Basi_T Code_Generation_Basic_M_;
RT_MODEL_Code_Generation_Basi_T *const Code_Generation_Basic_M =
  &Code_Generation_Basic_M_;

/* Model step function */
void Code_Generation_Basic_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Add' */
  /* Outport: '<Root>/Output' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<S1>/Add'
   */
  Code_Generation_Basic_Y.Output = Code_Generation_Basic_U.Input1 +
    Code_Generation_Basic_U.Input;

  /* End of Outputs for SubSystem: '<Root>/Add' */

  /* Outputs for Atomic SubSystem: '<Root>/Sub' */
  /* Outport: '<Root>/Output1' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<S4>/Add1'
   */
  Code_Generation_Basic_Y.Output1 = Code_Generation_Basic_U.Input -
    Code_Generation_Basic_U.Input1;

  /* End of Outputs for SubSystem: '<Root>/Sub' */

  /* Outputs for Atomic SubSystem: '<Root>/Prod' */
  /* Outport: '<Root>/Output2' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Product: '<S3>/Product'
   */
  Code_Generation_Basic_Y.Output2 = Code_Generation_Basic_U.Input *
    Code_Generation_Basic_U.Input1;

  /* End of Outputs for SubSystem: '<Root>/Prod' */

  /* Outputs for Atomic SubSystem: '<Root>/Div' */
  /* Outport: '<Root>/Output3' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Product: '<S2>/Divide'
   */
  Code_Generation_Basic_Y.Output3 = Code_Generation_Basic_U.Input /
    Code_Generation_Basic_U.Input1;

  /* End of Outputs for SubSystem: '<Root>/Div' */
}

/* Model initialize function */
void Code_Generation_Basic_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Code_Generation_Basic_M, (NULL));

  /* external inputs */
  (void)memset(&Code_Generation_Basic_U, 0, sizeof(ExtU_Code_Generation_Basic_T));

  /* external outputs */
  (void) memset((void *)&Code_Generation_Basic_Y, 0,
                sizeof(ExtY_Code_Generation_Basic_T));
}

/* Model terminate function */
void Code_Generation_Basic_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
