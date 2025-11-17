#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "KawaiiPhysicsSettings.h"
#include "KawaiiPhysicsModifyBone.generated.h"

USTRUCT(BlueprintType)
struct KAWAIIPHYSICS_API FKawaiiPhysicsModifyBone {
    GENERATED_BODY()
public:
    UPROPERTY()
    FBoneReference BoneRef;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Index;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ParentIndex;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<int32> ChildIndices;
    
    UPROPERTY(BlueprintReadOnly)
    FKawaiiPhysicsSettings PhysicsSettings;
    
    UPROPERTY(BlueprintReadWrite)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly)
    FVector PrevLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FQuat PrevRotation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector PoseLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FQuat PoseRotation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector PoseScale;
    
    UPROPERTY(BlueprintReadOnly)
    float LengthFromRoot;
    
    UPROPERTY(BlueprintReadOnly)
    float LengthRateFromRoot;
    
    UPROPERTY(BlueprintReadOnly)
    bool bDummy;
    
    UPROPERTY(BlueprintReadOnly)
    bool bSkipSimulate;
    
    FKawaiiPhysicsModifyBone();
};

