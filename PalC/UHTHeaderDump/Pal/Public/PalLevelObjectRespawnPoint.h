#pragma once
#include "CoreMinimal.h"
#include "PalLevelObjectActor.h"
#include "PalLevelObjectRespawnPoint.generated.h"

UCLASS()
class PAL_API APalLevelObjectRespawnPoint : public APalLevelObjectActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName RespawnPointID;
    
public:
    APalLevelObjectRespawnPoint(const FObjectInitializer& ObjectInitializer);

};

