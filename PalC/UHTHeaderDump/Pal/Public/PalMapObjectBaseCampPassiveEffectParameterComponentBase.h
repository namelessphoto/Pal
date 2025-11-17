#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalMapObjectBaseCampPassiveEffectParameterComponentBase.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectBaseCampPassiveEffectParameterComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPalMapObjectBaseCampPassiveEffectParameterComponentBase(const FObjectInitializer& ObjectInitializer);

};

