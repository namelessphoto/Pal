#pragma once
#include "CoreMinimal.h"
#include "PalLevelObjectActor.h"
#include "PalDungeonLevelGimmickBase.generated.h"

UCLASS(Abstract)
class PAL_API APalDungeonLevelGimmickBase : public APalLevelObjectActor {
    GENERATED_BODY()
public:
    APalDungeonLevelGimmickBase(const FObjectInitializer& ObjectInitializer);

};

