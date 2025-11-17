#ifndef UE4SS_SDK_WBP_Ingameconstruction_KeyGuide_HPP
#define UE4SS_SDK_WBP_Ingameconstruction_KeyGuide_HPP

class UWBP_Ingameconstruction_KeyGuide_C : public UUserWidget
{
    class UHorizontalBox* HorizontalBox_46;
    class UBP_PalTextBlock_C* Text_Main;
    TArray<class UWBP_PalKeyGuideIcon_C*> KeyGuideIcons;

    void Setup(TArray<FName>& ActionNames, FText DisplayText);
};

#endif
