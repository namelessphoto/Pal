#ifndef UE4SS_SDK_WBP_PalOverallUILayout_HPP
#define UE4SS_SDK_WBP_PalOverallUILayout_HPP

class UWBP_PalOverallUILayout_C : public UPalPrimaryGameLayoutBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* CanvasPanel_3;
    class UCanvasPanel* CanvasPanel_Fade;
    class UCanvasPanel* CanvasPanel_Root;
    class UPalActivatableWidgetContainer* Layer_0;
    class UPalActivatableWidgetContainer* Layer_1;
    class UPalActivatableWidgetContainer* Layer_2;
    class UPalActivatableWidgetContainer* Layer_3;
    class UPalActivatableWidgetContainer* Layer_4;
    class UPalActivatableWidgetContainer* Layer_5;
    class UPalActivatableWidgetContainer* Layer_6;
    class UPalActivatableWidgetContainer* Layer_7;
    class UPalActivatableWidgetContainer* Menu;
    class UPalActivatableWidgetContainer* Modal;
    class USizeBox* SizeBox_0;
    class UVerticalBox* VerticalBox_CommonWarning;
    class UWBP_AutoSave_C* WBP_AutoSave;
    class UWBP_CommonReward_C* WBP_CommonReward;
    class UWBP_InventoryEquipment_ItemInfo_C* WBP_InventoryEquipment_ItemInfo;
    class UWBP_MainMenu_Cursor_C* WBP_MainMenu_Cursor;
    class UWBP_PalActionBar_C* WBP_PalActionBar_C_8;
    class UWBP_PalLiftItem_C* WBP_PalLiftItem;
    TMap<class EPalFadeWidgetLayerType, class UCanvasPanel*> FadeWidgetCanvasMap;
    TMap<class EPalFadeWidgetType, class TSubclassOf<UWBP_PalFadeWidgetBase_C>> FadeWidgetMap;
    TArray<EPalFadeWidgetLayerType> WaitFadeInLayers;
    class UPalUILiftSlotModel* LiftSlotModel;
    TSoftObjectPtr<UWidget> CursorTargetWidget;
    TMap<class FGuid, class UWBP_CommonWarning_C*> WarningWidgets;
    FTimerHandle DelayDisplayTimer;
    TMap<EPalUICommonWarningType, int32> SoundIDMap;
    TArray<EPalUICommonWarningType> RegistedWarningSound;

    void CREATEDELEGATE_PROXYFUNCTION_0(EPalUICommonWarningType WarningType);
    void UpdateCursor();
    void OnInitialized();
    void ShowFocusCursor(class UWidget* TargetWidget);
    void HideFocusCursor();
    void FadeIn(EPalFadeWidgetLayerType LayerType);
    void ShowCommonItemInfo(const FPalUICommonItemInfoDisplayData& DisplayData);
    void HideCommonItemInfo();
    void ShowLiftIcon();
    void HideLiftIcon();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetupLiftIcon();
    void ShowCommonReward(const FPalUICommonRewardDisplayData& RewardDisplayData);
    void FadeOut(EPalFadeWidgetLayerType LayerType, class UPalHUDDispatchParameter_FadeWidget* FadeParameter);
    void HideCommonReward();
    void ShowCommonWarning(const FPalUICommonWarningDisplayData& WarningDisplayData);
    void HideCommonWarning(const FGuid PreserveID);
    void DelayDisplay();
    void OnWarningClear(const EPalUICommonWarningType& WarningType);
    void HideOnEmpty();
    void SetVisibilityRootLayout(ESlateVisibility NewVisibility);
    void ExecuteUbergraph_WBP_PalOverallUILayout(int32 EntryPoint);
};

#endif
