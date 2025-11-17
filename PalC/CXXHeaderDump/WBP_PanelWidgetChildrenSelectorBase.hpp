#ifndef UE4SS_SDK_WBP_PanelWidgetChildrenSelectorBase_HPP
#define UE4SS_SDK_WBP_PanelWidgetChildrenSelectorBase_HPP

class UWBP_PanelWidgetChildrenSelectorBase_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 NowFocusChildIndex;
    FWBP_PanelWidgetChildrenSelectorBase_COnChangedFocusIndex OnChangedFocusIndex;
    void OnChangedFocusIndex(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget);
    FWBP_PanelWidgetChildrenSelectorBase_COnNext OnNext;
    void OnNext(int32 OldIndex, int32 NewIndex);
    FWBP_PanelWidgetChildrenSelectorBase_COnPrev OnPrev;
    void OnPrev(int32 OldIndex, int32 NewIndex);
    class UPanelWidget* MyPanelWidget;
    FWBP_PanelWidgetChildrenSelectorBase_COnChangeEnableChild OnChangeEnableChild;
    void OnChangeEnableChild(int32 Index, class UWidget* ChildWidget, bool IsEnable);

    void GetChildrenNum(int32& ChildrenNum);
    void GetPanelChildren(bool& IsValidPanel, TArray<class UWidget*>& Children);
    void GetIndexByWidget(class UWidget* Widget, int32& findedIndex);
    void IsValidIndex(int32 Index, bool& IsValid);
    void SetEnableAllChildren(bool IsEnable);
    void SetEnableChild(bool IsEnable, int32 TargetIndex);
    void IsEnabeChild(int32 Index, bool& IsEnable);
    void SelectByIndex(int32 FocusIndex);
    void SelectPrev();
    void SelectNext();
    void RegisterPanelWidget(class UPanelWidget*& PanelWidget);
    void Construct();
    void OnInitialized();
    void ExecuteUbergraph_WBP_PanelWidgetChildrenSelectorBase(int32 EntryPoint);
    void OnChangeEnableChild__DelegateSignature(int32 Index, class UWidget* ChildWidget, bool IsEnable);
    void OnPrev__DelegateSignature(int32 OldIndex, int32 NewIndex);
    void OnNext__DelegateSignature(int32 OldIndex, int32 NewIndex);
    void OnChangedFocusIndex__DelegateSignature(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget);
};

#endif
