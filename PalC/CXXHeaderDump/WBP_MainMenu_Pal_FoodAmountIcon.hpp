#ifndef UE4SS_SDK_WBP_MainMenu_Pal_FoodAmountIcon_HPP
#define UE4SS_SDK_WBP_MainMenu_Pal_FoodAmountIcon_HPP

class UWBP_MainMenu_Pal_FoodAmountIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_OFF;
    class UWidgetAnimation* Anm_ON;
    class UImage* Icon_OFF;
    class UImage* Icon_ON;

    void AnmEvent_On();
    void AnmEvent_Off();
    void ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmountIcon(int32 EntryPoint);
};

#endif
