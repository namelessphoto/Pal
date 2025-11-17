#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LevelInstance -FallbackName=LevelInstance
#include "EPalOilrigType.h"
#include "PalOilrigLevelInstance.generated.h"

UCLASS()
class PAL_API APalOilrigLevelInstance : public ALevelInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalOilrigType OilrigName;
    
public:
    APalOilrigLevelInstance(const FObjectInitializer& ObjectInitializer);

};

