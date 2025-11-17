#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalDamageInfo.h"
#include "PalHitEffectSlot.generated.h"

UCLASS(Blueprintable)
class UPalHitEffectSlot : public UObject {
    GENERATED_BODY()
public:
    UPalHitEffectSlot();

    UFUNCTION(BlueprintNativeEvent)
    void PlayHitEffect(const FPalDamageInfo& Info);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Initialize();
    
};

