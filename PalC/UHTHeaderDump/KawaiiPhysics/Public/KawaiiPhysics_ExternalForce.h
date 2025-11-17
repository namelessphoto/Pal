#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "EExternalForceSpace.h"
#include "KawaiiPhysics_ExternalForce.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct KAWAIIPHYSICS_API FKawaiiPhysics_ExternalForce {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDrawDebug;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> ApplyBoneFilter;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> IgnoreBoneFilter;
    
    UPROPERTY(EditAnywhere)
    EExternalForceSpace ExternalForceSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFloatInterval RandomForceScaleRange;
    
    UPROPERTY()
    UObject* ExternalOwner;
    
    UPROPERTY()
    bool bIsOneShot;
    
protected:
    UPROPERTY()
    float RandomizedForceScale;
    
    UPROPERTY()
    FVector Force;
    
    UPROPERTY()
    FTransform ComponentTransform;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bCanSelectForceSpace;
    
public:
    FKawaiiPhysics_ExternalForce();
};

