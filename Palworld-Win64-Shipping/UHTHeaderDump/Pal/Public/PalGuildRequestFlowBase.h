#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "SequentialProcessSystem.h"
#include "PalGuildRequestFlowBase.generated.h"

class UPalGuildRequestFlowBase;

UCLASS(Abstract)
class PAL_API UPalGuildRequestFlowBase : public USequentialProcessSystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalGuildRequestFlowBase*, Flow);
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid FlowId;
    
public:
    UPalGuildRequestFlowBase();

private:
    UFUNCTION()
    void OnFinishFlow();
    
};

