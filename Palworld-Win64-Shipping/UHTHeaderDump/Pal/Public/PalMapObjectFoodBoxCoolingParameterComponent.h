#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalMapObjectFoodBoxCoolingParameterComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectFoodBoxCoolingParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalMapObjectFoodBoxCoolingParameterComponent(const FObjectInitializer& ObjectInitializer);

};

