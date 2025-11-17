#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimNodeReferenceConversionResult -FallbackName=EAnimNodeReferenceConversionResult
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=StructUtils -ObjectName=InstancedStruct -FallbackName=InstancedStruct
#include "EKawaiiPhysicsAccessExternalForceResult.h"
#include "KawaiiPhysicsReference.h"
#include "KawaiiPhysicsSettings.h"
#include "KawaiiPhysicsLibrary.generated.h"

class UKawaiiPhysicsLimitsDataAsset;
class UObject;
class USkeletalMeshComponent;

UCLASS(BlueprintType)
class KAWAIIPHYSICS_API UKawaiiPhysicsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKawaiiPhysicsLibrary();

    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference SetWindScale(const FKawaiiPhysicsReference& KawaiiPhysics, float WindScale);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference SetTeleportRotationThreshold(const FKawaiiPhysicsReference& KawaiiPhysics, float TeleportRotationThreshold);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference SetTeleportDistanceThreshold(const FKawaiiPhysicsReference& KawaiiPhysics, float TeleportDistanceThreshold);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference SetRootBoneName(const FKawaiiPhysicsReference& KawaiiPhysics, UPARAM(Ref) FName& RootBoneName);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference SetPhysicsSettings(const FKawaiiPhysicsReference& KawaiiPhysics, UPARAM(Ref) FKawaiiPhysicsSettings& PhysicsSettings);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference SetNeedWarmUp(const FKawaiiPhysicsReference& KawaiiPhysics, bool bNeedWarmUp);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference SetLimitsDataAsset(const FKawaiiPhysicsReference& KawaiiPhysics, UKawaiiPhysicsLimitsDataAsset* LimitsDataAsset);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference SetGravity(const FKawaiiPhysicsReference& KawaiiPhysics, FVector Gravity);
    
    UFUNCTION(BlueprintCallable)
    static void SetExternalForceWildcardProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, const int32& Value);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference SetExternalForceVectorProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference SetExternalForceTransformProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, FTransform Value);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference SetExternalForceRotatorProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, FRotator Value);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference SetExternalForceIntProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference SetExternalForceFloatProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, float Value);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference SetExternalForceBoolProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference SetExcludeBoneNames(const FKawaiiPhysicsReference& KawaiiPhysics, UPARAM(Ref) TArray<FName>& ExcludeBoneNames);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference SetEnableWind(const FKawaiiPhysicsReference& KawaiiPhysics, bool bEnableWind);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference SetDummyBoneLength(const FKawaiiPhysicsReference& KawaiiPhysics, float DummyBoneLength);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference SetAllowWorldCollision(const FKawaiiPhysicsReference& KawaiiPhysics, bool bAllowWorldCollision);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference ResetDynamics(const FKawaiiPhysicsReference& KawaiiPhysics);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveExternalForcesFromComponent(USkeletalMeshComponent* MeshComp, UObject* Owner, UPARAM(Ref) FGameplayTagContainer& FilterTags, bool bFilterExactMatch);
    
    UFUNCTION(BlueprintPure)
    static float GetWindScale(const FKawaiiPhysicsReference& KawaiiPhysics);
    
    UFUNCTION(BlueprintPure)
    static float GetTeleportRotationThreshold(const FKawaiiPhysicsReference& KawaiiPhysics);
    
    UFUNCTION(BlueprintPure)
    static float GetTeleportDistanceThreshold(const FKawaiiPhysicsReference& KawaiiPhysics);
    
    UFUNCTION(BlueprintPure)
    static FName GetRootBoneName(const FKawaiiPhysicsReference& KawaiiPhysics);
    
    UFUNCTION(BlueprintPure)
    static FKawaiiPhysicsSettings GetPhysicsSettings(const FKawaiiPhysicsReference& KawaiiPhysics);
    
    UFUNCTION(BlueprintPure)
    static bool GetNeedWarmUp(const FKawaiiPhysicsReference& KawaiiPhysics);
    
    UFUNCTION(BlueprintPure)
    static UKawaiiPhysicsLimitsDataAsset* GetLimitsDataAsset(const FKawaiiPhysicsReference& KawaiiPhysics);
    
    UFUNCTION(BlueprintPure)
    static FVector GetGravity(const FKawaiiPhysicsReference& KawaiiPhysics);
    
    UFUNCTION(BlueprintCallable)
    static void GetExternalForceWildcardProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, int32& Value);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetExternalForceVectorProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetExternalForceTransformProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName);
    
    UFUNCTION(BlueprintCallable)
    static FRotator GetExternalForceRotatorProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetExternalForceIntProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName);
    
    UFUNCTION(BlueprintCallable)
    static float GetExternalForceFloatProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetExternalForceBoolProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName);
    
    UFUNCTION(BlueprintPure)
    static TArray<FName> GetExcludeBoneNames(const FKawaiiPhysicsReference& KawaiiPhysics);
    
    UFUNCTION(BlueprintPure)
    static bool GetEnableWind(const FKawaiiPhysicsReference& KawaiiPhysics);
    
    UFUNCTION(BlueprintPure)
    static float GetDummyBoneLength(const FKawaiiPhysicsReference& KawaiiPhysics);
    
    UFUNCTION(BlueprintPure)
    static bool GetAllowWorldCollision(const FKawaiiPhysicsReference& KawaiiPhysics);
    
    UFUNCTION(BlueprintPure)
    static void ConvertToKawaiiPhysicsPure(const FAnimNodeReference& Node, FKawaiiPhysicsReference& KawaiiPhysics, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference ConvertToKawaiiPhysics(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static FKawaiiPhysicsReference AddExternalForceWithExecResult(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, FInstancedStruct& ExternalForce, UObject* Owner);
    
    UFUNCTION(BlueprintCallable)
    static bool AddExternalForcesToComponent(USkeletalMeshComponent* MeshComp, UPARAM(Ref) TArray<FInstancedStruct>& ExternalForces, UObject* Owner, UPARAM(Ref) FGameplayTagContainer& FilterTags, bool bFilterExactMatch, bool bIsOneShot);
    
    UFUNCTION(BlueprintCallable)
    static bool AddExternalForce(const FKawaiiPhysicsReference& KawaiiPhysics, FInstancedStruct& ExternalForce, UObject* Owner, bool bIsOneShot);
    
};

