#pragma once
#include "CoreMinimal.h"
#include "WaterBodyGenerator.h"
#include "RiverGenerator.generated.h"

class USplineMeshComponent;

UCLASS(MinimalAPI)
class UDEPRECATED_RiverGenerator : public UDEPRECATED_WaterBodyGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, NonPIEDuplicateTransient)
    TArray<USplineMeshComponent*> SplineMeshComponents;
    
    UDEPRECATED_RiverGenerator();

};

