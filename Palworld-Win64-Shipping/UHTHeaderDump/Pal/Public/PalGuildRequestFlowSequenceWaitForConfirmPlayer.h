#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "SequentialProcessSequenceBase_WaitOneProcess.h"
#include "PalGuildRequestFlowSequenceWaitForConfirmPlayer.generated.h"

class USequentialProcessSequenceBase;

UCLASS(Abstract)
class PAL_API UPalGuildRequestFlowSequenceWaitForConfirmPlayer : public USequentialProcessSequenceBase_WaitOneProcess {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid PlayerUIdWaitFor;
    
    UPROPERTY()
    USequentialProcessSequenceBase* NextSequenceIfConfirmYes;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float ProgressTime;
    
public:
    UPalGuildRequestFlowSequenceWaitForConfirmPlayer();

};

