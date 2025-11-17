#pragma once
#include "CoreMinimal.h"
#include "WaterBodyGenerator.h"
#include "OceanGenerator.generated.h"

class UOceanBoxCollisionComponent;
class UOceanCollisionComponent;

UCLASS(MinimalAPI)
class UDEPRECATED_OceanGenerator : public UDEPRECATED_WaterBodyGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, NonPIEDuplicateTransient)
    TArray<UOceanBoxCollisionComponent*> CollisionBoxes;
    
    UPROPERTY(Instanced, NonPIEDuplicateTransient)
    TArray<UOceanCollisionComponent*> CollisionHullSets;
    
    UDEPRECATED_OceanGenerator();

};

