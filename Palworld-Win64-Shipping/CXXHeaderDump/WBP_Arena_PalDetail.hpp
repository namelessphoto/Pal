#ifndef UE4SS_SDK_WBP_Arena_PalDetail_HPP
#define UE4SS_SDK_WBP_Arena_PalDetail_HPP

class UWBP_Arena_PalDetail_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_IngameMenu_PalBox_PalDetail_C* WBP_IngameMenu_PalBox_PalDetail;
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;

    void Construct();
    void ExecuteUbergraph_WBP_Arena_PalDetail(int32 EntryPoint);
};

#endif
