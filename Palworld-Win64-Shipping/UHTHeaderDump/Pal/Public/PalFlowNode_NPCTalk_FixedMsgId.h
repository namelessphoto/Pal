#pragma once
#include "CoreMinimal.h"
#include "PalFlowNode_NPCTalkBase.h"
#include "PalFlowNode_NPCTalk_FixedMsgId.generated.h"

class UPalNPCTalkSystem;

UCLASS(Abstract)
class PAL_API UPalFlowNode_NPCTalk_FixedMsgId : public UPalFlowNode_NPCTalkBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FName> MsgIdList;
    
public:
    UPalFlowNode_NPCTalk_FixedMsgId();

protected:
    UFUNCTION()
    void OnEndText(UPalNPCTalkSystem* TalkSystem);
    
    UFUNCTION()
    TArray<FName> GetRowNames() const;
    
};

