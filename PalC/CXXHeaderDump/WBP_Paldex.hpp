#ifndef UE4SS_SDK_WBP_Paldex_HPP
#define UE4SS_SDK_WBP_Paldex_HPP

class UWBP_Paldex_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_NoData_Encounted;
    class UWidgetAnimation* Anm_NoData_NotEncounted;
    class UWidgetAnimation* Anm_MapToPalinfo;
    class UWidgetAnimation* Anm_PalinfoToMap;
    class UWidgetAnimation* Anm_Map;
    class UWidgetAnimation* Anm_PalInfo;
    class UCanvasPanel* Canvas_LongDesc;
    class UCircularThrobber* CircularThrobber_49;
    class UBP_PalRichTextBlock_C* RichText_LongDesc;
    class UBP_PalTextBlock_C* Text_EncountPalNumValue;
    class UBP_PalTextBlock_C* Text_RegisterPalNumValue;
    class UWBP_NoData_C* WBP_NoData;
    class UWBP_Paldex_Map_C* WBP_Paldex_Map;
    class UWBP_Paldex_PalInfo_00_C* WBP_Paldex_PalInfo_00;
    class UWBP_Paldex_tabset_C* WBP_Paldex_tabset;
    class UWBP_PaldexScrollList_C* WBP_PaldexScrollList;
    class UWBP_PalMonsterInframeRender_C* WBP_PalInframeRender;
    FName nowRenderCharacterID;
    FWBP_Paldex_COnHoveredAnyPalPanel OnHoveredAnyPalPanel;
    void OnHoveredAnyPalPanel(FName CharacterID);
    FDataTableRowHandle NoDataNoticeMsgID;
    FDataTableRowHandle NoDistributionNoticeMsgID;
    FWBP_Paldex_COnClickedModelTab OnClickedModelTab;
    void OnClickedModelTab();
    FWBP_Paldex_COnClickedDistributionTab OnClickedDistributionTab;
    void OnClickedDistributionTab();
    FDataTableRowHandle NoDistributionThisTimeNoticeMsgID;
    class UWBP_Paldex_List_C* lastHoveredPanel;
    bool IsFirstSetup;
    bool isDIsplayDisrtibution;
    FWBP_Paldex_COnClickedAnyPalPanel OnClickedAnyPalPanel;
    void OnClickedAnyPalPanel(FName CharacterID);
    class UWBP_Paldex_List_C* LastClickedPalPanel;

    void ScrollByCharacterID(FName CharacterID);
    void ClickByCharacterID(FName CharacterID);
    void ScrollByPanelIndex(int32 ScrollByPanelIndex);
    void OnCompleteCapturePalActor();
    void ClickByIndex(int32 Index);
    void GetFocusTargetByCharacterID(FName CharacterID, class UWidget*& Target);
    void SetEncountedPalNum(int32 Num);
    void SetRegisteredPalNum(int32 Num);
    void ResetMapOffset();
    void SetZoomDisrtibutionMap(double Rate);
    void IsZoomMax(bool& IsMax);
    void AddZoomDistributionMap(double AddZoomRate);
    void Add Captured Actor Rotation(FRotator Rotator);
    void AddDistributionMapOffset(FVector2D Offset);
    void PageSkip_Up(EUINavigation Navigation);
    void PageSkip_Down(EUINavigation Navigation);
    void DisplayNoDataWidget(FDataTableRowHandle msgIdHandle);
    void HideNoDataWidget();
    void ChangeToModelDisplayModel();
    void ChangeToDistributionDIsplayMode();
    void Display Distribution(FPalUIPaldex_DisplayInfo DisplayInfo, TEnumAsByte<E_PaldexDistributionTimeType> timeType);
    void DisplayPalInfo(FPalUIPaldex_DisplayInfo DisplayInfo);
    void CapturePalActor(FName CharacterID);
    void GetFocusTargetByIndex(int32 Index, class UWidget*& Target);
    void FocusByCharacterID(FName CharacterID);
    void FocusByIndex(int32 Index);
    void SetupCaptureCameraActor();
    void SetupPalPanelList(TArray<FPalUIPaldex_DisplayInfo>& displayInfoArray);
    void AnmEvent_ToModel();
    void AnmEvent_ToDistribution();
    void AnmEvent_FirstOpen();
    void AnmEvent_ChnageTimeType(TEnumAsByte<E_PaldexDistributionTimeType> timeType);
    void Construct();
    void BndEvt__WBP_Paldex_WBP_PaldexScrollList_K2Node_ComponentBoundEvent_0_OnHoveredAnyPanel__DelegateSignature(FName CharacterID, class UWBP_Paldex_List_C* SelfWidget);
    void Destruct();
    void OnInitialized();
    void BndEvt__WBP_Paldex_WBP_Paldex_tabset_K2Node_ComponentBoundEvent_1_OnSelectedModelTab__DelegateSignature();
    void BndEvt__WBP_Paldex_WBP_Paldex_tabset_K2Node_ComponentBoundEvent_2_OnSelectedDistributionTab__DelegateSignature();
    void BndEvt__WBP_Paldex_WBP_PaldexScrollList_K2Node_ComponentBoundEvent_3_OnClickedAnyPanel__DelegateSignature(FName CharacterID, class UWBP_Paldex_List_C* Widget);
    void ExecuteUbergraph_WBP_Paldex(int32 EntryPoint);
    void OnClickedAnyPalPanel__DelegateSignature(FName CharacterID);
    void OnClickedDistributionTab__DelegateSignature();
    void OnClickedModelTab__DelegateSignature();
    void OnHoveredAnyPalPanel__DelegateSignature(FName CharacterID);
};

#endif
