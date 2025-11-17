#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=EulerTransform -FallbackName=EulerTransform
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=TransformNoScale -FallbackName=TransformNoScale
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ERigControlValueType.h"
#include "ERigElementType.h"
#include "ERigMetadataType.h"
#include "RigBoneElement.h"
#include "RigControlElement.h"
#include "RigControlSettings.h"
#include "RigControlValue.h"
#include "RigElementKey.h"
#include "RigElementWeight.h"
#include "RigNullElement.h"
#include "RigPose.h"
#include "RigHierarchy.generated.h"

class URigHierarchy;
class URigHierarchyController;

UCLASS(BlueprintType)
class CONTROLRIG_API URigHierarchy : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    uint16 TopologyVersion;
    
    UPROPERTY(Transient)
    uint16 MetadataVersion;
    
    UPROPERTY(Transient)
    uint16 MetadataTagVersion;
    
    UPROPERTY(Transient)
    bool bEnableDirtyPropagation;
    
    UPROPERTY()
    int32 TransformStackIndex;
    
    UPROPERTY(Transient)
    URigHierarchyController* HierarchyController;
    
    UPROPERTY()
    TMap<FRigElementKey, FRigElementKey> PreviousNameMap;
    
protected:
    UPROPERTY(Transient)
    URigHierarchy* HierarchyForCacheValidation;
    
public:
    URigHierarchy();

    UFUNCTION(BlueprintCallable)
    void UnsetCurveValueByIndex(int32 InElementIndex, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    void UnsetCurveValue(FRigElementKey InKey, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    bool SwitchToWorldSpace(FRigElementKey InChild, bool bInitial, bool bAffectChildren);
    
    UFUNCTION(BlueprintCallable)
    bool SwitchToParent(FRigElementKey InChild, FRigElementKey InParent, bool bInitial, bool bAffectChildren);
    
    UFUNCTION(BlueprintCallable)
    bool SwitchToDefaultParent(FRigElementKey InChild, bool bInitial, bool bAffectChildren);
    
    UFUNCTION(BlueprintPure)
    TArray<FRigElementKey> SortKeys(const TArray<FRigElementKey>& InKeys) const;
    
    UFUNCTION(BlueprintCallable)
    bool SetVectorMetadata(FRigElementKey InItem, FName InMetadataName, FVector InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetVectorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FVector> InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetTransformMetadata(FRigElementKey InItem, FName InMetadataName, FTransform InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetTransformArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FTransform> InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetTag(FRigElementKey InItem, FName InTag);
    
    UFUNCTION(BlueprintCallable)
    bool SetRotatorMetadata(FRigElementKey InItem, FName InMetadataName, FRotator InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetRotatorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FRotator> InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetRigElementKeyMetadata(FRigElementKey InItem, FName InMetadataName, FRigElementKey InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetRigElementKeyArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FRigElementKey> InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetQuatMetadata(FRigElementKey InItem, FName InMetadataName, FQuat InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetQuatArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FQuat> InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPose_ForBlueprint(FRigPose InPose);
    
    UFUNCTION(BlueprintCallable)
    bool SetParentWeightArray(FRigElementKey InChild, TArray<FRigElementWeight> InWeights, bool bInitial, bool bAffectChildren);
    
    UFUNCTION(BlueprintCallable)
    bool SetParentWeight(FRigElementKey InChild, FRigElementKey InParent, FRigElementWeight InWeight, bool bInitial, bool bAffectChildren);
    
    UFUNCTION(BlueprintCallable)
    bool SetNameMetadata(FRigElementKey InItem, FName InMetadataName, FName InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetNameArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FName> InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalTransformByIndex(int32 InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
    
    UFUNCTION(BlueprintCallable)
    bool SetLinearColorMetadata(FRigElementKey InItem, FName InMetadataName, FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetLinearColorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FLinearColor> InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetInt32Metadata(FRigElementKey InItem, FName InMetadataName, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetInt32ArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<int32> InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGlobalTransformByIndex(int32 InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    void SetGlobalTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand);
    
    UFUNCTION(BlueprintCallable)
    bool SetFloatMetadata(FRigElementKey InItem, FName InMetadataName, float InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetFloatArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<float> InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCurveValueByIndex(int32 InElementIndex, float InValue, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    void SetCurveValue(FRigElementKey InKey, float InValue, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    void SetControlVisibilityByIndex(int32 InElementIndex, bool bVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetControlVisibility(FRigElementKey InKey, bool bVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetControlValueByIndex(int32 InElementIndex, FRigControlValue InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands);
    
    UFUNCTION(BlueprintCallable)
    void SetControlValue(FRigElementKey InKey, FRigControlValue InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands);
    
    UFUNCTION(BlueprintCallable)
    void SetControlShapeTransformByIndex(int32 InElementIndex, FTransform InTransform, bool bInitial, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    void SetControlShapeTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bSetupUndo);
    
    UFUNCTION(BlueprintCallable)
    void SetControlSettingsByIndex(int32 InElementIndex, FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands);
    
    UFUNCTION(BlueprintCallable)
    void SetControlSettings(FRigElementKey InKey, FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands);
    
    UFUNCTION(BlueprintCallable)
    void SetControlPreferredRotatorByIndex(int32 InElementIndex, const FRotator& InValue, bool bInitial, bool bFixEulerFlips);
    
    UFUNCTION(BlueprintCallable)
    void SetControlPreferredRotator(FRigElementKey InKey, const FRotator& InValue, bool bInitial, bool bFixEulerFlips);
    
    UFUNCTION(BlueprintCallable)
    void SetControlOffsetTransformByIndex(int32 InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
    
    UFUNCTION(BlueprintCallable)
    void SetControlOffsetTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
    
    UFUNCTION(BlueprintCallable)
    bool SetBoolMetadata(FRigElementKey InItem, FName InMetadataName, bool InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetBoolArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<bool> InValue);
    
    UFUNCTION(BlueprintCallable)
    void SendAutoKeyEvent(FRigElementKey InElement, float InOffsetInSeconds, bool bAsynchronous);
    
    UFUNCTION(BlueprintCallable)
    void ResetToDefault();
    
    UFUNCTION(BlueprintCallable)
    void ResetPoseToInitial(ERigElementType InTypeFilter);
    
    UFUNCTION(BlueprintCallable)
    void ResetCurveValues();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveMetadata(FRigElementKey InItem, FName InMetadataName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllMetadata(FRigElementKey InItem);
    
    UFUNCTION(BlueprintPure)
    int32 Num() const;
    
    UFUNCTION(BlueprintCallable)
    static FRigControlValue MakeControlValueFromVector2D(FVector2D InValue);
    
    UFUNCTION(BlueprintCallable)
    static FRigControlValue MakeControlValueFromVector(FVector InValue);
    
    UFUNCTION(BlueprintCallable)
    static FRigControlValue MakeControlValueFromTransformNoScale(FTransformNoScale InValue);
    
    UFUNCTION(BlueprintCallable)
    static FRigControlValue MakeControlValueFromTransform(FTransform InValue);
    
    UFUNCTION(BlueprintCallable)
    static FRigControlValue MakeControlValueFromRotator(FRotator InValue);
    
    UFUNCTION(BlueprintCallable)
    static FRigControlValue MakeControlValueFromInt(int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    static FRigControlValue MakeControlValueFromFloat(float InValue);
    
    UFUNCTION(BlueprintCallable)
    static FRigControlValue MakeControlValueFromEulerTransform(FEulerTransform InValue);
    
    UFUNCTION(BlueprintCallable)
    static FRigControlValue MakeControlValueFromBool(bool InValue);
    
    UFUNCTION(BlueprintPure)
    bool IsValidIndex(int32 InElementIndex) const;
    
    UFUNCTION(BlueprintPure)
    bool IsSelectedByIndex(int32 InIndex) const;
    
    UFUNCTION(BlueprintPure)
    bool IsSelected(FRigElementKey InKey) const;
    
    UFUNCTION(BlueprintPure)
    bool IsProcedural(const FRigElementKey& InKey) const;
    
    UFUNCTION(BlueprintPure)
    bool IsParentedTo(FRigElementKey InChild, FRigElementKey InParent) const;
    
    UFUNCTION(BlueprintPure)
    bool IsCurveValueSetByIndex(int32 InElementIndex) const;
    
    UFUNCTION(BlueprintPure)
    bool IsCurveValueSet(FRigElementKey InKey) const;
    
    UFUNCTION(BlueprintPure)
    bool IsControllerAvailable() const;
    
    UFUNCTION(BlueprintPure)
    bool HasTag(FRigElementKey InItem, FName InTag) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetVectorMetadata(FRigElementKey InItem, FName InMetadataName, FVector DefaultValue) const;
    
    UFUNCTION(BlueprintCallable)
    static FVector GetVectorFromControlValue(FRigControlValue InValue);
    
    UFUNCTION(BlueprintPure)
    TArray<FVector> GetVectorArrayMetadata(FRigElementKey InItem, FName InMetadataName) const;
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetVector2DFromControlValue(FRigControlValue InValue);
    
    UFUNCTION(BlueprintCallable)
    static FTransformNoScale GetTransformNoScaleFromControlValue(FRigControlValue InValue);
    
    UFUNCTION(BlueprintPure)
    FTransform GetTransformMetadata(FRigElementKey InItem, FName InMetadataName, FTransform DefaultValue) const;
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetTransformFromControlValue(FRigControlValue InValue);
    
    UFUNCTION(BlueprintPure)
    TArray<FTransform> GetTransformArrayMetadata(FRigElementKey InItem, FName InMetadataName) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetTags(FRigElementKey InItem) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FRigElementKey> GetSelectedKeys(ERigElementType InTypeFilter) const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetRotatorMetadata(FRigElementKey InItem, FName InMetadataName, FRotator DefaultValue) const;
    
    UFUNCTION(BlueprintCallable)
    static FRotator GetRotatorFromControlValue(FRigControlValue InValue);
    
    UFUNCTION(BlueprintPure)
    TArray<FRotator> GetRotatorArrayMetadata(FRigElementKey InItem, FName InMetadataName) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FRigElementKey> GetRigidBodyKeys(bool bTraverse) const;
    
    UFUNCTION(BlueprintPure)
    FRigElementKey GetRigElementKeyMetadata(FRigElementKey InItem, FName InMetadataName, FRigElementKey DefaultValue) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FRigElementKey> GetRigElementKeyArrayMetadata(FRigElementKey InItem, FName InMetadataName) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FRigElementKey> GetReferenceKeys(bool bTraverse) const;
    
    UFUNCTION(BlueprintPure)
    FQuat GetQuatMetadata(FRigElementKey InItem, FName InMetadataName, FQuat DefaultValue) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FQuat> GetQuatArrayMetadata(FRigElementKey InItem, FName InMetadataName) const;
    
    UFUNCTION(BlueprintPure)
    FRigElementKey GetPreviousParent(const FRigElementKey& InKey) const;
    
    UFUNCTION(BlueprintPure)
    FName GetPreviousName(const FRigElementKey& InKey) const;
    
    UFUNCTION(BlueprintPure)
    FRigPose GetPose(bool bInitial) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FRigElementWeight> GetParentWeightArray(FRigElementKey InChild, bool bInitial) const;
    
    UFUNCTION(BlueprintPure)
    FRigElementWeight GetParentWeight(FRigElementKey InChild, FRigElementKey InParent, bool bInitial) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetParentTransformByIndex(int32 InElementIndex, bool bInitial) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetParentTransform(FRigElementKey InKey, bool bInitial) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FRigElementKey> GetParents(FRigElementKey InKey, bool bRecursive) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumberOfParents(FRigElementKey InKey) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FRigElementKey> GetNullKeys(bool bTraverse) const;
    
    UFUNCTION(BlueprintPure)
    FName GetNameMetadata(FRigElementKey InItem, FName InMetadataName, FName DefaultValue) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetNameArrayMetadata(FRigElementKey InItem, FName InMetadataName) const;
    
    UFUNCTION(BlueprintPure)
    ERigMetadataType GetMetadataType(FRigElementKey InItem, FName InMetadataName);
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetMetadataNames(FRigElementKey InItem);
    
    UFUNCTION(BlueprintPure)
    FTransform GetLocalTransformByIndex(int32 InElementIndex, bool bInitial) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetLocalTransform(FRigElementKey InKey, bool bInitial) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetLocalControlShapeTransformByIndex(int32 InElementIndex, bool bInitial) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetLocalControlShapeTransform(FRigElementKey InKey, bool bInitial) const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetLinearColorMetadata(FRigElementKey InItem, FName InMetadataName, FLinearColor DefaultValue) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FLinearColor> GetLinearColorArrayMetadata(FRigElementKey InItem, FName InMetadataName) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FRigElementKey> GetKeys(const TArray<int32> InElementIndices) const;
    
    UFUNCTION(BlueprintPure)
    FRigElementKey GetKey(int32 InElementIndex) const;
    
    UFUNCTION(BlueprintCallable)
    static int32 GetIntFromControlValue(FRigControlValue InValue);
    
    UFUNCTION(BlueprintPure)
    int32 GetInt32Metadata(FRigElementKey InItem, FName InMetadataName, int32 DefaultValue) const;
    
    UFUNCTION(BlueprintPure)
    TArray<int32> GetInt32ArrayMetadata(FRigElementKey InItem, FName InMetadataName) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetIndex_ForBlueprint(FRigElementKey InKey) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetGlobalTransformByIndex(int32 InElementIndex, bool bInitial) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetGlobalTransform(FRigElementKey InKey, bool bInitial) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetGlobalControlShapeTransformByIndex(int32 InElementIndex, bool bInitial) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetGlobalControlShapeTransform(FRigElementKey InKey, bool bInitial) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetGlobalControlOffsetTransformByIndex(int32 InElementIndex, bool bInitial) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetGlobalControlOffsetTransform(FRigElementKey InKey, bool bInitial) const;
    
    UFUNCTION(BlueprintPure)
    float GetFloatMetadata(FRigElementKey InItem, FName InMetadataName, float DefaultValue) const;
    
    UFUNCTION(BlueprintCallable)
    static float GetFloatFromControlValue(FRigControlValue InValue);
    
    UFUNCTION(BlueprintPure)
    TArray<float> GetFloatArrayMetadata(FRigElementKey InItem, FName InMetadataName) const;
    
    UFUNCTION(BlueprintPure)
    FRigElementKey GetFirstParent(FRigElementKey InKey) const;
    
    UFUNCTION(BlueprintCallable)
    static FEulerTransform GetEulerTransformFromControlValue(FRigControlValue InValue);
    
    UFUNCTION(BlueprintPure)
    FRigElementKey GetDefaultParent(FRigElementKey InKey) const;
    
    UFUNCTION(BlueprintPure)
    float GetCurveValueByIndex(int32 InElementIndex) const;
    
    UFUNCTION(BlueprintPure)
    float GetCurveValue(FRigElementKey InKey) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FRigElementKey> GetCurveKeys() const;
    
    UFUNCTION(BlueprintPure)
    FRigControlValue GetControlValueByIndex(int32 InElementIndex, ERigControlValueType InValueType) const;
    
    UFUNCTION(BlueprintPure)
    FRigControlValue GetControlValue(FRigElementKey InKey, ERigControlValueType InValueType) const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetControlPreferredRotatorByIndex(int32 InElementIndex, bool bInitial) const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetControlPreferredRotator(FRigElementKey InKey, bool bInitial) const;
    
    UFUNCTION(BlueprintCallable)
    URigHierarchyController* GetController(bool bCreateIfNeeded);
    
    UFUNCTION(BlueprintPure)
    TArray<FRigElementKey> GetControlKeys(bool bTraverse) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FRigElementKey> GetChildren(FRigElementKey InKey, bool bRecursive) const;
    
    UFUNCTION(BlueprintPure)
    bool GetBoolMetadata(FRigElementKey InItem, FName InMetadataName, bool DefaultValue) const;
    
    UFUNCTION(BlueprintPure)
    TArray<bool> GetBoolArrayMetadata(FRigElementKey InItem, FName InMetadataName) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FRigElementKey> GetBoneKeys(bool bTraverse) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FRigElementKey> GetAllKeys_ForBlueprint(bool bTraverse) const;
    
private:
    UFUNCTION(BlueprintPure)
    FRigNullElement FindNull_ForBlueprintOnly(const FRigElementKey& InKey) const;
    
    UFUNCTION(BlueprintPure)
    FRigControlElement FindControl_ForBlueprintOnly(const FRigElementKey& InKey) const;
    
    UFUNCTION(BlueprintPure)
    FRigBoneElement FindBone_ForBlueprintOnly(const FRigElementKey& InKey) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void CopyPose(URigHierarchy* InHierarchy, bool bCurrent, bool bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded);
    
    UFUNCTION(BlueprintCallable)
    void CopyHierarchy(URigHierarchy* InHierarchy);
    
    UFUNCTION(BlueprintPure)
    bool Contains_ForBlueprint(FRigElementKey InKey) const;
    
};

