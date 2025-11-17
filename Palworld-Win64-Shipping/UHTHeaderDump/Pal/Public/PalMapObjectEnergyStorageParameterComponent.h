#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalEnergyType.h"
#include "PalMapObjectEnergyStorageParameterComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectEnergyStorageParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EPalEnergyType GenerateEnergyType;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxEnergyStorage;
    
    UPalMapObjectEnergyStorageParameterComponent(const FObjectInitializer& ObjectInitializer);

};

