#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalSupplyType.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalOnSupplyEventDelegate.h"
#include "PalOptionWorldSettings.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalSupplyManager.generated.h"

class APalRandomIncidentSpawnerBase;
class APalSupplyDropActor;
class UPalSupplySpawnerData;

UCLASS(BlueprintType)
class PAL_API UPalSupplyManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPalOnSupplyEvent OnSupplyStartDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPalOnSupplyEvent OnSupplyEndedDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LotteryRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalSupplyType, float> SupplyTypeLotteryRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDebugFullRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalSupplyType DebugSupplyType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 SpawnPalSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 SpawnNPCSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SpawnDistanceLimit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BroadcastLogDistanceLimit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 LotteryCoolDownSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 SupplyTotalFallSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 SupplyDespawnSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<APalSupplyDropActor> SupplyCapsuleDropClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<APalSupplyDropActor> SupplyMeteorDropClass;
    
public:
    UPalSupplyManager();

private:
    UFUNCTION()
    void OnChangeWorldSettings(const FPalOptionWorldSettings& PrevSettings, const FPalOptionWorldSettings& NewSettings);
    
public:
    UFUNCTION(BlueprintPure)
    UPalSupplySpawnerData* GetSupplySpawnerFromIncidentSpawner(APalRandomIncidentSpawnerBase* IncidentSpawner) const;
    
    UFUNCTION(BlueprintPure)
    UPalSupplySpawnerData* GetSupplySpawnerDataFromID(FGuid ID) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UPalSupplySpawnerData*> GetSupplySpawnerData() const;
    
    UFUNCTION(BlueprintPure)
    UPalSupplySpawnerData* GetSupplySpawnerByIncidentSpawner(APalRandomIncidentSpawnerBase* SpawnerBase, bool bIsPalSpawner) const;
    
    UFUNCTION(BlueprintCallable)
    APalRandomIncidentSpawnerBase* GetIncidentSpawnerByID(FGuid ID, bool bPalSpawner);
    
    UFUNCTION(BlueprintCallable)
    APalRandomIncidentSpawnerBase* GetIncidentSpawner(UPalSupplySpawnerData* InSpawner, bool bPalSpawner);
    
    UFUNCTION(BlueprintCallable)
    UPalSupplySpawnerData* CreateSupplySpawnerData();
    
    UFUNCTION(BlueprintCallable)
    void CompleteIncident(bool bIsPalSpawner, APalRandomIncidentSpawnerBase* SpawnerBase);
    

    // Fix for true pure virtual functions not being implemented
};

