#pragma once
#include "CoreMinimal.h"
#include "PalAIActionCompositeBase.h"
#include "PalAIActionCompositeActionDummy.generated.h"

class UPalAIActionBase;
class UPawnAction;

UCLASS()
class UPalAIActionCompositeActionDummy : public UPalAIActionCompositeBase {
    GENERATED_BODY()
public:
    UPalAIActionCompositeActionDummy();

private:
    UFUNCTION()
    void OnResumeAction(UPalAIActionBase* action);
    
    UFUNCTION()
    void OnPauseAction(UPalAIActionBase* action, const UPawnAction* PausedBy);
    
    UFUNCTION()
    void OnFinishAction(UPalAIActionBase* action);
    
};

