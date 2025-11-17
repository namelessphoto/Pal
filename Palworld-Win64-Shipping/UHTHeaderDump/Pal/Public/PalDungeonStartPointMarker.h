#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalDungeonStartPointMarker.generated.h"

UCLASS()
class PAL_API APalDungeonStartPointMarker : public AActor {
    GENERATED_BODY()
public:
    APalDungeonStartPointMarker(const FObjectInitializer& ObjectInitializer);

};

