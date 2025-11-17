#ifndef UE4SS_SDK_WBP_Arena_PalSelect_PalSlot_HPP
#define UE4SS_SDK_WBP_Arena_PalSelect_PalSlot_HPP

class UWBP_Arena_PalSelect_PalSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Select;
    class UWidgetAnimation* Anm_Default;
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;
    FName Character Id;

    void SetPalIcon(class UPalIndividualCharacterParameter* CharacterParameter);
    void SetNowSetting(bool IsSetting);
    void ExecuteUbergraph_WBP_Arena_PalSelect_PalSlot(int32 EntryPoint);
};

#endif
