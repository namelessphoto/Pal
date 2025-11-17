#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "PalDefine.generated.h"

UCLASS(BlueprintType)
class UPalDefine : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalDefine();

    UFUNCTION(BlueprintPure)
    static FGameplayTag UILayerTag_Modal();
    
    UFUNCTION(BlueprintPure)
    static FGameplayTag UILayerTag_Menu();
    
    UFUNCTION(BlueprintPure)
    static FGameplayTag UILayerTag_GameMenu7();
    
    UFUNCTION(BlueprintPure)
    static FGameplayTag UILayerTag_GameMenu6();
    
    UFUNCTION(BlueprintPure)
    static FGameplayTag UILayerTag_GameMenu5();
    
    UFUNCTION(BlueprintPure)
    static FGameplayTag UILayerTag_GameMenu4();
    
    UFUNCTION(BlueprintPure)
    static FGameplayTag UILayerTag_GameMenu3();
    
    UFUNCTION(BlueprintPure)
    static FGameplayTag UILayerTag_GameMenu2();
    
    UFUNCTION(BlueprintPure)
    static FGameplayTag UILayerTag_GameMenu();
    
    UFUNCTION(BlueprintPure)
    static FGameplayTag UILayerTag_Game();
    
    UFUNCTION(BlueprintPure)
    static FName TribeIDName_Human();
    
    UFUNCTION(BlueprintPure)
    static FName TextId_UICommon_SystemMessageUnlockFastTravel();
    
    UFUNCTION(BlueprintPure)
    static FName TextId_UICommon_SystemErrorCantMoveNotOwned();
    
    UFUNCTION(BlueprintPure)
    static FName TextId_UICommon_RewardFishPondTitle();
    
    UFUNCTION(BlueprintPure)
    static FName TextId_UICommon_RewardFishPondInfo();
    
    UFUNCTION(BlueprintPure)
    static FName TextId_UICommon_LOG_NeedItemToOpenTreasureBox();
    
    UFUNCTION(BlueprintPure)
    static FName TextId_UICommon_LOG_ConsumeItem();
    
    UFUNCTION(BlueprintPure)
    static FName TextId_UICommon_InteractIndicator_Salvage_NotSwimPal();
    
    UFUNCTION(BlueprintPure)
    static FName TextId_UICommon_InteractIndicator_Salvage_NotAvailable_NotConsume();
    
    UFUNCTION(BlueprintPure)
    static FName TextId_UICommon_InteractIndicator_Salvage_NotAvailable();
    
    UFUNCTION(BlueprintPure)
    static FName TextId_UICommon_InteractIndicator_OtomoOpen();
    
    UFUNCTION(BlueprintPure)
    static FName TextId_UICommon_InteractIndicator_ObtainLongHold_Salvage_NotConsume();
    
    UFUNCTION(BlueprintPure)
    static FName TextId_UICommon_InteractIndicator_ObtainLongHold_Salvage();
    
    UFUNCTION(BlueprintPure)
    static FName TextId_UICommon_InteractIndicator_ObtainLongHold_ConsumeAndOpen();
    
    UFUNCTION(BlueprintPure)
    static FName TextId_UICommon_InteractIndicator_ObtainLongHold();
    
    UFUNCTION(BlueprintPure)
    static FName TextId_UICommon_InteractIndicator_LockedPrivateByNotLocalPlayer();
    
    UFUNCTION(BlueprintPure)
    static FName TextId_UICommon_InteractIndicator_LockedElementalTreasure();
    
    UFUNCTION(BlueprintPure)
    static FName TextId_UICommon_InteractIndicator_InputPassword_CannotTry();
    
    UFUNCTION(BlueprintPure)
    static FName TextId_UICommon_InteractIndicator_ConsumeAndOpen();
    
    UFUNCTION(BlueprintPure)
    static FName TextId_UICommon_InteractIndicator_CannotSelectFishPondTarget_ExistsFishedCharacters();
    
    UFUNCTION(BlueprintPure)
    static FName TextId_UICommon_INFINITE();
    
    UFUNCTION(BlueprintPure)
    static FName TextId_UICommon_FailedFishPondObtainCharacter();
    
    UFUNCTION(BlueprintPure)
    static FName TextId_UICommon_DISMANTLING_FAILED_PALBOX();
    
    UFUNCTION(BlueprintPure)
    static FName TextId_UICommon_DISMANTLING_CONFIRM_PALBOX();
    
    UFUNCTION(BlueprintPure)
    static FName TextId_UICommon_ConfirmLockCheckPrivate();
    
    UFUNCTION(BlueprintPure)
    static FName TextId_UICommon_CONFIRM_DUNGEON_EXIT();
    
    UFUNCTION(BlueprintPure)
    static FName TextId_UICommon_CONFIRM_DUNGEON_ENTER();
    
    UFUNCTION(BlueprintPure)
    static FName StatusPointName_AddWorkSpeed();
    
    UFUNCTION(BlueprintPure)
    static FName StatusPointName_AddPower();
    
    UFUNCTION(BlueprintPure)
    static FName StatusPointName_AddMaxSP();
    
    UFUNCTION(BlueprintPure)
    static FName StatusPointName_AddMaxInventoryWeight();
    
    UFUNCTION(BlueprintPure)
    static FName StatusPointName_AddMaxHP();
    
    UFUNCTION(BlueprintPure)
    static FName StatusPointName_AddCaptureLevel();
    
    UFUNCTION(BlueprintPure)
    static TArray<FName> StaticItemIDArray_UnlockPicking();
    
    UFUNCTION(BlueprintPure)
    static FName StaticItemID_UnlockTalentCheck();
    
    UFUNCTION(BlueprintPure)
    static FName StaticItemID_UnlockAutoMeal_Tier(int32 Num);
    
    UFUNCTION(BlueprintPure)
    static FName StaticItemID_UnlockAccessorySlot_02();
    
    UFUNCTION(BlueprintPure)
    static FName StaticItemID_UnlockAccessorySlot_01();
    
    UFUNCTION(BlueprintPure)
    static FName StaticItemID_Money();
    
    UFUNCTION(BlueprintPure)
    static FName StaticItemID_ButcheringImportedPal();
    
    UFUNCTION(BlueprintPure)
    static FName Socket_Mouth();
    
    UFUNCTION(BlueprintPure)
    static FName Socket_JumpEffect();
    
    UFUNCTION(BlueprintPure)
    static FName Socket_EquipWeapon3();
    
    UFUNCTION(BlueprintPure)
    static FName Socket_EquipWeapon2();
    
    UFUNCTION(BlueprintPure)
    static FName Socket_EquipWeapon1();
    
    UFUNCTION(BlueprintPure)
    static FName Socket_BulletMuzzle();
    
    UFUNCTION(BlueprintPure)
    static FName Socket_BodyCenter();
    
    UFUNCTION(BlueprintPure)
    static FName Socket_AimTarget();
    
    UFUNCTION(BlueprintPure)
    static FName NP_PlayerCenterPosition();
    
    UFUNCTION(BlueprintPure)
    static FName MS_HumanHeadName();
    
    UFUNCTION(BlueprintPure)
    static FName MS_HumanHairName();
    
    UFUNCTION(BlueprintPure)
    static FName MS_HumanEyeName();
    
    UFUNCTION(BlueprintPure)
    static FName MS_HumanClothName();
    
    UFUNCTION(BlueprintPure)
    static FName MS_HumanBrowName();
    
    UFUNCTION(BlueprintPure)
    static FName MS_HumanBodyName();
    
    UFUNCTION(BlueprintPure)
    static FName MP_TorsoNormalMinIntensityName();
    
    UFUNCTION(BlueprintPure)
    static FName MP_TorsoNormalMaxIntensityName();
    
    UFUNCTION(BlueprintPure)
    static FName MP_PalLitBaseColorName();
    
    UFUNCTION(BlueprintPure)
    static FName MP_LegNormalMinIntensityName();
    
    UFUNCTION(BlueprintPure)
    static FName MP_LegNormalMaxIntensityName();
    
    UFUNCTION(BlueprintPure)
    static FName MP_CharacterMakeSubsurfaceColorName();
    
    UFUNCTION(BlueprintPure)
    static FName MP_CharacterMakeBaseColorSaturationName();
    
    UFUNCTION(BlueprintPure)
    static FName MP_CharacterMakeBaseColorHueName();
    
    UFUNCTION(BlueprintPure)
    static FName MP_CharacterMakeBaseColorBrightnessName();
    
    UFUNCTION(BlueprintPure)
    static FName MP_ArmNormalMinIntensityName();
    
    UFUNCTION(BlueprintPure)
    static FName MP_ArmNormalMaxIntensityName();
    
    UFUNCTION(BlueprintPure)
    static FName FlagName_OverWeightInventory();
    
    UFUNCTION(BlueprintPure)
    static FName FlagName_DebugBotGuildName();
    
    UFUNCTION(BlueprintPure)
    static FName FlagName_CameraOffsetInLiftup();
    
    UFUNCTION(BlueprintPure)
    static FName EnableCommonUIInputFlagName_JoinSession();
    
    UFUNCTION(BlueprintPure)
    static FName DecreaseSanityRate_WorkHard();
    
    UFUNCTION(BlueprintPure)
    static FName DecreaseFullStomachRate_WorkHard();
    
    UFUNCTION(BlueprintPure)
    static FName DecreaseFullStomachRate_Work();
    
    UFUNCTION(BlueprintPure)
    static FName BS_TorsoArmMinName();
    
    UFUNCTION(BlueprintPure)
    static FName BS_TorsoArmMaxName();
    
    UFUNCTION(BlueprintPure)
    static FName BS_LegArmMinName();
    
    UFUNCTION(BlueprintPure)
    static FName BS_LegArmMaxName();
    
    UFUNCTION(BlueprintPure)
    static FName BS_BodyArmMinName();
    
    UFUNCTION(BlueprintPure)
    static FName BS_BodyArmMaxName();
    
    UFUNCTION(BlueprintPure)
    static FName ActionNotify_MiningImpactTiming();
    
    UFUNCTION(BlueprintPure)
    static FName ActionNotify_MiningEndTiming();
    
    UFUNCTION(BlueprintPure)
    static FName ActionBBKey_FeedItem();
    
};

