#ifndef UE4SS_SDK_WBP_IngameMenuConstruction_Tab_HPP
#define UE4SS_SDK_WBP_IngameMenuConstruction_Tab_HPP

class UWBP_IngameMenuConstruction_Tab_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UImage* Image_Icon;
    class UBP_PalTextBlock_C* Text_Category;
    class UWBP_IngameMenuConstruction_TabSub_C* WBP_IngameMenuConstruction_TabSub;
    class UWBP_PalCommonNewMark_0_C* WBP_PalCommonNewMark;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    TArray<class UWBP_IngameMenuConstruction_TabSub_C*> Tabs;
    int32 TabNum;
    FWBP_IngameMenuConstruction_Tab_CSwitchTab SwitchTab;
    void SwitchTab(EPalBuildObjectTypeA TypeA);
    EPalBuildObjectTypeA Type A;
    bool NowActive;
    int32 LastIndex;
    TMap<class EPalBuildObjectTypeA, class TSoftObjectPtr<UTexture2D>> IconMap;

    void SetActiveNewMark(bool Active);
    void SwitchToTab();
    void ResetActiveTab();
    void SetActiveTab(int32 Index);
    void GetTabNum(int32& TabNum);
    void SetupTabs();
    void SetTab(int32 Num, EPalBuildObjectTypeA TypeA);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__WBP_IngameMenuConstruction_Tab_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_IngameMenuConstruction_Tab(int32 EntryPoint);
    void SwitchTab__DelegateSignature(EPalBuildObjectTypeA TypeA);
};

#endif
