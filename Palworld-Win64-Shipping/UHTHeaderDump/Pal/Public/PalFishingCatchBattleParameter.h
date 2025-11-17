#pragma once
#include "CoreMinimal.h"
#include "PalFishingCatchBattleParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalFishingCatchBattleParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float RequiredCatchAmount;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float DefaultProgressAmount;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float SuccessFightCatchAmount;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float MissFightCatchAmount;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float CheckFishPickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float FishingInputAcceptTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float SinkWaitMinTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float SinkWaitMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float GaugeMaxSize;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float HitBarDefaultSize;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float HitBarMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float HitBarMoveGravity;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float HitBarMoveLiftForce;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float InitFishPos;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float InitHitBarPos;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float StartDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float OverrideSearchAreaRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float OverrideSearchProbability;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float FirstFishingMissFightCatchAmountRate;
    
    PAL_API FPalFishingCatchBattleParameter();
};

