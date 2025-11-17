#ifndef UE4SS_SDK_WBP_IngameMenuConstruction_LR_HPP
#define UE4SS_SDK_WBP_IngameMenuConstruction_LR_HPP

class UWBP_IngameMenuConstruction_LR_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_PushArrowR;
    class UWidgetAnimation* Anm_PushArrowL;
    class UImage* ArrowImage;
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_1;
    TArray<class UWBP_PalKeyGuideIcon_C*> Icons;

    void SetInputAction(int32 Index, FName ActionName);
    void OnInitialized();
    void ExecuteUbergraph_WBP_IngameMenuConstruction_LR(int32 EntryPoint);
};

#endif
