#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalCoopSkillSearchEffectParameter.h"
#include "Templates/SubclassOf.h"
#include "PalCoopSkillSearchSystem.generated.h"

class UPalCoopSkillSearchBase;
class UPalCoopSkillSearchEffectController;
class UPalCoopSkillSearchLocationRegister;

UCLASS(BlueprintType)
class UPalCoopSkillSearchSystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalCoopSkillSearchEffectController> EffectControllerClass;
    
    UPROPERTY(VisibleAnywhere)
    UPalCoopSkillSearchLocationRegister* LocationRegister;
    
    UPROPERTY(VisibleAnywhere)
    UPalCoopSkillSearchEffectController* EffectController;
    
    UPROPERTY(VisibleAnywhere)
    TArray<UPalCoopSkillSearchBase*> SearchObjects;
    
public:
    UPalCoopSkillSearchSystem();

    UFUNCTION(BlueprintCallable)
    void StartSearchEffect(const FPalCoopSkillSearchEffectParameter& EffectParam);
    
    UFUNCTION(BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFadingOut() const;
    
    UFUNCTION(BlueprintCallable)
    UPalCoopSkillSearchBase* CreateSearchObject(TSubclassOf<UPalCoopSkillSearchBase> SearchClass);
    
};

