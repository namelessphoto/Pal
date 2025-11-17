#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "PalEditorSetting.generated.h"

class UPalEditorSetting;

UCLASS(BlueprintType, Config=Editor)
class PAL_API UPalEditorSetting : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath ItemDataTableAssetPath;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath PalMonsterDataTableAssetPath;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath PalHumanDataTableAssetPath;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath MapObjectDataTableAssetPath;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath FarmCropDataTableAssetPath;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath CrimeMasterDataTableAssetPath;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath PassiveSkillDataTableAssetPath;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath ItemProductDataTableAssetPath;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath NPCUniqueDataTableAssetPath;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath RecipeTechnologyDataTableAssetPath;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath BaseCampWorkerEventDataTableAssetPath;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath UIInputActionTableAssetPath;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath SoundIDTableAssetPath;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath ItemShopCreateDataTableAssetPath;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath ItemShopLotteryDataTableAssetPath;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath PalShopCreateDataTableAssetPath;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath DungeonSpawnAreaDataTableAssetPath;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath FieldLotteryNameDataTableAssetPath;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath NoteDataTableAssetPath;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath NPCAppearFlagDataTableAssetPath;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath WorldMapAreaDataTableAssetPath;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath FishShadowDataTableAssetPath;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath FishingSpotLotteryNameDataTableAssetPath;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath FishPondLotteryNameDataTableAssetPath;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath GameProgressPresetTableAssetPath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bEditorToolMenu_DisplaySpreadSheetName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bEditorToolMenu_SpreadSheetGrouping;
    
    UPROPERTY(Config, EditDefaultsOnly)
    TMap<FName, FSoftObjectPath> DataLayerSettingsAssetPathMap;
    
    UPalEditorSetting();

    UFUNCTION(BlueprintPure)
    static UPalEditorSetting* GetPalEditorSettings();
    
};

