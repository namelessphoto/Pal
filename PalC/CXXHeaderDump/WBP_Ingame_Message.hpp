#ifndef UE4SS_SDK_WBP_Ingame_Message_HPP
#define UE4SS_SDK_WBP_Ingame_Message_HPP

class UWBP_Ingame_Message_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Color;
    class UWidgetAnimation* Anm_Out;
    class UWidgetAnimation* Anm_In;
    class UBP_PalTextBlock_C* BP_PalTextBlock;
    class UImage* Image_Base;
    class UImage* Image_Base_Flash;
    bool IsShow;

    void SetMessageText(FName TextId);
    void AnmEvent_In();
    void AnmEvent_Out();
    void ExecuteUbergraph_WBP_Ingame_Message(int32 EntryPoint);
};

#endif
