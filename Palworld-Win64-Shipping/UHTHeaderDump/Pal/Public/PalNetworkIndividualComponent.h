#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalWazaID.h"
#include "NetworkActorSpawnParameters.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalInstanceID.h"
#include "PalNetArchive.h"
#include "PalNetworkIndividualComponent.generated.h"

class AActor;
class APalCharacter;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkIndividualComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkIndividualComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void UpdateCharacterParameter_ServerInternal(const FPalInstanceID& ID, const FPalNetArchive& parameterArchive, FGuid Guid);
    
    UFUNCTION()
    void SpawnPhantomActor_SyncCheck(FPalInstanceID ID, int32 PhantomId, FGuid Guid);
    
    UFUNCTION()
    void SpawnPhantomActor_ServerInternal(FPalInstanceID ID, FNetworkActorSpawnParameters SpawnParameter, FGuid Guid);
    
    UFUNCTION()
    void SpawnIndividualActor_SyncCheck(FPalInstanceID ID, FGuid Guid);
    
    UFUNCTION()
    void SpawnIndividualActor_ServerInternal(FPalInstanceID ID, FNetworkActorSpawnParameters SpawnParameter, FGuid Guid);
    
public:
    UFUNCTION(Reliable, Server)
    void RemoveHighPriorityList_ToServer(const FPalInstanceID& ID, APalCharacter* TargetPlayer);
    
private:
    UFUNCTION(Reliable, Server)
    void RaiseToMainActor_ToServer(FPalInstanceID ID, int32 PhantomId, FGuid Guid);
    
    UFUNCTION(NetMulticast, Reliable)
    void RaiseToMainActor_ToALL(FPalInstanceID ID, int32 PhantomId, FGuid Guid);
    
    UFUNCTION()
    void OnUpdateCharacterParameter_ServerInternal(const FPalInstanceID& ID, const FPalNetArchive& parameterArchive, FGuid Guid);
    
    UFUNCTION()
    void OnSpawnPhantomActor_ServerInternal(FPalInstanceID ID, int32 PhantomId, AActor* Actor, FGuid Guid);
    
    UFUNCTION()
    void OnSpawnIndividualActor_ServerInternal(FPalInstanceID ID, AActor* Actor, FGuid Guid);
    
    UFUNCTION()
    void OnDespawnPhantomActor_ServerInternal(FPalInstanceID ID, int32 PhantomId, FGuid Guid);
    
    UFUNCTION()
    void OnDespawnIndividualActor_ServerInternal(FPalInstanceID ID, FGuid Guid);
    
    UFUNCTION()
    void OmCreateIndividualID_ServerInternal(FPalIndividualCharacterSaveParameter InitParameter, FPalInstanceID ID, FGuid Guid);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void NotifyAddedMasteredWaza_ToAll(const FPalInstanceID& ID, EPalWazaID WazaID);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void DropToPhantomActor_ToALL(FPalInstanceID ID, int32 PhantomId, FGuid Guid);
    
    UFUNCTION()
    void DropToPhantomActor_ServerInternal(FPalInstanceID ID, FGuid Guid);
    
    UFUNCTION()
    void DespawnPhantomActor_SyncCheck(FPalInstanceID ID, int32 PhantomId, FGuid Guid);
    
    UFUNCTION()
    void DespawnPhantomActor_ServerInternal(FPalInstanceID ID, int32 PhantomId, FGuid Guid);
    
    UFUNCTION()
    void DespawnIndividualActor_SyncCheck(FPalInstanceID ID, FGuid Guid);
    
    UFUNCTION()
    void DespawnIndividualActor_ServerInternal(FPalInstanceID ID, FGuid Guid);
    
    UFUNCTION()
    void CreateIndividualID_SyncCheck(FPalInstanceID ID, FGuid Guid);
    
    UFUNCTION()
    void CreateIndividualID_ServerInternal(FPalIndividualCharacterSaveParameter InitParameter, FGuid Guid, int32 RequestPlayerId);
    
    UFUNCTION()
    void CreateFixedIndividualID_ServerInternal(FPalInstanceID ID, FPalIndividualCharacterSaveParameter InitParameter, FGuid Guid, int32 RequestPlayerId);
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastChangeOwnerCharacter_ToAll(FPalInstanceID ID, const FGuid& PlayerUId, FDateTime OwnedTime);
    
public:
    UFUNCTION(Reliable, Server)
    void AddHighPriorityList_ToServer(const FPalInstanceID& ID, APalCharacter* TargetPlayer);
    
};

