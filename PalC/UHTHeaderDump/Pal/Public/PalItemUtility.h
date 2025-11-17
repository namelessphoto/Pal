#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EPalItemInfoCollectType.h"
#include "EPalItemTypeB.h"
#include "PalItemAndNum.h"
#include "PalItemId.h"
#include "PalItemRecipe.h"
#include "PalStaticItemIdAndNum.h"
#include "PalItemUtility.generated.h"

class AActor;
class UObject;
class UPalIndividualCharacterParameter;
class UPalItemSlot;
class UPalMapObjectConcreteModelBase;
class UPalStaticItemDataBase;

UCLASS(BlueprintType)
class UPalItemUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalItemUtility();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool TryGetItemVisualBlueprintClass(const UObject* WorldContextObject, const FName StaticItemId, TSoftClassPtr<AActor>& VisualBlueprintClass);
    
    UFUNCTION(BlueprintPure)
    static bool IsValid(const FPalItemRecipe& Recipe);
    
    UFUNCTION(BlueprintPure)
    static bool IsStatusPointResetItem(const UPalStaticItemDataBase* ItemData);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsRepairableItem(UObject* WorldContextObject, const FPalItemId& TargetItemId);
    
    UFUNCTION(BlueprintPure)
    static bool IsEmptyAllSlots(const TArray<UPalItemSlot*> Slots);
    
    UFUNCTION(BlueprintPure)
    static bool IsEmpty(const FPalItemAndNum& ItemInfo);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetProductItemRequiredMaterialInfos(const UObject* WorldContextObject, const UPalMapObjectConcreteModelBase* OwnerConcreteModel, const FName RecipeID, TArray<FPalStaticItemIdAndNum>& OutRequiredMaterialInfos);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetProductItemRequiredMaterialInfoMap(const UObject* WorldContextObject, const UPalMapObjectConcreteModelBase* OwnerConcreteModel, const FName RecipeID, TMap<FName, int32>& OutRequiredMaterialInfoMap);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPalItemSlot* CreateLocalItemSlot(UObject* WorldContextObject, const FName StaticItemId, const int32 Stack);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void CollectLocalPlayerControllableItemInfos_ByTypeB_WithSort(const UObject* WorldContextObject, TArray<EPalItemTypeB> ItemTypes, TArray<FPalStaticItemIdAndNum>& OutItemInfos, const EPalItemInfoCollectType CollectType);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void CollectLocalPlayerControllableItemInfos_ByTypeB(const UObject* WorldContextObject, TArray<EPalItemTypeB> ItemTypes, TArray<FPalStaticItemIdAndNum>& OutItemInfos, const EPalItemInfoCollectType CollectType);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void CollectLocalPlayerControllableItemInfos(const UObject* WorldContextObject, TArray<FName> StaticItemIds, TArray<FPalStaticItemIdAndNum>& OutItemInfos, const EPalItemInfoCollectType CollectType);
    
    UFUNCTION(BlueprintPure)
    static bool CanItemLevelUp(const UPalStaticItemDataBase* ItemData, UPalIndividualCharacterParameter* TargetParameter);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanDropFromInventory(const UObject* WorldContextObject, const FName& StaticItemId);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanDisposeFromInventory(const UObject* WorldContextObject, const FName& StaticItemId);
    
};

