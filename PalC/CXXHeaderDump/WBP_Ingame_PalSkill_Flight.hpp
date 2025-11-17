#ifndef UE4SS_SDK_WBP_Ingame_PalSkill_Flight_HPP
#define UE4SS_SDK_WBP_Ingame_PalSkill_Flight_HPP

class UWBP_Ingame_PalSkill_Flight_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_InputHold;
    class UBP_PalTextBlock_C* Text_KeyGuide;
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon;
    bool IsUp;
    FDataTableRowHandle UpMsgId;
    FDataTableRowHandle DownMsgId;

    void AnmEvent_StartInteract();
    void AnmEvent_EndInteract();
    void Construct();
    void OnDownInputMethodChanged(ECommonInputType bNewInputType);
    void ExecuteUbergraph_WBP_Ingame_PalSkill_Flight(int32 EntryPoint);
};

#endif
