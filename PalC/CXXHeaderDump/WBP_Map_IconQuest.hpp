#ifndef UE4SS_SDK_WBP_Map_IconQuest_HPP
#define UE4SS_SDK_WBP_Map_IconQuest_HPP

class UWBP_Map_IconQuest_C : public UWBP_WorldMap_IconBase_NoDesign_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* Canvas_Inner;
    class UImage* Icon;
    class USizeBox* SizeBox_Range;
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;
    class UWBP_Map_TargetArea_C* WBP_TargetArea;
    float TargetAreaRange;

    void SetupForceVisibility(bool& bChangedVisibility);
    void SetAreaRangeWidgetScale(double InScale);
    void Setup_Internal(class UPalLocationPoint* LocationPoint);
    void GetQuestId(FName& QuestId);
    void GetInvisibleButton(class UWidget*& Button);
    void BndEvt__WBP_Map_IconCustom_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconCustom_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconCustom_WBP_PalCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void SetTexture(class UTexture2D* Texture);
    void OnInitialized();
    void OnMainVisibilityChanged(ESlateVisibility InVisibility);
    void ExecuteUbergraph_WBP_Map_IconQuest(int32 EntryPoint);
};

#endif
