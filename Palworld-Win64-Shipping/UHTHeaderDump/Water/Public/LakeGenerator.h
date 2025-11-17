#pragma once
#include "CoreMinimal.h"
#include "WaterBodyGenerator.h"
#include "LakeGenerator.generated.h"

class UBoxComponent;
class ULakeCollisionComponent;
class UStaticMeshComponent;

UCLASS(MinimalAPI)
class UDEPRECATED_LakeGenerator : public UDEPRECATED_WaterBodyGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, NonPIEDuplicateTransient)
    UStaticMeshComponent* LakeMeshComp;
    
    UPROPERTY(Instanced)
    UBoxComponent* LakeCollisionComp;
    
    UPROPERTY(Instanced, NonPIEDuplicateTransient)
    ULakeCollisionComponent* LakeCollision;
    
    UDEPRECATED_LakeGenerator();

};

