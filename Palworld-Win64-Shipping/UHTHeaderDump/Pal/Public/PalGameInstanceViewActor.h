#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalGameInstanceViewActor.generated.h"

class UObject;

UCLASS()
class APalGameInstanceViewActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleAnywhere)
    TWeakObjectPtr<UObject> Target;
    
    APalGameInstanceViewActor(const FObjectInitializer& ObjectInitializer);

};

