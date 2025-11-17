#ifndef UE4SS_SDK_WBP_OptionSettings_HPP
#define UE4SS_SDK_WBP_OptionSettings_HPP

class UWBP_OptionSettings_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_List_OutToIn;
    class UWidgetAnimation* Anm_CloseToOpen;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Default;
    class UCanvasPanel* CanvasPanel_Settings;
    class UWBP_OptionSettings_MenuButton_C* WBP_OptionSettings_MenuButton_Game;
    class UWBP_OptionSettings_MenuButton_C* WBP_OptionSettings_MenuButton_Graphic;
    class UWBP_OptionSettings_MenuButton_C* WBP_OptionSettings_MenuButton_Key;
    class UWBP_OptionSettings_MenuButton_C* WBP_OptionSettings_MenuButton_Other;
    class UWBP_OptionSettings_MenuButton_C* WBP_OptionSettings_MenuButton_Other_1;
    class UWBP_OptionSettings_MenuButton_C* WBP_OptionSettings_MenuButton_Other_2;
    class UWBP_OptionSettings_MenuButton_C* WBP_OptionSettings_MenuButton_Sound;
    class UWBP_OptionSettings_Tab_C* WBP_OptionSettings_Tab;
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList;
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_Back;
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_Default;
    bool Switching;
    FName DefaultActionName;
    FName PreTabActionName;
    FName NextTabActionName;
    class UWBP_Graphic_Settings_C* GraphicSettings;
    class UWBP_Sound_Settings_C* AudioSettings;
    class UWBP_Key_Settings_C* KeySettings;
    class UWBP_Control_Settings_C* GameSettings;
    class UWBP_Other_Settings_C* OtherSettings;
    FDataTableRowHandle SetDefaultMsgID;
    FDataTableRowHandle CloseMsgID;
    TArray<FDataTableRowHandle> ControlTabMsgIDs;
    FPalUIActionBindData BackActionBinding;
    FPalUIActionBindData DefaultActionBinding;
    FPalUIActionBindData PreTabActionBinding;
    FPalUIActionBindData NextTabActionBinding;
    class UWidget* LastFocus;
    FDataTableRowHandle ConflictMsgId;
    FDataTableRowHandle ConflictMsgIdPS5;

    void Set Tab Action(bool Bind);
    class UWidget* BP_GetDesiredFocusTarget();
    void Finished_2536FBE94511E5E94401869A3ECF77EC();
    void Finished_412D6FCC467DE29951851EB38295E8FE();
    void Finished_EE961C0249D44ADFCC582DBCE988D50D();
    void Finished_3DF735A247AFD17B1935A8AD119ED44F();
    void Finished_657FDFA04D1EEBEC31C7FAA8DADA417B();
    void Finished_A36E9B0F4ACC421F93D76BA170A1BA11();
    void Finished_05846F744E202D6A15C4A8ABCE740327();
    void Finished_24865DB74E2CDF7AF1AD4D9DBEE2B394();
    void Finished_2034482C493806B667AA82AE6C6A732D();
    void Finished_47188B3742112F703AC219B6DFD31698();
    void Finished_E609EC2649DD5C39B8991FA76989D962();
    void ClosePanel();
    void Construct();
    void BndEvt__WBP_OptionSettings_WBP_OptionSettings_MenuButton_Graphic_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BackAction();
    void SetDefaultAction();
    void SetDefault(bool Confirmed);
    void ApplySettings(bool Confirmed);
    void BndEvt__WBP_OptionSettings_WBP_OptionSettings_MenuButton_Sound_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__WBP_OptionSettings_WBP_OptionSettings_MenuButton_Control_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void PreTab();
    void NextTab();
    void SwitchTabTo(int32 Index);
    void BndEvt__WBP_OptionSettings_WBP_OptionSettings_MenuButton_Other_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void BndEvt__WBP_OptionSettings_WBP_OptionSettings_MenuButton_Key_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void EmptyEvent(bool bResult);
    void BndEvt__WBP_OptionSettings_WBP_OptionSettings_MenuButton_Other_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void OpenPanel();
    void BndEvt__WBP_OptionSettings_WBP_OptionSettings_MenuButton_Other_2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_OptionSettings(int32 EntryPoint);
};

#endif
