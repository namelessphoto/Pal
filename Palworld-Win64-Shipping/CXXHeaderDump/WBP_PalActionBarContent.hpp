#ifndef UE4SS_SDK_WBP_PalActionBarContent_HPP
#define UE4SS_SDK_WBP_PalActionBarContent_HPP

class UWBP_PalActionBarContent_C : public UPalCommonBoundActionButton
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalBox_32;

    void OnUpdateInputAction();
    void ExecuteUbergraph_WBP_PalActionBarContent(int32 EntryPoint);
};

#endif
