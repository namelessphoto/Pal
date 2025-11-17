#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "EPalBattleBGMType.h"
#include "EPalElementType.h"
#include "EPalGenusCategoryType.h"
#include "EPalMapObjectMaterialSubType.h"
#include "EPalOrganizationType.h"
#include "EPalSizeType.h"
#include "EPalTribeID.h"
#include "EPalWeaponType.h"
#include "EPalWorkSuitability.h"
#include "PalDropItemDatabaseRow.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalSizeParameterDataRow.h"
#include "PalTalentUpItemDataRow.h"
#include "PalWorkSuitabilityInfo.h"
#include "Templates/SubclassOf.h"
#include "PalDatabaseCharacterParameter.generated.h"

class APalCharacter;
class UDataTable;
class UPalAIResponsePreset;
class UPalAISightResponsePreset;
class UPalCombiMonsterParameter;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;
class UPalPettingPresset;
class UTexture2D;

UCLASS(BlueprintType)
class PAL_API UPalDatabaseCharacterParameter : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, TSubclassOf<UPalAIResponsePreset>> AIResponsePresetMap;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, TSubclassOf<UPalAISightResponsePreset>> AISightResponsePresetMap;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalPettingPresset> PettingPressetClass;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* PlayerParameterDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* MonsterParameterDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* HumanParameterDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* DropItemDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* MonsterNameDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* HumanNameDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* CharacterIconDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* CharacterSkinIconDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* BPClassDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* PartnerSkillDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* PalSizeParameterDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* PalCapturedCageDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* PalStatusEffectFoodDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* PalGainStatusPointsItemDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* PalCombiUniqueDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* PalTalentUpItemDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* NPCOtomoWazaDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* NPCBossIconDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* PalGainWorkSuitabilityRankItemDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* FriendshipRankTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ArenaRankingNPCIconDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ArenaUnusableItemDataTable;
    
private:
    UPROPERTY(Transient)
    TArray<float> TalentMagnificationList;
    
    UPROPERTY(Transient)
    UPalPettingPresset* PettingPressetInstance;
    
    UPROPERTY(Transient)
    UPalCombiMonsterParameter* CombiMonsterParameter;
    
public:
    UPalDatabaseCharacterParameter();

    UFUNCTION(BlueprintCallable)
    void UpdateApplyDatabaseToIndividualParameter(UPalIndividualCharacterParameter* IndividualParameter);
    
    UFUNCTION(BlueprintCallable)
    bool SetupSaveParameter(const FName CharacterID, const int32 Level, const FGuid& OwnerPlayerUId, FPalIndividualCharacterSaveParameter& outParameter);
    
    UFUNCTION(BlueprintPure)
    bool IsArenaUnusableItem(FName ItemId) const;
    
    UFUNCTION(BlueprintPure)
    int32 HigherLevelOtomoFromTrainer(const UPalIndividualCharacterParameter* IndividualCharacterParameter) const;
    
    UFUNCTION(BlueprintPure)
    void GetWorkSuitabilityRank(FName RowName, TMap<EPalWorkSuitability, int32>& WorkSuitabilities);
    
    UFUNCTION(BlueprintPure)
    void GetWorkSuitabilityMaterialSubTypes(FName RowName, TArray<EPalMapObjectMaterialSubType>& MaterialSubTypes);
    
    UFUNCTION(BlueprintPure)
    void GetWorkSuitability(FName RowName, TArray<EPalWorkSuitability>& WorkSuitabilities);
    
    UFUNCTION(BlueprintPure)
    EPalWeaponType GetWeaponType(FName RowName);
    
    UFUNCTION(BlueprintPure)
    bool GetWeaponEquip(FName RowName);
    
    UFUNCTION(BlueprintPure)
    int32 GetViewingDistance_cm(FName RowName);
    
    UFUNCTION(BlueprintPure)
    int32 GetViewingAngle_Degree(FName RowName);
    
    UFUNCTION(BlueprintPure)
    bool GetUseBossHPGauge(FName RowName);
    
    UFUNCTION(BlueprintPure)
    EPalTribeID GetTribe(FName RowName);
    
    UFUNCTION(BlueprintPure)
    int32 GetSupportBySaveParameter(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintPure)
    int32 GetSupport(UPalIndividualCharacterParameter* IndividualParameter);
    
    UFUNCTION(BlueprintPure)
    EPalSizeType GetSize(FName RowName);
    
    UFUNCTION(BlueprintPure)
    int32 GetShotAttackBySaveParameter(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintPure)
    int32 GetShotAttack(const UPalIndividualCharacterParameter* IndividualParameter) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRarity(FName RowName);
    
    UFUNCTION(BlueprintPure)
    float GetPriceRate(FName RowName);
    
    UFUNCTION(BlueprintPure)
    void GetPrefixNameMsgID(const FName& CharacterID, FName& OutMsgID);
    
    UFUNCTION(BlueprintPure)
    UPalPettingPresset* GetPettingPreset();
    
    UFUNCTION(BlueprintPure)
    void GetPassiveSkill(FName RowName, TArray<FName>& PassiveSkill);
    
    UFUNCTION(BlueprintPure)
    void GetPartnerSkillMsgID(const FName& CharacterID, FName& OutMsgID);
    
    UFUNCTION(BlueprintPure)
    EPalOrganizationType GetOrganizationType(FName RowName);
    
    UFUNCTION(BlueprintPure)
    bool GetNocturnal(FName RowName);
    
    UFUNCTION(BlueprintPure)
    int32 GetMinFriendshipRank() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMeleeAttackBySaveParameter(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintPure)
    int32 GetMeleeAttack(UPalIndividualCharacterParameter* IndividualParameter);
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxFriendshipRank() const;
    
    UFUNCTION(BlueprintPure)
    void GetLocalizedUniqueNPCName(const FName& UniqueNPCID, FText& OutText);
    
    UFUNCTION(BlueprintPure)
    void GetLocalizedCharacterName(const FName& CharacterID, FText& OutText);
    
    UFUNCTION(BlueprintPure)
    bool GetIsTowerBoss(FName RowName);
    
    UFUNCTION(BlueprintPure)
    bool GetIsRaidBoss(FName RowName);
    
    UFUNCTION(BlueprintPure)
    bool GetIsPredatorBoss(FName RowName);
    
    UFUNCTION(BlueprintPure)
    bool GetIsPal(FName RowName);
    
    UFUNCTION(BlueprintPure)
    bool GetIsLegend(FName RowName) const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsBoss(FName RowName) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHPBySaveParameter(const FPalIndividualCharacterSaveParameter& SaveParameter) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHP(const UPalIndividualCharacterParameter* IndividualParameter) const;
    
    UFUNCTION(BlueprintPure)
    float GetHearingRate(FName RowName);
    
    UFUNCTION(BlueprintPure)
    EPalGenusCategoryType GetGenusCategory(FName RowName);
    
    UFUNCTION(BlueprintPure)
    bool GetFriendshipRequiredPointByRank(int32 FriendshipRank, int32& OutRequiredPoint) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFriendshipRank(int32 FriendshipPoint) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFoodAmount(FName RowName);
    
    UFUNCTION(BlueprintPure)
    FName GetFirstDefeatRewardItemID(const FName& CharacterID) const;
    
    UFUNCTION(BlueprintPure)
    float GetExpRatio(FName RowName);
    
    UFUNCTION(BlueprintPure)
    void GetElementType(FName RowName, EPalElementType& Element1, EPalElementType& Element2) const;
    
    UFUNCTION(BlueprintPure)
    bool GetDropItemData(const FName& CharacterID, const int32 Level, FPalDropItemDatabaseRow& OutData);
    
    UFUNCTION(BlueprintPure)
    int32 GetDefenseBySaveParameter(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintPure)
    int32 GetDefense(const UPalIndividualCharacterParameter* IndividualParameter) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FPalWorkSuitabilityInfo> GetCraftSpeeds(UPalIndividualCharacterParameter* IndividualParameter);
    
    UFUNCTION(BlueprintPure)
    int32 GetCraftSpeedBySaveParameter(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
    UFUNCTION(BlueprintPure)
    int32 GetCraftSpeed(const UPalIndividualCharacterParameter* IndividualParameter) const;
    
    UFUNCTION(BlueprintPure)
    FSoftObjectPath GetCharacterIconTexturePath(const FName CharacterID) const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetCharacterIconTextureBySkinName(const FName& SkinName) const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetCharacterIconTextureByIndividualHandle(const UPalIndividualCharacterHandle* IndividualHandle) const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetCharacterIconTexture(const FName CharacterID) const;
    
    UFUNCTION(BlueprintPure)
    float GetCaptureRateCorrect(FName RowName);
    
    UFUNCTION(BlueprintPure)
    FName GetBPClassName(FName RowName);
    
    UFUNCTION(BlueprintPure)
    TSoftClassPtr<APalCharacter> GetBPClass(FName RowName, bool ShowError);
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetBossNPCIconTexture(const FName& SpawnerID) const;
    
    UFUNCTION(BlueprintPure)
    EPalBattleBGMType GetBattleBGM(FName RowName);
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetArenaRankingNPCIcon(const FName& RankingNPCId) const;
    
    UFUNCTION(BlueprintPure)
    bool FindTalentUpItem(FName ItemName, FPalTalentUpItemDataRow& OutData) const;
    
    UFUNCTION(BlueprintPure)
    bool FindPalSizeParameter(EPalSizeType CharacterSize, FPalSizeParameterDataRow& RowData) const;
    
    UFUNCTION(BlueprintPure)
    float CalcFriendshipProgress(int32 FriendshipPoint) const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    int32 CalcCorrectedLevel(const int32 TrainerLevel, const int32 TargetCharacterLevel, const UObject* WorldContextObject) const;
    
};

