#ifndef UE4SS_SDK_WBP_MainMenu_Pal_State_HPP
#define UE4SS_SDK_WBP_MainMenu_Pal_State_HPP

class UWBP_MainMenu_Pal_State_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_State_2;
    class UWidgetAnimation* Anm_State_1;
    class UWidgetAnimation* Anm_State_0;
    class UCanvasPanel* MainCanvas;
    class UBP_PalTextBlock_C* Text_StatusName;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    TArray<class UWidgetAnimation*> animationArray;
    FWBP_MainMenu_Pal_State_COnHovered OnHovered;
    void OnHovered(class UWBP_MainMenu_Pal_State_C* StateWidget);
    FWBP_MainMenu_Pal_State_COnUnhovered OnUnhovered;
    void OnUnhovered(class UWBP_MainMenu_Pal_State_C* StateWidget);
    EPalUIConditionType CurrentCondition;

    void Clear();
    void Set Condition(EPalUIConditionType displayCondition);
    void OnInitialized();
    void BndEvt__WBP_MainMenu_Pal_State_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Pal_State_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_MainMenu_Pal_State(int32 EntryPoint);
    void OnUnhovered__DelegateSignature(class UWBP_MainMenu_Pal_State_C* StateWidget);
    void OnHovered__DelegateSignature(class UWBP_MainMenu_Pal_State_C* StateWidget);
};

#endif
