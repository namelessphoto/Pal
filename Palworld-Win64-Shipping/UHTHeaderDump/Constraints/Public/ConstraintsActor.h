#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ConstraintsActor.generated.h"

class UConstraintsManager;

UCLASS(NotPlaceable)
class CONSTRAINTS_API AConstraintsActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    UConstraintsManager* ConstraintsManager;
    
    AConstraintsActor(const FObjectInitializer& ObjectInitializer);

};

