#ifndef UE4SS_SDK_CR_PlayerClavicleAdjust_HPP
#define UE4SS_SDK_CR_PlayerClavicleAdjust_HPP

class UCR_PlayerClavicleAdjust_C : public UControlRig
{
    float ClavicleAdjustFloat;
    FQuat RigUnit_GetTransform_1_Transform_Rotation;

};

class URigVMMemory_Literal : public URigVMMemoryStorage
{
    FRigElementKey RigVMModel___CollapseNode_RigUnit_GetTransform_1_Item__Const;
    TEnumAsByte<EBoneGetterSetterMode> RigVMModel___CollapseNode_RigUnit_GetTransform_1_Space__Const;
    uint8 RigVMModel___CollapseNode_RigUnit_GetTransform_1_bInitial__Const;
    FRigElementKey RigVMModel___CollapseNode_RigUnit_SetTransform_Item__Const;
    FTransform RigVMModel___CollapseNode_RigUnit_SetTransform_Value__Const;
    FRotator RigVMModel___CollapseNode_MathQuaternionFromRotator_Rotator__Const;
    float RigVMModel___CollapseNode_MathFloatAdd_1_1_B__Const;
    float RigVMModel___CollapseNode_RigUnit_SetTransform_Weight__Const;
    uint8 RigVMModel___CollapseNode_RigUnit_SetTransform_bPropagateToChildren__Const;
    FTransform RigVMModel___CollapseNode_RigUnit_SetTransform_1_Value__Const;
    FRigElementKey RigVMModel___CollapseNode_1_RigUnit_GetTransform_1_Item__Const;
    FRigElementKey RigVMModel___CollapseNode_1_RigUnit_SetTransform_Item__Const;
    float RigVMModel___CollapseNode_1_MathFloatMul_B__Const;

};

class URigVMMemory_Work : public URigVMMemoryStorage
{
    FControlRigExecuteContext ExecuteContext_;
    FTransform RigVMModel___CollapseNode_RigUnit_GetTransform_1_Transform;
    TArray<FCachedRigElement> RigVMModel___CollapseNode_RigUnit_GetTransform_1_CachedIndex;
    FQuat RigVMModel___CollapseNode_MathQuaternionFromRotator_Result;
    float RigVMModel___CollapseNode_MathFloatAdd_1_Result;
    FRotator RigVMModel___CollapseNode_MathQuaternionToRotator_Result;
    FTransform RigVMModel___CollapseNode_RigUnit_GetTransform_Transform;
    TArray<FCachedRigElement> RigVMModel___CollapseNode_RigUnit_GetTransform_CachedIndex;
    FQuat RigVMModel___CollapseNode_MathQuaternionToRotator_Value;
    float RigVMModel___CollapseNode_MathFloatAdd_1_A;
    float RigVMModel___CollapseNode_MathFloatAdd_1_B;
    float RigVMModel___CollapseNode_MathFloatAdd_1_1_Result;
    float RigVMModel___CollapseNode_MathFloatAdd_1_1_A;
    float RigVMModel___CollapseNode_MathFloatAdd_Result;
    float RigVMModel___CollapseNode_MathFloatAdd_A;
    FRotator RigVMModel___CollapseNode_MathQuaternionFromRotator_Rotator__IO;
    FTransform RigVMModel___CollapseNode_RigUnit_SetTransform_Value__IO;
    TArray<FCachedRigElement> RigVMModel___CollapseNode_RigUnit_SetTransform_CachedIndex;
    FTransform RigVMModel___CollapseNode_RigUnit_GetTransform_2_Transform;
    TArray<FCachedRigElement> RigVMModel___CollapseNode_RigUnit_GetTransform_2_CachedIndex;
    FTransform RigVMModel___CollapseNode_RigUnit_SetTransform_1_Value__IO;
    TArray<FCachedRigElement> RigVMModel___CollapseNode_RigUnit_SetTransform_1_CachedIndex;
    FTransform RigVMModel___CollapseNode_1_RigUnit_GetTransform_1_Transform;
    TArray<FCachedRigElement> RigVMModel___CollapseNode_1_RigUnit_GetTransform_1_CachedIndex;
    FQuat RigVMModel___CollapseNode_1_MathQuaternionFromRotator_Result;
    float RigVMModel___CollapseNode_1_MathFloatAdd_1_Result;
    FRotator RigVMModel___CollapseNode_1_MathQuaternionToRotator_Result;
    FTransform RigVMModel___CollapseNode_1_RigUnit_GetTransform_Transform;
    TArray<FCachedRigElement> RigVMModel___CollapseNode_1_RigUnit_GetTransform_CachedIndex;
    FQuat RigVMModel___CollapseNode_1_MathQuaternionToRotator_Value;
    float RigVMModel___CollapseNode_1_MathFloatAdd_1_A;
    float RigVMModel___CollapseNode_1_MathFloatMul_Result;
    float RigVMModel___CollapseNode_1_MathFloatMul_A;
    float RigVMModel___CollapseNode_1_MathFloatAdd_1_1_Result;
    float RigVMModel___CollapseNode_1_MathFloatAdd_1_1_A;
    float RigVMModel___CollapseNode_1_MathFloatAdd_Result;
    float RigVMModel___CollapseNode_1_MathFloatAdd_A;
    FRotator RigVMModel___CollapseNode_1_MathQuaternionFromRotator_Rotator__IO;
    FTransform RigVMModel___CollapseNode_1_RigUnit_SetTransform_Value__IO;
    TArray<FCachedRigElement> RigVMModel___CollapseNode_1_RigUnit_SetTransform_CachedIndex;
    FTransform RigVMModel___CollapseNode_1_RigUnit_GetTransform_2_Transform;
    TArray<FCachedRigElement> RigVMModel___CollapseNode_1_RigUnit_GetTransform_2_CachedIndex;
    FTransform RigVMModel___CollapseNode_1_RigUnit_SetTransform_1_Value__IO;
    TArray<FCachedRigElement> RigVMModel___CollapseNode_1_RigUnit_SetTransform_1_CachedIndex;

};

#endif
