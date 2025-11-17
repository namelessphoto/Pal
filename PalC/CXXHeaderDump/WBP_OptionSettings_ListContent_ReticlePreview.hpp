#ifndef UE4SS_SDK_WBP_OptionSettings_ListContent_ReticlePreview_HPP
#define UE4SS_SDK_WBP_OptionSettings_ListContent_ReticlePreview_HPP

class UWBP_OptionSettings_ListContent_ReticlePreview_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_Outline;
    class UImage* Image_Outline_1;
    class UImage* Image_Reticle;
    class UImage* Image_Reticle_1;

    void SetReticleColor(int32 ColorIndex);
    void SetOutline(double OutlineOpacity);
    void ExecuteUbergraph_WBP_OptionSettings_ListContent_ReticlePreview(int32 EntryPoint);
};

#endif
