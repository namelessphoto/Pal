#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonInput -ObjectName=ECommonInputType -FallbackName=ECommonInputType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "EPalAdditionalEffectType.h"
#include "EPalBaseCampWorkerEventType.h"
#include "EPalBaseCampWorkerSickType.h"
#include "EPalBuildObjectTypeA.h"
#include "EPalBuildObjectTypeB.h"
#include "EPalElementType.h"
#include "EPalGenusCategoryType.h"
#include "EPalItemTypeA.h"
#include "EPalKeyConfigAxisFilterType.h"
#include "EPalMapObjectMaterialSubType.h"
#include "EPalMapObjectOperationResult.h"
#include "EPalPlayerInventoryType.h"
#include "EPalUIConditionType.h"
#include "EPalWazaID.h"
#include "EPalWorkSuitability.h"
#include "EPalWorkType.h"
#include "PalSlateNavigationSetting.h"
#include "PalUIDisplayCharacterBaseParameterInfo.h"
#include "PalUIUtility.generated.h"

class APalCharacter;
class UObject;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;
class UPalItemSlot;
class UPalTextBlockBase;
class UPalUserWidget;
class UWidget;

UCLASS(BlueprintType)
class PAL_API UPalUIUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalUIUtility();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetVisibilityHUD(const UObject* WorldContextObject, bool IsVisible);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetNumberToSeparatedTextBlock(const UObject* WorldContextObject, const TArray<int32>& numberArray, UPARAM(Ref) TArray<UPalTextBlockBase*>& textBlockArray, float topZeroTextOpacity);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetEnableCommonUIInput(const UObject* WorldContextObject, const FName flagName, bool IsEnable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCustomSlateNavigation(const UObject* WorldContextObject, const FPalSlateNavigationSetting& NavigationSetting);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetSlateNavigation(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetEnableCommonUIInput(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsToggleInteract(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsToggleBuildMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsShiftDown_ForUI();
    
    UFUNCTION(BlueprintPure)
    static bool IsRightShiftDown_ForUI();
    
    UFUNCTION(BlueprintPure)
    static bool IsRightControlDown_ForUI();
    
    UFUNCTION(BlueprintPure)
    static bool IsRightAltDown_ForUI();
    
    UFUNCTION(BlueprintPure)
    static bool IsLeftShiftDown_ForUI();
    
    UFUNCTION(BlueprintPure)
    static bool IsLeftControlDown_ForUI();
    
    UFUNCTION(BlueprintPure)
    static bool IsLeftAltDown_ForUI();
    
    UFUNCTION(BlueprintPure)
    static bool IsControlDown_ForUI();
    
    UFUNCTION(BlueprintPure)
    static bool IsAltDown_ForUI();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetWorkSuitabilityNameWithMaterialSubType(const UObject* WorldContextObject, const EPalWorkSuitability WorkSuitability, const EPalMapObjectMaterialSubType MaterialSubType, FText& outName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetWorkSuitabilityName(const UObject* WorldContextObject, const EPalWorkSuitability WorkSuitability, FText& outName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetWorkSickName(const UObject* WorldContextObject, const EPalBaseCampWorkerSickType SickType, FText& outName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetWorkNameFromHandle(const UObject* WorldContextObject, UPalIndividualCharacterHandle* targetHandle, FText& outName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetWorkName(const UObject* WorldContextObject, const EPalWorkType WorkType, FText& outName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetWorkingDetailNameFromHandle(const UObject* WorldContextObject, UPalIndividualCharacterHandle* targetHandle, FText& outName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetWorkingDetailName(const UObject* WorldContextObject, const EPalWorkType WorkType, FText& outName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetWorkerComment(const UObject* WorldContextObject, UPalIndividualCharacterHandle* targetHandle, FText& outName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetWazaName(const UObject* WorldContextObject, EPalWazaID WazaID, FText& outName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetWazaDesc(const UObject* WorldContextObject, EPalWazaID WazaID, FText& outDesc);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetWaitForWorkableDetailName(const UObject* WorldContextObject, const EPalWorkType WorkType, FText& outName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetUIInputActionRowHandle(const UObject* WorldContextObject, const FName& ActionName, FDataTableRowHandle& outHandle);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetUIDIsplayShotAtaackParameterInfo(const UObject* WorldContextObject, UPalIndividualCharacterParameter* IndividualParameter, FPalUIDisplayCharacterBaseParameterInfo& OutParameterInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetUIDisplayPalCondition(const UObject* WorldContextObject, TArray<EPalUIConditionType>& OutArray, UPalIndividualCharacterHandle* targetHandle);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetUIDIsplayDefenseParameterInfo(const UObject* WorldContextObject, UPalIndividualCharacterParameter* IndividualParameter, FPalUIDisplayCharacterBaseParameterInfo& OutParameterInfo);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetUIDIsplayCraftSpeedParameterInfo(const UObject* WorldContextObject, UPalIndividualCharacterParameter* IndividualParameter, FPalUIDisplayCharacterBaseParameterInfo& OutParameterInfo);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetTechnologyDescription(const UObject* WorldContextObject, const FName& technologyName, FText& OutDescription);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetTeamMissionName(const UObject* WorldContextObject, const FName& MissionId, FText& OutMissionName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSortedEssentialItemSlotArray_ForUIDisplay(const UObject* WorldContextObject, TArray<UPalItemSlot*>& OutArray);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetSkinName(const UObject* WorldContextObject, const FName& SkinName, FText& OutSKinName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetRecipeProductIdByStaticItemId(const UObject* WorldContextObject, const FName StaticItemId, FName& OutProductItemId);
    
    UFUNCTION(BlueprintPure)
    static int32 GetPlayerInframeRenderTargetResolution();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetPassiveSkillName(const UObject* WorldContextObject, const FName& PassiveSkillId, FText& outName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetPartnerSkillName(const UObject* WorldContextObject, const FName& CharacterID, FText& OutText);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetPalShortDescription(const UObject* WorldContextObject, const FName& CharacterID, FText& outName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetPalRestrictItemID(const UObject* WorldContextObject, const FName& CharacterID, FName& ItemId);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetPalLongDescription(const UObject* WorldContextObject, const FName& CharacterID, FText& outName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetPalGenusCategoryName(const UObject* WorldContextObject, EPalGenusCategoryType GenusCategory, FText& outName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetPalFirstActivatedInfo(const UObject* WorldContextObject, const FName& CharacterID, FText& outName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetPalElementTypeName(const UObject* WorldContextObject, EPalElementType ElementType, FText& outName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetPalConditionUrgency(const UObject* WorldContextObject, EPalUIConditionType Condition);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetPalConditionName(const UObject* WorldContextObject, const EPalUIConditionType ConditionType, FText& outName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetPalConditionDesc(const UObject* WorldContextObject, const EPalUIConditionType ConditionType, FText& outDesc);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FSlateBrush GetMappedKeyIcon(const UObject* WorldContextObject, const FName InputActionName, ECommonInputType InputType, EPalKeyConfigAxisFilterType FilterType);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetMapObjectOperationResultText(const UObject* WorldContextObject, const EPalMapObjectOperationResult operationType, FText& outName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FName GetMapObjectNameTextId(const UObject* WorldContextObject, const FName& MapObjectName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetMapObjectName(const UObject* WorldContextObject, const FName& MapObjectName, FText& outName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FSlateBrush GetKeyIconByKey(const UObject* WorldContextObject, const FKey Key, ECommonInputType InputType);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetItemTypeAName(const UObject* WorldContextObject, const EPalItemTypeA ItemTypeA, FText& outName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetItemName(const UObject* WorldContextObject, const FName& StaticItemId, FText& outName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetItemDescription(const UObject* WorldContextObject, const FName& StaticItemId, FText& outName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetInventoryCategoryName(const UObject* WorldContextObject, EPalPlayerInventoryType inventoryType, FText& outName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetFormatedFirstActivatedInfoText(const UObject* WorldContextObject, APalCharacter* Character, FText& outFormatedText);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetDisplayNickName(const UObject* WorldContextObject, const FName CharacterID, const FName UniqueNPCID, FString& OutNickName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetBuildObjectDesc(const UObject* WorldContextObject, const FName& buildObjectName, FText& outDesc);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetBuildObjectCategoryBName(const UObject* WorldContextObject, const EPalBuildObjectTypeB TypeB, FText& outName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetBuildObjectCategoryAName(const UObject* WorldContextObject, const EPalBuildObjectTypeA TypeA, FText& outName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetBaseCampEventName(const UObject* WorldContextObject, const EPalBaseCampWorkerEventType EventType, FText& outName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetAllTagFromText(const UObject* WorldContextObject, const FText& targetText, TArray<FString>& outTagArray);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetAdditionalEffectName(const UObject* WorldContextObject, EPalAdditionalEffectType EffectType, FText& outName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalUserWidget* FindOwningActivatableWidget(const UObject* WorldContextObject, const UWidget* Widget);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float ConvertReviveTimerToUIDisplayRemainReviveTime(const UObject* WorldContextObject, float ReviveTimer);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanDisplayTalentDetailUI(const UObject* WorldContextObject, UPalIndividualCharacterParameter* TargetCharacterParameter);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanDisplayBlueprintCategoryInBuildRadialMenu(const UObject* WorldContextObject);
    
};

