#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalRaidBossSummonGeneratorBase.generated.h"

UCLASS()
class PAL_API APalRaidBossSummonGeneratorBase : public AActor {
    GENERATED_BODY()
public:
    APalRaidBossSummonGeneratorBase(const FObjectInitializer& ObjectInitializer);

};

