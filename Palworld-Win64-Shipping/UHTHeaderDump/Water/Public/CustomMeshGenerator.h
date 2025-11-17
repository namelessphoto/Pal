#pragma once
#include "CoreMinimal.h"
#include "WaterBodyGenerator.h"
#include "CustomMeshGenerator.generated.h"

class UStaticMeshComponent;

UCLASS(MinimalAPI)
class UDEPRECATED_CustomMeshGenerator : public UDEPRECATED_WaterBodyGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, NonPIEDuplicateTransient)
    UStaticMeshComponent* MeshComp;
    
    UDEPRECATED_CustomMeshGenerator();

};

