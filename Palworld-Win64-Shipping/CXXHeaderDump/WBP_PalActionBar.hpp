#ifndef UE4SS_SDK_WBP_PalActionBar_HPP
#define UE4SS_SDK_WBP_PalActionBar_HPP

class UWBP_PalActionBar_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Close;
    class UWidgetAnimation* Open;
    class UCommonBoundActionBar* CommonBoundActionBar_33;
    class UInvalidationBox* InvalidationBox_0;
    int32 lastEntryNum;

    void OnAddedAction();
    void OnRemovedAllAction();
    void AnmEvent_Open();
    void AnmEvent_Close();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalActionBar(int32 EntryPoint);
};

#endif
