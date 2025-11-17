#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalBoxSpawnerPlacementTool.generated.h"

class UBoxComponent;

UCLASS()
class PAL_API APalBoxSpawnerPlacementTool : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector BoxExtent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBoxComponent* BoxComp;
    
public:
    APalBoxSpawnerPlacementTool(const FObjectInitializer& ObjectInitializer);

};

