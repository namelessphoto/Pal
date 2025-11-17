#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalStageRoomExit.generated.h"

UCLASS()
class PAL_API APalStageRoomExit : public AActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
    APalStageRoomExit(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
private:
    UFUNCTION()
    void OnResponseDialogExit(const bool bResponse);
    

    // Fix for true pure virtual functions not being implemented
};

