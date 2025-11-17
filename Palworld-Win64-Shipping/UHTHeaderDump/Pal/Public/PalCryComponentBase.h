#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalCryComponentBase.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalCryComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPalCryComponentBase(const FObjectInitializer& ObjectInitializer);

};

