#pragma once
#include "CoreMinimal.h"
#include "EPalBossBattleDifficulty.h"
#include "EPalBossType.h"
#include "PalFlowNode_NPCTalkBase.h"
#include "PalFlowNode_BossDefeatBranch.generated.h"

UCLASS(Abstract)
class PAL_API UPalFlowNode_BossDefeatBranch : public UPalFlowNode_NPCTalkBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalBossType BossType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalBossBattleDifficulty CheckDifficulty;
    
public:
    UPalFlowNode_BossDefeatBranch();

protected:
    UFUNCTION(BlueprintPure)
    bool IsDefeated() const;
    
};

