#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReferenceSkeletonProvider -FallbackName=BoneReferenceSkeletonProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "BoxLimit.h"
#include "CapsuleLimit.h"
#include "PlanarLimit.h"
#include "SphericalLimit.h"
#include "KawaiiPhysicsLimitsDataAsset.generated.h"

UCLASS(BlueprintType)
class KAWAIIPHYSICS_API UKawaiiPhysicsLimitsDataAsset : public UDataAsset, public IBoneReferenceSkeletonProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSphericalLimit> SphericalLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FCapsuleLimit> CapsuleLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBoxLimit> BoxLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPlanarLimit> PlanarLimits;
    
    UKawaiiPhysicsLimitsDataAsset();


    // Fix for true pure virtual functions not being implemented
};

