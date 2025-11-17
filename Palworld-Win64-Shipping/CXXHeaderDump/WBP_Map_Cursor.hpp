#ifndef UE4SS_SDK_WBP_Map_Cursor_HPP
#define UE4SS_SDK_WBP_Map_Cursor_HPP

class UWBP_Map_Cursor_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Focus;
    class UWidgetAnimation* Anm_Loop;

    void AnmEvent_Reset();
    void AnmEvent_Focus();
    void AnmEvent_Loop();
    void AnmEvent_Unfocus();
    void Construct();
    void ExecuteUbergraph_WBP_Map_Cursor(int32 EntryPoint);
};

#endif
