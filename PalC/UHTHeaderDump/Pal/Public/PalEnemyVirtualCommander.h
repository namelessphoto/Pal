#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalEnemyVirtualCommander.generated.h"

UCLASS(Abstract)
class PAL_API APalEnemyVirtualCommander : public AActor {
    GENERATED_BODY()
public:
    APalEnemyVirtualCommander(const FObjectInitializer& ObjectInitializer);

};

