#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "WaterBrushActorInterface.h"
#include "WaterBodyIsland.generated.h"

class UWaterSplineComponent;

UCLASS()
class WATER_API AWaterBodyIsland : public AActor, public IWaterBrushActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UWaterSplineComponent* SplineComp;
    
public:
    AWaterBodyIsland(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UWaterSplineComponent* GetWaterSpline() const;
    

    // Fix for true pure virtual functions not being implemented
};

