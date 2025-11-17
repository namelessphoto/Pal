#pragma once
#include "CoreMinimal.h"
#include "EPalCharacterCompleteDelegatePriority.h"
#include "NetworkActorSpawnParameters.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalInstanceID.h"
#include "PalOnCharacterCompleteInitializeParameterDelegate.h"
#include "PalSystemInitializeInterface.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalCharacterManager.generated.h"

class UPalActionBase;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterHandleReference;
class UPalIndividualCharacterParameter;

UCLASS(BlueprintType)
class UPalCharacterManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface, public IPalSystemInitializeInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FIndividualPhantomIDCallback, FPalInstanceID, ID, int32, PhantomId);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FIndividualIDCallback, FPalInstanceID, ID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterParameterAddedDelegate, FPalInstanceID, InstanceId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterHandleDelegate, UPalIndividualCharacterHandle*, CharacterHandle);
    
    UPROPERTY(BlueprintAssignable)
    FCharacterParameterAddedDelegate OnIndividualParameterSynced;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalActionBase> AttackNearBaseClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalActionBase> AttackFarBaseClass;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FPalInstanceID, UPalIndividualCharacterParameter*> IndividualParameterMap;
    
    UPROPERTY(Transient)
    TMap<FPalInstanceID, TWeakObjectPtr<UPalIndividualCharacterHandle>> WeakIndividualHandleMap;
    
    UPROPERTY(Transient)
    TArray<UPalIndividualCharacterHandle*> InitializeWaitingHandles;
    
    UPROPERTY(Transient)
    TArray<UPalIndividualCharacterHandle*> NoHoldHandles;
    
    UPROPERTY(Transient)
    TMap<FPalInstanceID, UPalIndividualCharacterHandleReference*> CachedRefenrenceOnlyHandles;
    
    UPROPERTY(Transient)
    TArray<UPalIndividualCharacterHandle*> CreatingHandles;
    
    UPROPERTY(Transient)
    TArray<UPalIndividualCharacterHandle*> SpawningActorHandles;
    
    UPROPERTY(Transient)
    TArray<UPalIndividualCharacterHandle*> ReserveDestroyActorHandles;
    
    UPROPERTY(Transient)
    TArray<UPalIndividualCharacterParameter*> CachedIndividualParameterList;
    
    UPROPERTY(Transient)
    TSet<FPalInstanceID> LoadedCharacterIDs;
    
    UPROPERTY(Transient)
    TSet<FPalInstanceID> InLockerCharacterIDs;
    
public:
    UPalCharacterManager();

    UFUNCTION(BlueprintCallable)
    void SpawnPhantomByHandle(UPalIndividualCharacterHandle* Handle, FNetworkActorSpawnParameters SpawnParameter, UPalCharacterManager::FIndividualPhantomIDCallback spawnCallback);
    
    UFUNCTION(BlueprintCallable)
    UPalIndividualCharacterHandle* SpawnNewCharacterWithInitializeParameterCallback(FPalIndividualCharacterSaveParameter InitParameter, FNetworkActorSpawnParameters SpawnParameter, EPalCharacterCompleteDelegatePriority InitializeParameterCallbackPriority, FPalOnCharacterCompleteInitializeParameter InitializeParameterCallback, UPalCharacterManager::FIndividualIDCallback spawnCallback);
    
    UFUNCTION(BlueprintCallable)
    UPalIndividualCharacterHandle* SpawnNewCharacter(FPalIndividualCharacterSaveParameter InitParameter, FNetworkActorSpawnParameters SpawnParameter, UPalCharacterManager::FIndividualIDCallback spawnCallback);
    
    UFUNCTION(BlueprintCallable)
    void SpawnCharacterByHandleWithInitializeParameterCallback(UPalIndividualCharacterHandle* Handle, FNetworkActorSpawnParameters SpawnParameter, EPalCharacterCompleteDelegatePriority InitializeParameterCallbackPriority, FPalOnCharacterCompleteInitializeParameter InitializeParameterCallback, UPalCharacterManager::FIndividualIDCallback spawnCallback);
    
    UFUNCTION(BlueprintCallable)
    void SpawnCharacterByHandle(UPalIndividualCharacterHandle* Handle, FNetworkActorSpawnParameters SpawnParameter, UPalCharacterManager::FIndividualIDCallback spawnCallback);
    
    UFUNCTION(BlueprintCallable)
    void RaiseToMainActor(UPalIndividualCharacterHandle* Handle, int32 PhantomId, UPalCharacterManager::FIndividualPhantomIDCallback Callback);
    
private:
    UFUNCTION()
    void OnCreateIndividualID(FPalInstanceID ID);
    
    UFUNCTION()
    void OnChangeIndividualID_ClientInternal(FPalInstanceID ID, UPalIndividualCharacterParameter* Parameter);
    
public:
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterHandleReference* GetIndividualHandleReference(FPalInstanceID ID);
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterHandle* GetIndividualHandleFromCharacterParameter(UPalIndividualCharacterParameter* Parameter);
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterHandle* GetIndividualHandle(FPalInstanceID ID);
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterParameter* GetIndividualCharacterParameter(const FPalInstanceID& IndividualId) const;
    
    UFUNCTION(BlueprintCallable)
    void DespawnPhantomByHandle(UPalIndividualCharacterHandle* Handle, int32 PhantomId, UPalCharacterManager::FIndividualPhantomIDCallback spawnCallback);
    
    UFUNCTION(BlueprintCallable)
    void DespawnCharacterByHandle(UPalIndividualCharacterHandle* Handle, UPalCharacterManager::FIndividualIDCallback spawnCallback);
    
    UFUNCTION(BlueprintCallable)
    UPalIndividualCharacterHandle* CreateIndividualByFixedID(FPalInstanceID ID, FPalIndividualCharacterSaveParameter InitParameter, UPalCharacterManager::FIndividualIDCallback spawnCallback);
    
    UFUNCTION(BlueprintCallable)
    UPalIndividualCharacterHandle* CreateIndividual(FPalIndividualCharacterSaveParameter InitParameter, UPalCharacterManager::FIndividualIDCallback spawnCallback);
    

    // Fix for true pure virtual functions not being implemented
};

