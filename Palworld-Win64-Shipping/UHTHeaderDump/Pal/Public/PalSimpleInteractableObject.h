#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalSimpleInteractableObject.generated.h"

UCLASS()
class PAL_API APalSimpleInteractableObject : public AActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
    APalSimpleInteractableObject(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    EPalInteractiveObjectIndicatorType GetIndicatorType() const;
    

    // Fix for true pure virtual functions not being implemented
};

