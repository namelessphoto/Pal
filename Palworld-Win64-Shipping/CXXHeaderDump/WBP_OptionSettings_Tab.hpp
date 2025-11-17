#ifndef UE4SS_SDK_WBP_OptionSettings_Tab_HPP
#define UE4SS_SDK_WBP_OptionSettings_Tab_HPP

class UWBP_OptionSettings_Tab_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_OptionSettings_TabButton_C* WBP_OptionSettings_TabButton;
    class UWBP_OptionSettings_TabButton_C* WBP_OptionSettings_TabButton_1;
    class UWBP_OptionSettings_TabButton_C* WBP_OptionSettings_TabButton_2;
    TArray<class UWBP_OptionSettings_TabButton_C*> Tabs;
    TArray<class UWBP_OptionSettings_TabButton_C*> ActiveTabs;
    int32 Current;

    void SwitchTab(bool Next);
    void SetupTabs(const TArray<FDataTableRowHandle>& Names);
    void Setup(class UWBP_OptionSettings_C* SettingPanel);
    void SwitchTabTo(int32 Index);
    void ExecuteUbergraph_WBP_OptionSettings_Tab(int32 EntryPoint);
};

#endif
