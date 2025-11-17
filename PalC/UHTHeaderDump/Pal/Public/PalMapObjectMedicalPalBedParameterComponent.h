#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalMapObjectMedicalPalBedParameterComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalMapObjectMedicalPalBedParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float AdditionalHealingRate;
    
    UPROPERTY(EditDefaultsOnly)
    float AffectSanityRate;
    
    UPalMapObjectMedicalPalBedParameterComponent(const FObjectInitializer& ObjectInitializer);

};

