#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "PalHeatSourceSphereComponent.generated.h"

class UPalHeatSourceModule;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalHeatSourceSphereComponent : public USphereComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool DefaultActive;
    
private:
    UPROPERTY(Transient)
    UPalHeatSourceModule* HeatSourceModule;
    
public:
    UPalHeatSourceSphereComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetActiveHeatSource(bool NextIsActive);
    
protected:
    UFUNCTION(BlueprintPure)
    UPalHeatSourceModule* GetModule();
    
};

