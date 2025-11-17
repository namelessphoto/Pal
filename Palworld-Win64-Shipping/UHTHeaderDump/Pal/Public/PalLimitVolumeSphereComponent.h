#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "PalLimitVolumeInterface.h"
#include "PalLimitVolumeSphereComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalLimitVolumeSphereComponent : public USphereComponent, public IPalLimitVolumeInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 LimitFlags;
    
    UPROPERTY(EditAnywhere)
    bool bWorldBuildAreaLimit;
    
public:
    UPalLimitVolumeSphereComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

