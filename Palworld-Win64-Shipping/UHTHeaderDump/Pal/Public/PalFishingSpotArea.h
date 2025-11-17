#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "PalDataTableRowName_FishingSpotLotteryNameData.h"
#include "PalFishSpawnPointData.h"
#include "PalGrantCharacterRequestData.h"
#include "PalInstanceID.h"
#include "PalLevelObjectActor.h"
#include "PalNetArchive.h"
#include "PalSpawnedFishShadowData.h"
#include "PalFishingSpotArea.generated.h"

class APalFishShadow;
class UPalIndividualCharacterHandle;

UCLASS()
class PAL_API APalFishingSpotArea : public APalLevelObjectActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDespawnFishShadowDelegate, int32, RemainFishCount);
    
    UPROPERTY(BlueprintAssignable)
    FDespawnFishShadowDelegate OnDespawnFishShadowDelegate;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 FishShadowNum;
    
    UPROPERTY(EditDefaultsOnly)
    float FishShadowRespawnTime;
    
    UPROPERTY(EditDefaultsOnly)
    float EscapeDestroyTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FComponentReference SpotAreaVolumeRef;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FComponentReference> FishShadowSpawnPointRefArray;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_FishingSpotLotteryNameData SpotLotteryName;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<APalFishShadow*> FishShadowList;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_SpawnedFishShadowDataArray)
    TArray<FPalSpawnedFishShadowData> SpawnedFishShadowDataArray;
    
    UPROPERTY(Transient)
    TArray<FPalSpawnedFishShadowData> SpawnedFishShadowDataArrayMirror;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalFishSpawnPointData> FishShadowSpawnPointDataArray;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FTimerHandle ChangeDayTimeRespawnTimerHandle;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid SpotAreaId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<UPalIndividualCharacterHandle*, FPalGrantCharacterRequestData> CreatedIndividualHandleMap;
    
public:
    APalFishingSpotArea(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnFish();
    
private:
    UFUNCTION()
    void OnRep_SpawnedFishShadowDataArray();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnEmptySpot();
    
private:
    UFUNCTION()
    void OnCreatedIndividualHandle_ServerInternal(FPalInstanceID IndividualId);
    
    UFUNCTION()
    void OnChangeDayTime();
    
public:
    UFUNCTION(Reliable, Server)
    void ObtainCatchCharacter_ServerInternal(const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintPure)
    bool IsEmptyFishShadow() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EscapeAllFishShadow();
    
};

