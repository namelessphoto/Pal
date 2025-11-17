#pragma once
#include "CoreMinimal.h"
#include "WaterBodyComponent.h"
#include "WaterBodyLakeComponent.generated.h"

class ULakeCollisionComponent;
class UStaticMeshComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WATER_API UWaterBodyLakeComponent : public UWaterBodyComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, NonPIEDuplicateTransient)
    UStaticMeshComponent* LakeMeshComp;
    
    UPROPERTY(Instanced, NonPIEDuplicateTransient)
    ULakeCollisionComponent* LakeCollision;
    
public:
    UWaterBodyLakeComponent(const FObjectInitializer& ObjectInitializer);

};

