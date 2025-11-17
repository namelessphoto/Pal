#pragma once
#include "CoreMinimal.h"
#include "PalAIActionCompositeBase.h"
#include "Templates/SubclassOf.h"
#include "PalAIActionFunnelCharacterDefault.generated.h"

class UPalFunnelSkillModule;

UCLASS(Blueprintable)
class UPalAIActionFunnelCharacterDefault : public UPalAIActionCompositeBase {
    GENERATED_BODY()
public:
    UPalAIActionFunnelCharacterDefault();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool ShouldSetSkillAction() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSkillAction();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetOtomoFollowAction();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTick_BP(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSkillActionModule(TSubclassOf<UPalFunnelSkillModule> FunnelSkillModuleClass);
    
};

