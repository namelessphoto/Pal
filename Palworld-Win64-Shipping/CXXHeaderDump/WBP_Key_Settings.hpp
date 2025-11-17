#ifndef UE4SS_SDK_WBP_Key_Settings_HPP
#define UE4SS_SDK_WBP_Key_Settings_HPP

class UWBP_Key_Settings_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* VerticalBox_GP;
    class UVerticalBox* VerticalBox_GP_Action;
    class UVerticalBox* VerticalBox_GP_UI;
    class UVerticalBox* VerticalBox_KM;
    class UVerticalBox* VerticalBox_KM_Action;
    class UVerticalBox* VerticalBox_KM_UI;
    bool SomethingChanged;
    TArray<class UVerticalBox*> VerticalBoxs;
    TArray<class UWBP_PalCommonButtonBase_C*> FirstRows;
    int32 Current;
    TMap<class FName, class UWBP_OptionSettings_ListContent_C*> InputActionsMap_KM;
    TMap<class FName, class UWBP_OptionSettings_ListContent_C*> InputActionsMap_GP;
    TMap<class FName, class UWBP_OptionSettings_ListContent_C*> UIActionsMap_KM;
    TMap<class FName, class UWBP_OptionSettings_ListContent_C*> UIActionsMap_GP;
    FPalKeyConfigSettings KeyConfigSettingsCache;
    TMap<class FName, class FPalKeyAction> AxisMap;
    TMap<class FPalKeyAction, class FName> ReverseAxisMap;
    bool BackFromSetting;
    FKey CachedSettingKey;
    TArray<FName> FilterActionKeys;
    bool KeyConflict_KM;
    bool UIKeyConflict_KM;
    bool KeyConflict_GP;
    bool UIKeyConflict_GP;
    TMap<class FName, class FName> MultiKeyMap;

    void SetDefault();
    void UI Key Conflict Check(EPalKeyConfigCategory FilterType);
    void On UI Action Key Changed(FName ActionName, FKey NewKey, EPalKeyConfigCategory InputType, EPalKeyConfigAxisFilterType AxisType);
    void On UI Key Config Changing(FName KeyName, ECommonInputType InputType, EPalKeyConfigAxisFilterType AxisType);
    void Multi Key Setting(const TMap<class FName, class FPalKeyConfigKeys>& TargetMap, const FName& ActionName, const FPalKeyConfigKeys& Key);
    void Key Conflict Check(EPalKeyConfigCategory FilterType);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Get Actions By Key(FKey Key, ECommonInputType InputType, TArray<FPalKeyAction>& KeyActions);
    bool IsSetableAction(const FPalKeyAction& Key, ECommonInputType InputType);
    void Get UI Conflict Actions(const FName& CheckingAction, EPalKeyConfigCategory FilterType, TArray<FName>& KeyActions);
    void On Action Key Changed(FName ActionName, FKey NewKey, EPalKeyConfigCategory InputType, EPalKeyConfigAxisFilterType AxisType);
    void Get Conflict Actions(const FPalKeyAction& CheckingAction, EPalKeyConfigCategory FilterType, TArray<FPalKeyAction>& KeyActions);
    void On Key Config Changing(FName KeyName, ECommonInputType InputType, EPalKeyConfigAxisFilterType AxisType);
    void GetDesiredFocusTarget(class UWidget*& Target);
    void GetKeybyAction(const FPalKeyAction& PalKeyAction, EPalKeyConfigCategory FilterType, FKey& Key);
    void Construct();
    void ApplySettings();
    void SwitchTab(bool Next);
    void SwitchPanel(int32 Index);
    void OnInitialized();
    void ExecuteUbergraph_WBP_Key_Settings(int32 EntryPoint);
};

#endif
