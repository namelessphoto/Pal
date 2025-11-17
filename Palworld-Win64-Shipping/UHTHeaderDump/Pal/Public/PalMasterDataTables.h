#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalLocalizeTextCategory.h"
#include "PalTechnologyDataSet.h"
#include "PalMasterDataTables.generated.h"

class UDataTable;
class UPalAchivementRewardDataAsset;
class UPalCircumRequestDataAsset;
class UPalDisplayRequestDataAsset;
class UPalMasterDataTableAccess_BaseCampLevelData;
class UPalMasterDataTableAccess_BossSpawnerUIData;
class UPalMasterDataTableAccess_BuildObjectData;
class UPalMasterDataTableAccess_BuildObjectIconData;
class UPalMasterDataTableAccess_CharacterTeamMission;
class UPalMasterDataTableAccess_CharacterTeamMissionChallengeCondition;
class UPalMasterDataTableAccess_CharacterUpgradeData;
class UPalMasterDataTableAccess_DungeonEnemySpawnerData;
class UPalMasterDataTableAccess_DungeonItemLotteryData;
class UPalMasterDataTableAccess_DungeonLevelData;
class UPalMasterDataTableAccess_DungeonRewardSpawnerLotteryData;
class UPalMasterDataTableAccess_DungeonSpawnAreaData;
class UPalMasterDataTableAccess_FarmCropData;
class UPalMasterDataTableAccess_FarmSkillFruitsLotteryData;
class UPalMasterDataTableAccess_FieldLotteryNameData;
class UPalMasterDataTableAccess_FishPondLotteryData;
class UPalMasterDataTableAccess_FishPondLotteryNameData;
class UPalMasterDataTableAccess_FishShadowData;
class UPalMasterDataTableAccess_FishingSpotLotteryData;
class UPalMasterDataTableAccess_FishingSpotLotteryNameData;
class UPalMasterDataTableAccess_ItemLotteryData;
class UPalMasterDataTableAccess_ItemProductData;
class UPalMasterDataTableAccess_ItemRecipe;
class UPalMasterDataTableAccess_ItemShop;
class UPalMasterDataTableAccess_ItemShopLottery;
class UPalMasterDataTableAccess_LabResearch;
class UPalMasterDataTableAccess_LocalizeText;
class UPalMasterDataTableAccess_MapObjectLotteryData;
class UPalMasterDataTableAccess_MapObjectMasterData;
class UPalMasterDataTableAccess_MapObjectSpawnerBlueprintData;
class UPalMasterDataTableAccess_NPCEmoteLotteryData;
class UPalMasterDataTableAccess_OperatingTablePassiveSkillData;
class UPalMasterDataTableAccess_PalRandomizerData;
class UPalMasterDataTableAccess_PalShop;
class UPalMasterDataTableAccess_PlayerStatusRankData;
class UPalMasterDataTableAccess_SpawnerPlacementData;
class UPalMasterDataTableAccess_UIInputActionData;
class UPalMasterDataTableAccess_WildSpawnerData;
class UPalMasterDataTableAccess_WorldMapAreaData;
class UPalNoteDataAsset;

UCLASS(BlueprintType)
class UPalMasterDataTables : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* WildSpawnerDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_WildSpawnerData* Access_WildSpawnerDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ItemRecipeDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_ItemRecipe* Access_ItemRecipeDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* FarmCropDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_FarmCropData* Access_FarmCropDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* MapObjectDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_MapObjectMasterData* Access_MapObjectDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* MapObjectLotteryDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_MapObjectLotteryData* Access_MapObjectLotteryDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* BuildObjectDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_BuildObjectData* Access_BuildObjectDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* BuildObjectIconDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_BuildObjectIconData* Access_BuildObjectIconDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* MapObjectSpawnerDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_MapObjectSpawnerBlueprintData* Access_MapObjectSpawnerDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ItemProductDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_ItemProductData* Access_ItemProductDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* BaseCampLevelDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_BaseCampLevelData* Access_BaseCampLevelDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* DungeonSpawnAreaDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_DungeonSpawnAreaData* Access_DungeonSpawnAreaDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* DungeonLevelDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_DungeonLevelData* Access_DungeonLevelDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* DungeonEnemySpawnerDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_DungeonEnemySpawnerData* Access_DungeonEnemySpawnerDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* DungeonItemLotteryDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_DungeonItemLotteryData* Access_DungeonItemLotteryDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* DungeonRewardSpawnerLotteryDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_DungeonRewardSpawnerLotteryData* Access_DungeonRewardSpawnerLotteryDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* FieldLotteryNameDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_FieldLotteryNameData* Access_FieldLotteryNameDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ItemLotteryDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_ItemLotteryData* Access_ItemLotteryDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* EmoteNPCLotteryDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_NPCEmoteLotteryData* Access_EmoteNPCLotteryDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* PlayerStatusRankDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_PlayerStatusRankData* Access_PlayerStatusRankDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* CharacterUpgradeDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_CharacterUpgradeData* Access_CharacterUpgradeDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UPalNoteDataAsset* NoteDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UPalNoteDataAsset* HelpGuideDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UPalAchivementRewardDataAsset* AchivementRewardDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UPalCircumRequestDataAsset* ItemRequestNPCDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UPalDisplayRequestDataAsset* PalDisplayNPCDataAsset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalLocalizeTextCategory, UDataTable*> LocalizeTextDataTableMap;
    
    UPROPERTY(Transient)
    TMap<EPalLocalizeTextCategory, UPalMasterDataTableAccess_LocalizeText*> Access_LocalizeTextDataTables;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* UIInputActionDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_UIInputActionData* Access_UIInputActionDataTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalTechnologyDataSet technologyDataSet;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* worldMapDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ItemShopLotteryDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_ItemShopLottery* Access_ItemShopLotteryDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ItemShopDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_ItemShop* Access_ItemShopDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* PalShopDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_PalShop* Access_PalShopDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* SpawnerPlacementDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_SpawnerPlacementData* Access_SpawnerPlacementDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* PalRandomizerDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_PalRandomizerData* Access_PalRandomizerDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* CharacterTeamMissionDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_CharacterTeamMission* Access_CharacterTeamMissionDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* CharacterTeamMissionChallengeConditionDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_CharacterTeamMissionChallengeCondition* Access_CharacterTeamMissionChallengeConditionDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* LabResearchDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_LabResearch* Access_LabResearchDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* WorldMapAreaDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_WorldMapAreaData* Access_WorldMapAreaDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* BossSpawnerUIDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_BossSpawnerUIData* Access_BossSpawnerUIDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* FarmSkillFruitsLotteryDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_FarmSkillFruitsLotteryData* Access_FarmSkillFruitsLotteryDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* FishShadowDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_FishShadowData* Access_FishShadowDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* FishingSpotLotteryNameDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_FishingSpotLotteryNameData* Access_FishingSpotLotteryNameDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* FishingSpotLotteryDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_FishingSpotLotteryData* Access_FishingSpotLotteryDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* FishPondLotteryNameDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_FishPondLotteryNameData* Access_FishPondLotteryNameDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* FishPondLotteryDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_FishPondLotteryData* Access_FishPondLotteryDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* OperatingTablePassiveSkillDataTable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalMasterDataTableAccess_OperatingTablePassiveSkillData* Access_OperatingTablePassiveSkillDataTable;
    
public:
    UPalMasterDataTables();

};

