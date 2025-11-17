#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalOtomoAttackStopJudgeByBall.generated.h"

UCLASS()
class PAL_API UPalOtomoAttackStopJudgeByBall : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    bool IsProhibitAttack;
    
public:
    UPalOtomoAttackStopJudgeByBall();

};

