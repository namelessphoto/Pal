#pragma once
#include "CoreMinimal.h"
#include "PalHitCollision.h"
#include "PalHitCollisionBox.generated.h"

class UBoxComponent;

UCLASS()
class PAL_API APalHitCollisionBox : public APalHitCollision {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UBoxComponent* BoxComponent;
    
public:
    APalHitCollisionBox(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void DrawHitCollision();
    
};

