#ifndef UE4SS_SDK_MotionWarping_HPP
#define UE4SS_SDK_MotionWarping_HPP

#include "MotionWarping_enums.hpp"

struct FMotionDeltaTrack
{
    TArray<FTransform> BoneTransformTrack;
    TArray<FVector> DeltaTranslationTrack;
    TArray<FRotator> DeltaRotationTrack;
    FVector TotalTranslation;
    FRotator TotalRotation;

};

struct FMotionDeltaTrackContainer
{
    TArray<FMotionDeltaTrack> Tracks;

};

struct FMotionWarpingTarget
{
    FName Name;
    FVector Location;
    FRotator Rotation;
    TWeakObjectPtr<class USceneComponent> Component;
    FName BoneName;
    bool bFollowComponent;

};

struct FMotionWarpingUpdateContext
{
    TWeakObjectPtr<class UAnimSequenceBase> Animation;
    float PreviousPosition;
    float CurrentPosition;
    float Weight;
    float PlayRate;
    float DeltaSeconds;

};

struct FMotionWarpingWindowData
{
    class UAnimNotifyState_MotionWarping* AnimNotify;
    float StartTime;
    float EndTime;

};

class UAnimNotifyState_MotionWarping : public UAnimNotifyState
{
    class URootMotionModifier* RootMotionModifier;

    void OnWarpUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
    void OnWarpEnd(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
    void OnWarpBegin(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
    void OnRootMotionModifierUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
    void OnRootMotionModifierDeactivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
    void OnRootMotionModifierActivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
    class URootMotionModifier* AddRootMotionModifier(class UMotionWarpingComponent* MotionWarpingComp, const class UAnimSequenceBase* Animation, float StartTime, float EndTime);
};

class UDEPRECATED_RootMotionModifier_SimpleWarp : public URootMotionModifier_Warp
{
};

class UMotionWarpingComponent : public UActorComponent
{
    bool bSearchForWindowsInAnimsWithinMontages;
    FMotionWarpingComponentOnPreUpdate OnPreUpdate;
    void MotionWarpingPreUpdate(class UMotionWarpingComponent* MotionWarpingComp);
    TWeakObjectPtr<class ACharacter> CharacterOwner;
    TArray<class URootMotionModifier*> Modifiers;
    TArray<FMotionWarpingTarget> WarpTargets;

    int32 RemoveWarpTarget(FName WarpTargetName);
    void DisableAllRootMotionModifiers();
    void AddOrUpdateWarpTargetFromTransform(FName WarpTargetName, FTransform TargetTransform);
    void AddOrUpdateWarpTargetFromLocationAndRotation(FName WarpTargetName, FVector TargetLocation, FRotator TargetRotation);
    void AddOrUpdateWarpTargetFromLocation(FName WarpTargetName, FVector TargetLocation);
    void AddOrUpdateWarpTargetFromComponent(FName WarpTargetName, const class USceneComponent* Component, FName BoneName, bool bFollowComponent);
    void AddOrUpdateWarpTarget(const FMotionWarpingTarget& WarpTarget);
};

class UMotionWarpingUtilities : public UBlueprintFunctionLibrary
{

    void GetMotionWarpingWindowsFromAnimation(const class UAnimSequenceBase* Animation, TArray<FMotionWarpingWindowData>& OutWindows);
    void GetMotionWarpingWindowsForWarpTargetFromAnimation(const class UAnimSequenceBase* Animation, FName WarpTargetName, TArray<FMotionWarpingWindowData>& OutWindows);
    FTransform ExtractRootMotionFromAnimation(const class UAnimSequenceBase* Animation, float StartTime, float EndTime);
};

class URootMotionModifier : public UObject
{
    TWeakObjectPtr<class UAnimSequenceBase> Animation;
    float StartTime;
    float EndTime;
    float PreviousPosition;
    float CurrentPosition;
    float Weight;
    FTransform StartTransform;
    float ActualStartTime;
    FRootMotionModifierOnActivateDelegate OnActivateDelegate;
    void OnRootMotionModifierDelegate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* RootMotionModifier);
    FRootMotionModifierOnUpdateDelegate OnUpdateDelegate;
    void OnRootMotionModifierDelegate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* RootMotionModifier);
    FRootMotionModifierOnDeactivateDelegate OnDeactivateDelegate;
    void OnRootMotionModifierDelegate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* RootMotionModifier);
    ERootMotionModifierState State;

};

class URootMotionModifier_AdjustmentBlendWarp : public URootMotionModifier_Warp
{
    bool bWarpIKBones;
    TArray<FName> IKBones;
    FTransform CachedMeshTransform;
    FTransform CachedMeshRelativeTransform;
    FTransform CachedRootMotion;
    FAnimSequenceTrackContainer Result;

};

class URootMotionModifier_Scale : public URootMotionModifier
{
    FVector Scale;

    class URootMotionModifier_Scale* AddRootMotionModifierScale(class UMotionWarpingComponent* InMotionWarpingComp, const class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FVector InScale);
};

class URootMotionModifier_SkewWarp : public URootMotionModifier_Warp
{

    class URootMotionModifier_SkewWarp* AddRootMotionModifierSkewWarp(class UMotionWarpingComponent* InMotionWarpingComp, const class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FName InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, FTransform InWarpPointAnimTransform, FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier);
};

class URootMotionModifier_Warp : public URootMotionModifier
{
    FName WarpTargetName;
    EWarpPointAnimProvider WarpPointAnimProvider;
    FTransform WarpPointAnimTransform;
    FName WarpPointAnimBoneName;
    bool bWarpTranslation;
    bool bIgnoreZAxis;
    EAlphaBlendOption AddTranslationEasingFunc;
    class UCurveFloat* AddTranslationEasingCurve;
    bool bWarpRotation;
    EMotionWarpRotationType RotationType;
    float WarpRotationTimeMultiplier;
    FTransform CachedTargetTransform;

};

#endif
