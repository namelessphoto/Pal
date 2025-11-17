#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalItemUseEffectType.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalItemData.h"
#include "PalItemId.h"
#include "Templates/SubclassOf.h"
#include "PalItemIDManager.generated.h"

class UPalItemUseProcessor;
class UPalStaticItemDataAsset;
class UPalStaticItemDataBase;
class UPalStaticItemDataTable;

UCLASS(Blueprintable)
class UPalItemIDManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UPalStaticItemDataAsset* StaticItemDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalItemUseEffectType, TSubclassOf<UPalItemUseProcessor>> ItemUseProcessorClassMap;
    
    UPROPERTY(Transient)
    TMap<EPalItemUseEffectType, UPalItemUseProcessor*> ItemUseProcessorMap;
    
    UPROPERTY(Transient)
    TArray<FName> WazaMachineStaticItemIds;
    
    UPROPERTY(EditDefaultsOnly)
    FPalDataTableRowName_ItemData WoodItemRowName;
    
    UPROPERTY(EditDefaultsOnly)
    FPalDataTableRowName_ItemData EggItemRowName;
    
    UPROPERTY(EditDefaultsOnly)
    FPalDataTableRowName_ItemData PalUpgradeStoneItemRowName;
    
    UPROPERTY(EditDefaultsOnly)
    FPalDataTableRowName_ItemData MoneyItemRowName;
    
    UPROPERTY(EditDefaultsOnly)
    FPalDataTableRowName_ItemData CrudeOilItemRowName;
    
private:
    UPROPERTY()
    UPalStaticItemDataTable* StaticItemDataTable;
    
public:
    UPalItemIDManager();

    UFUNCTION(BlueprintImplementableEvent, meta=(WorldContext="WorldContextObject"))
    FName GetStaticItemIdPalEgg(const UObject* WorldContextObject, const FName CharacterID) const;
    
    UFUNCTION(BlueprintPure)
    UPalStaticItemDataBase* GetStaticItemData(const FName StaticItemId) const;
    
    UFUNCTION(BlueprintPure)
    FPalItemData GetItemData(const FPalItemId& ItemId) const;
    
};

