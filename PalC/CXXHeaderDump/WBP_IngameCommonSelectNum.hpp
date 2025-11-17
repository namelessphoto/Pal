#ifndef UE4SS_SDK_WBP_IngameCommonSelectNum_HPP
#define UE4SS_SDK_WBP_IngameCommonSelectNum_HPP

class UWBP_IngameCommonSelectNum_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* Canvas_SelectNum;
    class USizeBox* SizeBox_1;
    class USizeBox* SizeBox_10;
    class USizeBox* SizeBox_100;
    class USizeBox* SizeBox_1000;
    class USizeBox* SizeBox_10000;
    class USizeBox* SizeBox_100000;
    class USizeBox* SizeBox_1000000;
    class USizeBox* SizeBox_10000000;
    class USizeBox* SizeBox_100000000;
    class USizeBox* SizeBox_1000000000;
    class USizeBox* SizeBox_LeftDoubleArrow;
    class USizeBox* SizeBox_LeftDoubleArrow_KeyGuide;
    class USizeBox* SizeBox_RightDoubleArrow;
    class USizeBox* SizeBox_RightDoubleArrow_KeyGuide;
    class UBP_PalTextBlock_C* Text_1;
    class UBP_PalTextBlock_C* Text_10;
    class UBP_PalTextBlock_C* Text_100;
    class UBP_PalTextBlock_C* Text_1000;
    class UBP_PalTextBlock_C* Text_10000;
    class UBP_PalTextBlock_C* Text_100000;
    class UBP_PalTextBlock_C* Text_1000000;
    class UBP_PalTextBlock_C* Text_10000000;
    class UBP_PalTextBlock_C* Text_100000000;
    class UBP_PalTextBlock_C* Text_1000000000;
    class UWBP_IngameMenu_WorkSpace_NumArrow_C* WBP_IngameMenu_WorkSpace_NumArrow_Left_Double;
    class UWBP_IngameMenu_WorkSpace_NumArrow_C* WBP_IngameMenu_WorkSpace_NumArrow_Left_Single;
    class UWBP_IngameMenu_WorkSpace_NumArrow_C* WBP_IngameMenu_WorkSpace_NumArrow_Right_Double;
    class UWBP_IngameMenu_WorkSpace_NumArrow_C* WBP_IngameMenu_WorkSpace_NumArrow_Right_Single;
    class UWBP_IngameMenu_WorkSpace_Slider_C* WBP_IngameMenu_WorkSpace_Slider;
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_1;
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_2;
    int32 MinDisplayDigit;
    TArray<class UBP_PalTextBlock_C*> NumTextArray;
    TArray<class USizeBox*> SizeBoxArray;
    int32 DoubleArrowNum;
    int64 nowNum;
    FPalUIActionBindData RightDoubleArrowInputHandle;
    FPalUIActionBindData LeftDoubleArrowInputHandle;
    FPalUIActionBindData RightArrowInputHandle;
    FPalUIActionBindData LeftArrowInputHandle;
    int64 Max Num;
    FWBP_IngameCommonSelectNum_COnUpdateNum OnUpdateNum;
    void OnUpdateNum(int64 Num);
    FPalUIActionBindData MaxSelectInputHandle;
    int64 MinNum;

    void SetupInputAction();
    void SetNumColor(bool ToRed);
    void UpdateArrowVisibility();
    void OnTriggerMaxSelect_ForPad();
    void Set Min Max Num(int64 MaxNum, int64 MinNum);
    void OnTriggerLeftArrow_ForPad();
    void On Trigger Right Arrow for Pad();
    void OnTriggerLeftDoubleArrow_ForPad();
    void OnTriggerRightDoubleArrow_ForPad();
    void AddNum(int64 Num);
    void GetNowSelectedNum(int64& Num);
    void UpdateDigit(int32 DIsplayDigitNum);
    void OnInputMethodChangedeVENT(ECommonInputType bNewInputType);
    void SetNum(int64 NewNum, int32 GroupCount, bool CallDelegate);
    void Construct();
    void OnInitialized();
    void BndEvt__WBP_IngameCommonSelectNum_WBP_IngameMenu_WorkSpace_NumArrow_Right_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int32 Progress);
    void BndEvt__WBP_IngameCommonSelectNum_WBP_IngameMenu_WorkSpace_NumArrow_Left_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(int32 Progress);
    void BndEvt__WBP_IngameCommonSelectNum_WBP_IngameMenu_WorkSpace_NumArrow_Right_Double_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(int32 Progress);
    void BndEvt__WBP_IngameCommonSelectNum_WBP_IngameMenu_WorkSpace_NumArrow_Left_Double_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(int32 Progress);
    void BndEvt__WBP_IngameCommonSelectNum_WBP_IngameMenu_WorkSpace_Slider_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature(int64 NewCount);
    void SetMax();
    void OnVisibilityChangedEvent(ESlateVisibility InVisibility);
    void ExecuteUbergraph_WBP_IngameCommonSelectNum(int32 EntryPoint);
    void OnUpdateNum__DelegateSignature(int64 Num);
};

#endif
