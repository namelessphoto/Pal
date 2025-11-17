#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "PalFishingSpotElectricTriggerInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPalFishingSpotElectricTriggerInterface : public UInterface {
    GENERATED_BODY()
};

class IPalFishingSpotElectricTriggerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTriggerEnabled() const;
    
};

