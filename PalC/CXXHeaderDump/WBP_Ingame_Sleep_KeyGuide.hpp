#ifndef UE4SS_SDK_WBP_Ingame_Sleep_KeyGuide_HPP
#define UE4SS_SDK_WBP_Ingame_Sleep_KeyGuide_HPP

class UWBP_Ingame_Sleep_KeyGuide_C : public UUserWidget
{
    class UBP_PalTextBlock_C* Text;
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon;

    void Setup(FName TextId, const FName ActionName);
};

#endif
