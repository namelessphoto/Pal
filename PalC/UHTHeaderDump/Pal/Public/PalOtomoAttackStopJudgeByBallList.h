#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalOtomoAttackStopJudgeByBallList.generated.h"

class AActor;
class UPalOtomoAttackStopJudgeByBall;

UCLASS(BlueprintType)
class PAL_API UPalOtomoAttackStopJudgeByBallList : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<FGuid, UPalOtomoAttackStopJudgeByBall*> JudgeList;
    
public:
    UPalOtomoAttackStopJudgeByBallList();

    UFUNCTION(BlueprintCallable)
    void OnHitCaptureBall(AActor* Attacker);
    
};

