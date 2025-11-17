#ifndef UE4SS_SDK_WBP_MainMenu_Cursor_HPP
#define UE4SS_SDK_WBP_MainMenu_Cursor_HPP

class UWBP_MainMenu_Cursor_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_CursorLoop;
    class UImage* Cursor_LB;
    class UImage* Cursor_LB_1;
    class UImage* Cursor_LT;
    class UImage* Cursor_LT_1;
    class UImage* Cursor_RB;
    class UImage* Cursor_RB_1;
    class UImage* Cursor_RT;
    class UImage* Cursor_RT_1;

    void Construct();
    void ExecuteUbergraph_WBP_MainMenu_Cursor(int32 EntryPoint);
};

#endif
