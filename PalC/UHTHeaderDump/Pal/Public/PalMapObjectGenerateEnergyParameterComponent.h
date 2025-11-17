#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalEnergyType.h"
#include "PalMapObjectGenerateEnergyParameterComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectGenerateEnergyParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EPalEnergyType GenerateEnergyType;
    
    UPROPERTY(EditDefaultsOnly)
    float GenerateEnergyRateByWorker;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxEnergyStorage;
    
    UPROPERTY(EditDefaultsOnly)
    float ObtainExpByGenerateEnergy;
    
    UPROPERTY(EditDefaultsOnly)
    bool bTeleportWorkLocationOnStart;
    
    UPalMapObjectGenerateEnergyParameterComponent(const FObjectInitializer& ObjectInitializer);

};

