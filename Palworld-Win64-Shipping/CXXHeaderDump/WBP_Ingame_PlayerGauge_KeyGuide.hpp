#ifndef UE4SS_SDK_WBP_Ingame_PlayerGauge_KeyGuide_HPP
#define UE4SS_SDK_WBP_Ingame_PlayerGauge_KeyGuide_HPP

class UWBP_Ingame_PlayerGauge_KeyGuide_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Base;
    class UBP_PalTextBlock_C* Text_KeyGuide;
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon_ChangeBallAiming_1;
    FName bindActionName;
    TMap<class FName, class FDataTableRowHandle> MsgIDMap;

    void OnInitialized();
    void ExecuteUbergraph_WBP_Ingame_PlayerGauge_KeyGuide(int32 EntryPoint);
};

#endif
