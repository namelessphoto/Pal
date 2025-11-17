#ifndef UE4SS_SDK_WBP_ResearchEffectIcon_HPP
#define UE4SS_SDK_WBP_ResearchEffectIcon_HPP

class UWBP_ResearchEffectIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Icon;
    TMap<class EPalWorkSuitability, class TSoftObjectPtr<UTexture2D>> MainTypeIcons;
    TMap<class EPalLabCategorySubType, class TSoftObjectPtr<UTexture2D>> SubTypeIcons;

    void SetupIcon(EPalWorkSuitability WorkType, EPalLabCategorySubType SubType);
    void ExecuteUbergraph_WBP_ResearchEffectIcon(int32 EntryPoint);
};

#endif
