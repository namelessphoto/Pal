#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalFishShadowSizeType.h"
#include "EPalFishingPlayerMotionType.h"
#include "EPalFishingResultType.h"
#include "EPalSizeType.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalFishShadowRareInfo.h"
#include "PalFishingCatchBattleParameter.h"
#include "PalFishingSpotSaveData.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalGrantCharacterRequestData.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalFishingSystem.generated.h"

class APalCutsceneActor;
class APalFishingSpotArea;
class UDataTable;
class UNiagaraSystem;
class UPalFishingCatchBattle;
class UPalFishingSpotAreaModel;

UCLASS(Blueprintable)
class PAL_API UPalFishingSystem : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRecievedFishingSearchResultDelegate, const EPalFishingResultType, resultType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRecievedFishingBattleResultDelegate, const EPalFishingResultType, resultType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnObtainCharacterDelegate, const FPalGrantCharacterRequestData, RequestData);
    
    UPROPERTY(BlueprintAssignable)
    FRecievedFishingSearchResultDelegate OnReceivedSearchResultDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FRecievedFishingBattleResultDelegate OnReceivedBattleResultDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnObtainCharacterDelegate OnReceivedCreatedCharacterDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalFishingCatchBattleParameter CatchBattleParameter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalFishShadowSizeType, float> FishShadowSizeScaleMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UNiagaraSystem* RarePalEffect;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UNiagaraSystem* RarePassiveEffect;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalFishShadowRareInfo> OverrideRarePassiveEffectInfos;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalSizeType, TSoftClassPtr<APalCutsceneActor>> FishingSuccessCutsceneMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_PassiveSkillData KingPassiveSkillId;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UPalFishingCatchBattle> CatchBattleBlueprintClass;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* BaitItemDataTable;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, UPalFishingCatchBattle*> CatchBattleMapByPlayerId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<APalFishingSpotArea*> FishingSpotArray;
    
    UPROPERTY()
    TMap<FGuid, UPalFishingSpotAreaModel*> SpotModels;
    
    UPROPERTY()
    TMap<FGuid, FPalFishingSpotSaveData> FishingSpotSaveDataMapCache;
    
public:
    UPalFishingSystem();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeForServer_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialize_BP();
    
    UFUNCTION(BlueprintPure)
    float GetFishShadowSizeScale(EPalFishShadowSizeType SizeType) const;
    
    UFUNCTION(BlueprintPure)
    static EPalFishingPlayerMotionType GetFishingPlayerMotionType(const EPalSizeType SizeType);
    
    UFUNCTION(BlueprintPure)
    UPalFishingCatchBattle* GetCatchBattle(const FGuid& PlayerUId) const;
    

    // Fix for true pure virtual functions not being implemented
};

