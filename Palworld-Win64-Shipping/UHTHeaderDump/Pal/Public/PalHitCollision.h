#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalHitCollision.generated.h"

class UPalHitFilter;

UCLASS(Abstract)
class PAL_API APalHitCollision : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UPalHitFilter* HitFilter;
    
public:
    APalHitCollision(const FObjectInitializer& ObjectInitializer);

};

