#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "PalAIActionWorkerInterruptInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPalAIActionWorkerInterruptInterface : public UInterface {
    GENERATED_BODY()
};

class IPalAIActionWorkerInterruptInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    bool IsInterruptibleBySleep() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsInterruptibleByRecoverHungry() const;
    
};

