#pragma once
#include "CoreMinimal.h"
#include "PalAIActionBase.h"
#include "PalAIActionFunnelSkillBase.generated.h"

class UPalFunnelSkillModule;

UCLASS(EditInlineNew)
class UPalAIActionFunnelSkillBase : public UPalAIActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    UPalFunnelSkillModule* Module;
    
public:
    UPalAIActionFunnelSkillBase();

    UFUNCTION(BlueprintCallable)
    void SetModule(UPalFunnelSkillModule* InModule);
    
};

