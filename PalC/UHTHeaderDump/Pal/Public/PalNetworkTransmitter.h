#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "NetworkActorSpawnParameters.h"
#include "NetworkSpawnActorDelegateDelegate.h"
#include "PalNetworkTransmitterDelaySpawnInfo.h"
#include "PalNetworkTransmitter.generated.h"

class UPalNetworkArenaComponent;
class UPalNetworkBaseCampComponent;
class UPalNetworkBossBattleComponent;
class UPalNetworkCharacterComponent;
class UPalNetworkCharacterContainerComponent;
class UPalNetworkCharacterStatusOperationComponent;
class UPalNetworkFishingComponent;
class UPalNetworkIndividualComponent;
class UPalNetworkInvaderComponent;
class UPalNetworkItemComponent;
class UPalNetworkMapObjectComponent;
class UPalNetworkPlayerComponent;
class UPalNetworkQuestComponent;
class UPalNetworkRaidBossComponent;
class UPalNetworkShopComponent;
class UPalNetworkTimeComponent;
class UPalNetworkWorkProgressComponent;
class UPalNetworkWorldSecurityComponent;

UCLASS()
class PAL_API APalNetworkTransmitter : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, VisibleAnywhere)
    UPalNetworkMapObjectComponent* MapObject;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UPalNetworkItemComponent* Item;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UPalNetworkBaseCampComponent* BaseCamp;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UPalNetworkCharacterContainerComponent* CharacterContainer;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UPalNetworkPlayerComponent* Player;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UPalNetworkCharacterComponent* Character;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UPalNetworkWorkProgressComponent* WorkProgress;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UPalNetworkWorldSecurityComponent* WorldSecurity;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UPalNetworkBossBattleComponent* BossBattle;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UPalNetworkTimeComponent* Time;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UPalNetworkShopComponent* Shop;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UPalNetworkInvaderComponent* Invader;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UPalNetworkCharacterStatusOperationComponent* CharacterStatusOperation;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UPalNetworkRaidBossComponent* RaidBoss;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UPalNetworkArenaComponent* Arena;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UPalNetworkFishingComponent* Fishing;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UPalNetworkQuestComponent* Quest;
    
    UPROPERTY(Instanced, Transient)
    UPalNetworkIndividualComponent* NetworkIndividualComponent;
    
    UPROPERTY(Transient)
    TArray<FPalNetworkTransmitterDelaySpawnInfo> DelayDelegateCallQueue;
    
public:
    APalNetworkTransmitter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FGuid SpawnReliableActorBroadcast(UClass* actorClass, FNetworkActorSpawnParameters SpawnParameter, FNetworkSpawnActorDelegate SpawnDelegate);
    
    UFUNCTION(BlueprintCallable)
    FGuid SpawnNonReliableActorBroadcast(UClass* actorClass, FNetworkActorSpawnParameters SpawnParameter, FNetworkSpawnActorDelegate SpawnDelegate);
    
private:
    UFUNCTION(Reliable, Server)
    void SpawnNonReliableActor_ToServer(UClass* actorClass, FNetworkActorSpawnParameters SpawnParameter, int32 issuerID);
    
    UFUNCTION(NetMulticast, Reliable)
    void SpawnedNonReliableActor_ToALL(UClass* actorClass, FNetworkActorSpawnParameters SpawnParameter, int32 issuerID);
    
    UFUNCTION(NetMulticast, Reliable)
    void SpawnedActor_ToALL(AActor* SpawnedActor, AActor* SpawnedController, FNetworkActorSpawnParameters SpawnParameter, FGuid Guid);
    
public:
    UFUNCTION(BlueprintCallable)
    FGuid SpawnActorBroadcast(UClass* actorClass, FNetworkActorSpawnParameters SpawnParameter, FNetworkSpawnActorDelegate SpawnDelegate);
    
private:
    UFUNCTION(Reliable, Server)
    void SpawnActor_ToServer(UClass* actorClass, FNetworkActorSpawnParameters SpawnParameter, FGuid Guid);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void SetupBroadcast_FromServer();
    
    UFUNCTION(BlueprintPure)
    UPalNetworkWorldSecurityComponent* GetWorldSecurity() const;
    
    UFUNCTION(BlueprintPure)
    UPalNetworkWorkProgressComponent* GetWorkProgress() const;
    
    UFUNCTION(BlueprintPure)
    UPalNetworkTimeComponent* GetTime() const;
    
    UFUNCTION(BlueprintPure)
    UPalNetworkShopComponent* GetShop() const;
    
    UFUNCTION(BlueprintPure)
    UPalNetworkQuestComponent* GetQuest() const;
    
    UFUNCTION(BlueprintPure)
    UPalNetworkPlayerComponent* GetPlayer() const;
    
    UFUNCTION(BlueprintPure)
    UPalNetworkMapObjectComponent* GetMapObject() const;
    
    UFUNCTION(BlueprintPure)
    UPalNetworkItemComponent* GetItem() const;
    
    UFUNCTION(BlueprintPure)
    UPalNetworkInvaderComponent* GetInvader() const;
    
    UFUNCTION(BlueprintPure)
    UPalNetworkCharacterStatusOperationComponent* GetCharacterStatusOperation() const;
    
    UFUNCTION(BlueprintPure)
    UPalNetworkCharacterContainerComponent* GetCharacterContainer() const;
    
    UFUNCTION(BlueprintPure)
    UPalNetworkCharacterComponent* GetCharacter() const;
    
    UFUNCTION(BlueprintPure)
    UPalNetworkBossBattleComponent* GetBossBattle() const;
    
    UFUNCTION(BlueprintPure)
    UPalNetworkBaseCampComponent* GetBaseCamp() const;
    
    UFUNCTION(BlueprintPure)
    UPalNetworkArenaComponent* GetArena() const;
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void DummyReliableFunction();
    
    UFUNCTION(Reliable, Server)
    void Debug_RequestLogTreasureBoxLocalPlayerAround_ToServer();
    
    UFUNCTION(Client, Reliable)
    void Debug_ReceiveLogTreasureBoxLocalPlayerAround_ToRequestPlayer(const FString& Message);
    
    UFUNCTION(Reliable, Server)
    void Debug_LogServerThreadNum_ToServer();
    
    UFUNCTION(Client, Reliable)
    void Debug_LogServerThreadNum_ToRequestPlayer(const FString& Message);
    
};

