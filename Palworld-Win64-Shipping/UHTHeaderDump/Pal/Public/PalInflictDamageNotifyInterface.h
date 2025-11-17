#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "PalDamageResult.h"
#include "PalDeadInfo.h"
#include "PalInflictDamageNotifyInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPalInflictDamageNotifyInterface : public UInterface {
    GENERATED_BODY()
};

class IPalInflictDamageNotifyInterface : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnPartBroken(const FPalDeadInfo& DeadInfo);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnInflictDamage(const FPalDamageResult& DamageResult);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnDefeatCharacter(const FPalDeadInfo& DeadInfo);
    
};

