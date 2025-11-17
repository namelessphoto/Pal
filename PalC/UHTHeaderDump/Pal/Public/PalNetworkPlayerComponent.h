#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalBossType.h"
#include "EPalPlayerInventoryType.h"
#include "EPalPlayerReplicationEntityType.h"
#include "EPalStageRequestResult.h"
#include "PalBuildRequestDebugParameter.h"
#include "PalInstanceID.h"
#include "PalItemSlotId.h"
#include "PalNetArchive.h"
#include "PalPlayerDataEquipLanternData.h"
#include "PalPlayerSettingsForServer.h"
#include "PalStageExitParameter.h"
#include "PalStageInstanceId.h"
#include "PalUIBossDefeatRewardDisplayData.h"
#include "PalNetworkPlayerComponent.generated.h"

class APalCapturedCage;
class APalLevelObjectObtainable;
class APalTreasureMapInteractivePoint;
class UObject;
class UPalIndividualCharacterHandle;
class UPalItemContainer;
class UPalItemSlot;
class UPalLoadoutSelectorComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkPlayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkPlayerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ShowUnlockHardModeUI_ToClient();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ShowBossDefeatRewardUI_ToClient(const FPalUIBossDefeatRewardDisplayData& BossDefeatDisplayData, bool AfterTeleport, int32 DelayTime);
    
    UFUNCTION(Reliable, Server)
    void SetCurrentSelectPalSphereIndex_ToServer(int32 NextIndex, UPalLoadoutSelectorComponent* LoadoutSelector);
    
    UFUNCTION(Reliable, Server)
    void RequestUpdatePlayerSettingsForServer_ToServer(const FPalPlayerSettingsForServer& NewSettings);
    
    UFUNCTION(Reliable, Server)
    void RequestUnlockTechnology_ToServer(const FName& UnlockTechnologyName);
    
    UFUNCTION(Reliable, Server)
    void RequestUnlockFastTravelPoint_ToServer(const FName UnlockFlagKey);
    
    UFUNCTION(Reliable, Server)
    void RequestSortInventory_ToServer();
    
    UFUNCTION(Reliable, Server)
    void RequestSetReplicationEntity_ToServer(const EPalPlayerReplicationEntityType EntityType, const bool bReplicate);
    
private:
    UFUNCTION(Reliable, Server)
    void RequestPickupTreasureMapPoint_ToServer(const FGuid& TargetLevelInstanceId);
    
public:
    UFUNCTION(Reliable, Server)
    void RequestPalStorageReplicates_ToServer(const FPalInstanceID& IndividualId, const FName Key, const bool bReplicate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestPalStorageReplicates(const UObject* WorldContextObject, const FPalInstanceID& IndividualId, const FName Key, const bool bReplicate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestOpenEnemyCampCage(APalCapturedCage* TargetCage);
    
    UFUNCTION(Reliable, Server)
    void RequestObtainLevelObject_ToServer(APalLevelObjectObtainable* TargetObject);
    
    UFUNCTION(Reliable, Server)
    void RequestMoveItemToInventoryFromSlot(UPalItemSlot* fromSlot, bool IsTryEquip);
    
    UFUNCTION(Reliable, Server)
    void RequestMoveItemToInventoryFromContainer(UPalItemContainer* fromContainer, bool IsTryEquip);
    
    UFUNCTION(Reliable, Server)
    void RequestExitStage_ToServer(const FPalStageExitParameter Parameter);
    
    UFUNCTION(Reliable, Server)
    void RequestEnterStage_ToServer(const FPalStageInstanceId& StageInstanceId);
    
    UFUNCTION(Reliable, Server)
    void RequestDropOtomoPal_ToServer(const int32 OtomoIndex);
    
    UFUNCTION(Reliable, Server)
    void RequestChangeVoiceID_ToServer(int32 NewVoiceID);
    
    UFUNCTION(Reliable, Server)
    void RequestChangePlayerLanternSetting(const FPalPlayerDataEquipLanternData& NewLanternSettings);
    
    UFUNCTION(Reliable, Server)
    void RequestCancelSalvageAction_ToServer();
    
private:
    UFUNCTION(Reliable, Server)
    void RequestBuild_ToServer(const FName BuildObjectId, const FVector& Location, const FQuat& Rotation, const TArray<FPalNetArchive>& ExtraParameterArchives, FPalBuildRequestDebugParameter DebugParameter);
    
public:
    UFUNCTION(Reliable, Server)
    void RequestAddTechnolgyPointByItem_ToServer(const FPalItemSlotId& ConsumeItemSlotID);
    
private:
    UFUNCTION(Reliable, Server)
    void RequestAddRecord_NormalBossDefeatAll_ToServer();
    
    UFUNCTION(Reliable, Server)
    void RequestAddItem_ToServer(const FName StaticItemId, const int32 Count, bool IsAssignPassive);
    
public:
    UFUNCTION(Reliable, Server)
    void RequestAddBossTechnolgyPointByItem_ToServer(const FPalItemSlotId& ConsumeItemSlotID);
    
    UFUNCTION(Reliable, Server)
    void RegisterRespawnPoint_ToServer(const FGuid& PlayerUId, const FVector& Location, const FQuat& Rotation);
    
private:
    UFUNCTION(Client, Reliable)
    void ReceiveSuccessPickupTreasureMapPoint_ToClient(APalTreasureMapInteractivePoint* TargetInteractivePoint);
    
    UFUNCTION(Client, Reliable)
    void ReceiveExitStageRequestResult_ToRequestClient(const EPalStageRequestResult Result);
    
    UFUNCTION(Client, Reliable)
    void ReceiveEnterStageRequestResult_ToRequestClient(const FPalStageInstanceId& StageInstanceId, const EPalStageRequestResult Result);
    
public:
    UFUNCTION(Client, Reliable)
    void NotifyUnlockAchievement_ToClient(const FString& AchievementId);
    
    UFUNCTION(Client, Reliable)
    void NotifyStartCrime_ToClient(FGuid CrimeInstanceId);
    
    UFUNCTION(Client, Reliable)
    void NotifyReportCriminal_ToClient(UPalIndividualCharacterHandle* CriminalHandle, const TArray<FName>& CrimeIds);
    
    UFUNCTION(Client, Reliable)
    void NotifyReleaseWanted_ToClient(UPalIndividualCharacterHandle* CriminalHandle);
    
    UFUNCTION(Client, Reliable)
    void NotifyEndCrime_ToClient(FGuid CrimeInstanceId);
    
    UFUNCTION(Reliable, Server)
    void NotifyClientInitializedEssential_ToServer();
    
    UFUNCTION(Reliable, Server)
    void LoadoutSelectorRemoveEquipItem(UPalLoadoutSelectorComponent* LoadoutSelector);
    
    UFUNCTION(Reliable, Server)
    void LoadoutSelectorEquipItem(UPalLoadoutSelectorComponent* LoadoutSelector, EPalPlayerInventoryType inventoryType, int32 Index);
    
    UFUNCTION(Reliable, Server)
    void Dev_TeleportToRelativeLocationInStageLevel_ToServer(const FVector RelativeLocation);
    
    UFUNCTION(Reliable, Server)
    void Dev_SetOverridePlayerUID_ToServer(const FGuid& PlayerUId);
    
    UFUNCTION(Client, Reliable)
    void Dev_SetOverridePlayerUID_ToClient(const FGuid& PlayerUId);
    
    UFUNCTION(Reliable, Server)
    void Dev_SetEnablePlayerRespawnInHardcore(bool bEnable);
    
    UFUNCTION(Reliable, Server)
    void Dev_RequestTeleportToDungeonEntranceByIndex_ToServer(const int32 Index);
    
    UFUNCTION(Reliable, Server)
    void Dev_RequestTeleportToDungeonEntranceByDataLayer_ToServer(const FName DataLayerName);
    
    UFUNCTION(Reliable, Server)
    void Dev_RequestTeleportToCurrentDungeonTreasureBox_ToServer();
    
    UFUNCTION(Reliable, Server)
    void Dev_RequestTeleportToCurrentDungeonGoal_ToServer();
    
    UFUNCTION(Reliable, Server)
    void Dev_RequestTeleportToBossTower_ToServer(EPalBossType BossType);
    
    UFUNCTION(Reliable, Server)
    void Dev_RequestEnterPlayerGuildBaseCampBelongTo_ToServer(const FGuid& BaseCampId);
    
    UFUNCTION(Reliable, Server)
    void Dev_RequestEnterDungeonByDataLayer_ToServer(const FName DataLayerName);
    
    UFUNCTION(Reliable, Server)
    void Dev_ForceFoundNearestTreasureMapPoint_ToServer(const int32 Rarity);
    
};

