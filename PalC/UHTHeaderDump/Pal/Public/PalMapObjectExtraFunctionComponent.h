#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalMapObjectExtraFunctionComponent.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectExtraFunctionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalMapObjectExtraFunctionComponent(const FObjectInitializer& ObjectInitializer);

};

