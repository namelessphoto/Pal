#ifndef UE4SS_SDK_WBP_Ingame_Message_HPP
#define UE4SS_SDK_WBP_Ingame_Message_HPP

class UWBP_Ingame_Message_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Color;                                                // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Out;                                                  // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock;                                        // 0x0298 (size: 0x8)
    class UImage* Image_Base;                                                         // 0x02A0 (size: 0x8)
    class UImage* Image_Base_Flash;                                                   // 0x02A8 (size: 0x8)
    bool IsShow;                                                                      // 0x02B0 (size: 0x1)

    void SetMessageText(FName TextId);
    void AnmEvent_In();
    void AnmEvent_Out();
    void ExecuteUbergraph_WBP_Ingame_Message(int32 EntryPoint);
}; // Size: 0x2B1

#endif
