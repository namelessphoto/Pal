#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "PalClimbParameterInterface.generated.h"

UINTERFACE(Blueprintable)
class UPalClimbParameterInterface : public UInterface {
    GENERATED_BODY()
};

class IPalClimbParameterInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetConsumeStaminaSpeedRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetClimbMoveSpeedRate() const;
    
};

