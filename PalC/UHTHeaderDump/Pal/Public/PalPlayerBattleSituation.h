#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "EPalBattleBGMType.h"
#include "PalInstanceID.h"
#include "PalPlayerBattleEnemyInfo.h"
#include "PalPlayerBattleSituation.generated.h"

UCLASS()
class PAL_API UPalPlayerBattleSituation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FOnBattleRankDownDelegate OnBattleRankDownDelegate;
    
    UPROPERTY()
    FOnChangeBGMTypeDelegate OnChangeBGMTypeDelegate;
    
    UPROPERTY()
    FOnChangeNearEnemyDelegate OnChangeNearEnemyDelegate;
    
private:
    UPROPERTY(Transient)
    TMap<FPalInstanceID, FPalPlayerBattleEnemyInfo> BattleEnemyList;
    
    UPROPERTY()
    bool IsNearCommonEnemy;
    
    UPROPERTY()
    float NearDistanceSqr;
    
    UPROPERTY()
    FTimerHandle DistanceUpdateTimerHandle;
    
    UPROPERTY()
    EPalBattleBGMType CurrentMaxRank;
    
    UPROPERTY(Replicated, Transient)
    TArray<FPalInstanceID> EnemyList;
    
public:
    UPalPlayerBattleSituation();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

