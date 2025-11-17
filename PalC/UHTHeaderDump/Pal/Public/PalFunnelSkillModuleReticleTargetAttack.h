#pragma once
#include "CoreMinimal.h"
#include "PalFunnelSkillModule.h"
#include "PalFunnelSkillModuleReticleTargetAttack.generated.h"

class APalCharacter;

UCLASS()
class PAL_API UPalFunnelSkillModuleReticleTargetAttack : public UPalFunnelSkillModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    bool bShouldSetSkillAction;
    
    UPROPERTY(EditDefaultsOnly)
    float SearchRange;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float CoolTime;
    
    UPROPERTY()
    TWeakObjectPtr<APalCharacter> ReticleTarget;
    
public:
    UPalFunnelSkillModuleReticleTargetAttack();

protected:
    UFUNCTION(BlueprintCallable)
    void Reset();
    
public:
    UFUNCTION(BlueprintPure)
    APalCharacter* GetTarget() const;
    
};

