#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "PalLimitVolumeInterface.h"
#include "PalLimitVolumeBoxComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalLimitVolumeBoxComponent : public UBoxComponent, public IPalLimitVolumeInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 LimitFlags;
    
    UPROPERTY(EditAnywhere)
    bool bWorldBuildAreaLimit;
    
public:
    UPalLimitVolumeBoxComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

