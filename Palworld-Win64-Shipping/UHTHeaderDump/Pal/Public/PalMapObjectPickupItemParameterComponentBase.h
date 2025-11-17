#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalMapObjectPickupItemParameterComponentBase.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalMapObjectPickupItemParameterComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPalMapObjectPickupItemParameterComponentBase(const FObjectInitializer& ObjectInitializer);

};

