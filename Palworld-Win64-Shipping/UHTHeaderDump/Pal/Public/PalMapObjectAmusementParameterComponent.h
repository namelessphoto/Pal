#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Templates/SubclassOf.h"
#include "PalMapObjectAmusementParameterComponent.generated.h"

class UPalAIActionBaseCampInUsingAmusement;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalMapObjectAmusementParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float AffectSanityRate;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalAIActionBaseCampInUsingAmusement> AIActionClass;
    
    UPalMapObjectAmusementParameterComponent(const FObjectInitializer& ObjectInitializer);

};

