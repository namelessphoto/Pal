#ifndef UE4SS_SDK_WBP_IngameMenu_Chest_LockNumInput_HPP
#define UE4SS_SDK_WBP_IngameMenu_Chest_LockNumInput_HPP

class UWBP_IngameMenu_Chest_LockNumInput_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Wrong;
    class UWidgetAnimation* Anm_Correct;
    class UImage* InputBase;
    class UImage* On;

    void SetOn(bool IsOn);
    void PlayAuthAnm(bool PlayPass);
    void ExecuteUbergraph_WBP_IngameMenu_Chest_LockNumInput(int32 EntryPoint);
};

#endif
