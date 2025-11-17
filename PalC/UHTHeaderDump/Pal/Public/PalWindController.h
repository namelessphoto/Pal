#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "PalWindInfo.h"
#include "PalWindController.generated.h"

class AActor;

UCLASS()
class APalWindController : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditInstanceOnly)
    FFloatInterval WindDirectionChangeInterval;
    
    UPROPERTY(EditInstanceOnly)
    float WindDirectionResponse;
    
    UPROPERTY(EditInstanceOnly)
    FFloatInterval WindSpeedInterval;
    
    UPROPERTY(EditInstanceOnly)
    FFloatInterval WindSpeedChangeInterval;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleInstanceOnly)
    float LastChangedDirectionTime;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleInstanceOnly)
    float LastChangedSpeedTime;
    
public:
    APalWindController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateNiagaraParameterCollection(const FPalWindInfo& WindInfo);
    
private:
    UFUNCTION()
    void OnActorSpawned(AActor* InActor);
    
};

