#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalExpCalcType.h"
#include "PalDeadInfo.h"
#include "PalExpDatabase.generated.h"

class APalPlayerCharacter;
class APalPlayerState;
class UDataTable;
class UPalBaseCampModel;
class UPalIndividualCharacterHandle;

UCLASS(BlueprintType)
class PAL_API UPalExpDatabase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ExpDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* PaldexBonusExpDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* WorldMapAreaBonusExpTableReferenceNumDataTable;
    
public:
    UPalExpDatabase();

    UFUNCTION(BlueprintPure)
    int64 GetTotalExp(int32 Level, bool IsPlayer);
    
    UFUNCTION(BlueprintPure)
    int64 GetNextExp(int32 Level, bool IsPlayer);
    
    UFUNCTION(BlueprintPure)
    int32 GetFindAreaBonusExpTableReferenceNum(int32 CompletedAreaNum) const;
    
    UFUNCTION(BlueprintPure)
    int64 GetDropExp(int32 Level, FName RowName);
    
    UFUNCTION(BlueprintPure)
    int64 GetCraftExp(int32 Level, bool IsPlayerl);
    
    UFUNCTION(BlueprintPure)
    int64 GetBuildExp(int32 Level, bool IsPlayer);
    
    UFUNCTION(BlueprintPure)
    int64 GetBonusExpTableValue_BP(const int32 StartTableIndex, const int32 ProgressTableIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void DistributionExpValue_forPlayerParty_Server(int64 ExpValue, TArray<APalPlayerCharacter*> GiftPlayerList, bool isCallDelegate);
    
    UFUNCTION(BlueprintPure)
    int64 CalcPaldexBonusExp(const FName CharacterID, int32 CaptureCount, APalPlayerState* captureOwnerState) const;
    
    UFUNCTION(BlueprintPure)
    int64 CalcNeedLevelUpExp(int32 TotalEXP, bool IsPlayer);
    
    UFUNCTION(BlueprintPure)
    int32 CalcLevelFromTotalExp(int32 TotalEXP, bool IsPlayer);
    
    UFUNCTION(BlueprintCallable)
    void AddExpValue_forPlayerParty_Server(int64 ExpValue, TArray<APalPlayerCharacter*> GiftPlayerList, bool isCallDelegate);
    
    UFUNCTION(BlueprintCallable)
    void AddExp_forPlayerParty_TowerBoss(UPalIndividualCharacterHandle* DeadEnemyHandle, TArray<APalPlayerCharacter*> GiftPlayerList, bool isCallDelegate);
    
    UFUNCTION(BlueprintCallable)
    void AddExp_forPlayerParty_ByExpCalcType(APalPlayerCharacter* GiftPlayer, EPalExpCalcType ExpCalcType, float BaseExpRate, bool isCallDelegate);
    
    UFUNCTION(BlueprintCallable)
    void AddExp_forBaseCamp(UPalIndividualCharacterHandle* DeadEnemyHandle, UPalBaseCampModel* CampModel);
    
    UFUNCTION(BlueprintCallable)
    void AddExp_EnemyDeath(FPalDeadInfo DeadInfo);
    
};

