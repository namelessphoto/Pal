#pragma once
#include "CoreMinimal.h"
#include "PalWorldSubsystem.h"
#include "PalActionDummyTargetManager.generated.h"

class APalActionDummyTargetActor;

UCLASS()
class UPalActionDummyTargetManager : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<APalActionDummyTargetActor*> ActionDummyTargetCache;
    
public:
    UPalActionDummyTargetManager();

};

