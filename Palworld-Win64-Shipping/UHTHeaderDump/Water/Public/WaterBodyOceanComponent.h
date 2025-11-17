#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "WaterBodyComponent.h"
#include "WaterBodyOceanComponent.generated.h"

class UOceanBoxCollisionComponent;
class UOceanCollisionComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WATER_API UWaterBodyOceanComponent : public UWaterBodyComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, NonPIEDuplicateTransient)
    TArray<UOceanBoxCollisionComponent*> CollisionBoxes;
    
    UPROPERTY(Instanced, NonPIEDuplicateTransient)
    TArray<UOceanCollisionComponent*> CollisionHullSets;
    
    UPROPERTY()
    FVector2D VisualExtents;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector CollisionExtents;
    
    UPROPERTY(Transient)
    float HeightOffset;
    
public:
    UWaterBodyOceanComponent(const FObjectInitializer& ObjectInitializer);

};

