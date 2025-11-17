#pragma once
#include "CoreMinimal.h"
#include "PalHitCollision.h"
#include "PalHitCollisionSphere.generated.h"

class USphereComponent;

UCLASS()
class PAL_API APalHitCollisionSphere : public APalHitCollision {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    USphereComponent* SphereComponent;
    
public:
    APalHitCollisionSphere(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void DrawHitCollision();
    
};

