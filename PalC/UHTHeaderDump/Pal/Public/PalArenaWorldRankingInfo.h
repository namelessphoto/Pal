#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "PalArenaWorldRankingRecord.h"
#include "PalFastArenaWorldRankingRepInfoArray.h"
#include "PalArenaWorldRankingInfo.generated.h"

class UDataTable;
class UPalGroupGuildBase;
class UPalIndividualCharacterParameter;
class UWordFilterReceiveObject;

UCLASS()
class PAL_API APalArenaWorldRankingInfo : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleInstanceOnly)
    TArray<FPalArenaWorldRankingRecord> Records;
    
    UPROPERTY(VisibleInstanceOnly, ReplicatedUsing=OnRep_FastTopRankRecords)
    FPalFastArenaWorldRankingRepInfoArray FastTopRankRecords;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ArenaNPCDataTable;
    
    UPROPERTY()
    TSet<UWordFilterReceiveObject*> ReceiveObjectSet;
    
public:
    APalArenaWorldRankingInfo(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void UpdatePlayerName(UPalIndividualCharacterParameter* IndividualParameter, const FString& NewName);
    
    UFUNCTION()
    void UpdatePlayerGuildName(const UPalGroupGuildBase* Guild, const FString& NewGuildName);
    
    UFUNCTION()
    void UpdatePlayerGuild(const FGuid& PlayerUId, UPalGroupGuildBase* PrevGuild, UPalGroupGuildBase* AfterGuild);
    
    UFUNCTION()
    void UpdateArenaRankPoint(UPalIndividualCharacterParameter* IndividualParameter, int32 NewArenaRankPoint);
    
    UFUNCTION()
    void OnRep_FastTopRankRecords();
    
public:
    UFUNCTION()
    void OnReceivedPlayerNameWordFilteringResult(UWordFilterReceiveObject* ReceiveObject, const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
    UFUNCTION()
    void OnReceivedGuildNameWordFilteringResult(UWordFilterReceiveObject* ReceiveObject, const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
    UFUNCTION(BlueprintPure)
    TArray<FPalArenaWorldRankingRecord> GetTopWorldArenaRanking();
    
    UFUNCTION(BlueprintPure)
    FPalArenaWorldRankingRecord GetRecordByPlayerUid_ServerInternal(const FGuid& PlayerUId) const;
    
};

