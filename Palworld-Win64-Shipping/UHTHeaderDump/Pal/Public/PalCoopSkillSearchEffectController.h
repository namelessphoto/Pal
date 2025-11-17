#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalCoopSkillSearchEffectParameter.h"
#include "PalCoopSkillSearchEffectController.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalCoopSkillSearchEffectController : public UObject {
    GENERATED_BODY()
public:
    UPalCoopSkillSearchEffectController();

    UFUNCTION(BlueprintImplementableEvent)
    void Tick(float DeltaTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Start(FPalCoopSkillSearchEffectParameter EffectParam);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsFinished() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsFadingOut() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void End();
    
};

