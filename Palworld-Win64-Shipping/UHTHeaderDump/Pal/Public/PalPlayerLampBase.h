#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalPlayerLampBase.generated.h"

class UPalTimerPointLightComponent;

UCLASS()
class PAL_API APalPlayerLampBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TArray<UPalTimerPointLightComponent*> MyTimerLightComponents;
    
public:
    APalPlayerLampBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLampEnable(bool bEnableLamp, bool bForceCallEvent);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangedLampEnable(bool bIsEnable);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLampEnable() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UPalTimerPointLightComponent*> GetTimerLightComponents() const;
    
};

