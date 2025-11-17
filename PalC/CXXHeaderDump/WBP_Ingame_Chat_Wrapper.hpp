#ifndef UE4SS_SDK_WBP_Ingame_Chat_Wrapper_HPP
#define UE4SS_SDK_WBP_Ingame_Chat_Wrapper_HPP

class UWBP_Ingame_Chat_Wrapper_C : public UPalUserWidget
{
    class UWBP_Ingame_Chat_C* WBP_Ingame_Chat;                                        // 0x0408 (size: 0x8)

    void CanOpenAnyUI(bool& bCanOpenAnyUI);
    void ShowChat();
}; // Size: 0x410

#endif
