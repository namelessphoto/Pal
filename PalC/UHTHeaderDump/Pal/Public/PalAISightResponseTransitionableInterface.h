#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EPalAISightJudgementType.h"
#include "PalAISightResponseTransitionableInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPalAISightResponseTransitionableInterface : public UInterface {
    GENERATED_BODY()
};

class IPalAISightResponseTransitionableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void GetTransitionableJudgementType(TArray<EPalAISightJudgementType>& JudgeTypeList);
    
};

