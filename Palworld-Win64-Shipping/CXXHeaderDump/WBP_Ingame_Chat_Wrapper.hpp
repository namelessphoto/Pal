#ifndef UE4SS_SDK_WBP_Ingame_Chat_Wrapper_HPP
#define UE4SS_SDK_WBP_Ingame_Chat_Wrapper_HPP

class UWBP_Ingame_Chat_Wrapper_C : public UPalUserWidget
{
    class UWBP_Ingame_Chat_C* WBP_Ingame_Chat;

    void CanOpenAnyUI(bool& bCanOpenAnyUI);
    void ShowChat();
};

#endif
