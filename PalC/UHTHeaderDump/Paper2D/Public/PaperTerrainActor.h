#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PaperTerrainActor.generated.h"

class UPaperTerrainComponent;
class UPaperTerrainSplineComponent;
class USceneComponent;

UCLASS()
class PAPER2D_API APaperTerrainActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    USceneComponent* DummyRoot;
    
    UPROPERTY(Instanced)
    UPaperTerrainSplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPaperTerrainComponent* RenderComponent;
    
public:
    APaperTerrainActor(const FObjectInitializer& ObjectInitializer);

};

