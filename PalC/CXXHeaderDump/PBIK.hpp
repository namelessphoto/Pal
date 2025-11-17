#ifndef UE4SS_SDK_PBIK_HPP
#define UE4SS_SDK_PBIK_HPP

#include "PBIK_enums.hpp"

struct FPBIKBoneSetting
{
    FName bone;
    float RotationStiffness;
    float PositionStiffness;
    EPBIKLimitType X;
    float MinX;
    float MaxX;
    EPBIKLimitType Y;
    float MinY;
    float MaxY;
    EPBIKLimitType Z;
    float MinZ;
    float MaxZ;
    bool bUsePreferredAngles;
    FVector PreferredAngles;

};

struct FPBIKDebug
{
    float DrawScale;
    bool bDrawDebug;

};

struct FPBIKEffector
{
    FName bone;
    FTransform Transform;
    float PositionAlpha;
    float RotationAlpha;
    float StrengthAlpha;
    float PullChainAlpha;
    float PinRotation;

};

struct FPBIKSolver
{
};

struct FPBIKSolverSettings
{
    int32 Iterations;
    float MassMultiplier;
    float MinMassMultiplier;
    bool bAllowStretch;
    EPBIKRootBehavior RootBehavior;
    bool bStartSolveFromInputPose;

};

struct FRigUnit_PBIK : public FRigUnit_HighlevelBaseMutable
{
    FName Root;
    TArray<FPBIKEffector> Effectors;
    TArray<int32> EffectorSolverIndices;
    TArray<FPBIKBoneSetting> BoneSettings;
    TArray<FName> ExcludedBones;
    FPBIKSolverSettings Settings;
    FPBIKDebug Debug;
    TArray<int32> BoneSettingToSolverBoneIndex;
    TArray<int32> SolverBoneToElementIndex;
    FPBIKSolver Solver;
    bool bNeedsInit;

};

#endif
