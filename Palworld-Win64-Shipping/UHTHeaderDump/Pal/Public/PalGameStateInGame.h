#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "GameDateTime.h"
#include "PalChatMessage.h"
#include "PalGameState.h"
#include "PalGameStateInGame.generated.h"

class APalBotBuilderLocationBase;
class APalNetworkTransmitter;
class APalPlayerState;
class UPalBaseCampReplicator;
class UPalCharacterManagerReplicator;
class UPalClientOnlyPlayerInfoReplicator;
class UPalGameSystemInitManagerComponent;
class UPalLocationReplicator;
class UPalOptionReplicator;
class UPalStageReplicator;
class UPalSupplySpawnerData;

UCLASS(MinimalAPI)
class APalGameStateInGame : public APalGameState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRecievedServerNoticeDelegate, const FString&, NoticeMessage);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRecievedChatMessageDelegate, const FPalChatMessage&, Message);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndTrial);
    
    UPROPERTY(Replicated)
    FDateTime RealProgressDateTime_ForRep;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_CharacterManagerReplicator)
    UPalCharacterManagerReplicator* CharacterManagerReplicator;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_BaseCampReplicator)
    UPalBaseCampReplicator* BaseCampReplicator;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_OptionReplicator)
    UPalOptionReplicator* OptionReplicator;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_StageReplicator)
    UPalStageReplicator* StageReplicator;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_LocationReplicator)
    UPalLocationReplicator* LocationReplicator;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_ClientOnlyPlayerInfo)
    UPalClientOnlyPlayerInfoReplicator* ClientOnlyPlayerInfoReplicator;
    
    UPROPERTY(Transient)
    APalNetworkTransmitter* DedicatedServerTransmitter;
    
    UPROPERTY(Instanced)
    UPalGameSystemInitManagerComponent* GameSystemInitManager;
    
    UPROPERTY(Transient)
    TArray<APalBotBuilderLocationBase*> BotBuilderLocation;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FString WorldName;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_WorldSaveDirectoryName)
    FString WorldSaveDirectoryName;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bIsDedicatedServer;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    int32 MaxPlayerNum;
    
    UPROPERTY(ReplicatedUsing=OnRep_WorldTime)
    FGameDateTime WorldTime;
    
    UPROPERTY(Replicated)
    FDateTime RealUtcTime;
    
    UPROPERTY(Replicated)
    float ServerFrameTime;
    
    UPROPERTY(Replicated)
    FString ServerSessionId;
    
    UPROPERTY(Replicated)
    int32 ServerWildMonsterCount;
    
    UPROPERTY(Replicated)
    int32 ServerOtomoMonsterCount;
    
    UPROPERTY(Replicated)
    int32 ServerBaseCampMonsterCount;
    
    UPROPERTY(Replicated)
    int32 ServerNPCCount;
    
    UPROPERTY(Replicated)
    int32 ServerOtherCharacterCount;
    
    UPROPERTY(Replicated)
    int32 ImportanceCharacterCount_AllUpdate;
    
    UPROPERTY(Replicated)
    int32 ImportanceCharacterCount_Nearest;
    
    UPROPERTY(Replicated)
    int32 ImportanceCharacterCount_Near;
    
    UPROPERTY(Replicated)
    int32 ImportanceCharacterCount_MidInSight;
    
    UPROPERTY(Replicated)
    int32 ImportanceCharacterCount_FarInSight;
    
    UPROPERTY(Replicated)
    int32 ImportanceCharacterCount_MidOutSight;
    
    UPROPERTY(Replicated)
    int32 ImportanceCharacterCount_FarOutSight;
    
    UPROPERTY(Replicated)
    int32 ImportanceCharacterCount_Farthest;
    
    UPROPERTY(Replicated)
    int32 BaseCampCount;
    
    UPROPERTY(Replicated)
    int32 NavMeshInvokerCount;
    
    UPROPERTY(Replicated)
    TArray<UPalSupplySpawnerData*> SupplySpawnerDataList;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float WorldOceanPlaneZ;
    
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FPalChatMessage> ChatMessages;
    
    UPROPERTY(BlueprintAssignable)
    FOnRecievedChatMessageDelegate OnRecievedChatMessageDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnRecievedServerNoticeDelegate OnRecievedServerNoticeDelegate;
    
private:
    UPROPERTY()
    FString SaveConfigCategoryName;
    
public:
    UPROPERTY(BlueprintAssignable)
    FEndTrial FEndTrialDelegate;
    
    UPROPERTY()
    FTimerHandle TrialTimerHandle;
    
    APalGameStateInGame(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetWorldOceanPlaneZ(const float InZ);
    
private:
    UFUNCTION()
    void OnRep_WorldTime();
    
    UFUNCTION()
    void OnRep_WorldSaveDirectoryName();
    
    UFUNCTION()
    void OnRep_StageReplicator();
    
    UFUNCTION()
    void OnRep_OptionReplicator();
    
    UFUNCTION()
    void OnRep_LocationReplicator();
    
    UFUNCTION()
    void OnRep_ClientOnlyPlayerInfo();
    
    UFUNCTION()
    void OnRep_CharacterManagerReplicator();
    
    UFUNCTION()
    void OnRep_BaseCampReplicator();
    
public:
    UFUNCTION()
    void OnOverTrialTime();
    
private:
    UFUNCTION()
    void OnCompleteSyncAllFromServer_InClient(APalPlayerState* PlayerState);
    
public:
    UFUNCTION(BlueprintPure)
    FString GetWorldSaveDirectoryName() const;
    
    UFUNCTION(BlueprintPure)
    FString GetWorldName() const;
    
    UFUNCTION(BlueprintPure)
    float GetServerFrameTime() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRemainTrialTimeSecond();
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxPlayerNum() const;
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastServerNotice(const FString& NoticeMessage);
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastChatMessage(const FPalChatMessage& ChatMessage);
    
};

