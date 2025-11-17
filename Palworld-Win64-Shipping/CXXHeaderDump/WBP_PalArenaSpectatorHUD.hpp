#ifndef UE4SS_SDK_WBP_PalArenaSpectatorHUD_HPP
#define UE4SS_SDK_WBP_PalArenaSpectatorHUD_HPP

class UWBP_PalArenaSpectatorHUD_C : public UPalUserWidgetStackableUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalTextBlock_C* BP_PalTextBlock_PlayerName;
    class UCanvasPanel* CanvasPanel_PlayerName;
    class UImage* Image_1;
    class UImage* Image_Base;
    class UWBP_Ingame_Chat_Wrapper_C* WBP_Ingame_Chat_Wrapper;
    class UWBP_PalKeyGuideIconAndText_C* WBP_PalKeyGuideIconAndText_Exit;
    class UWBP_PalKeyGuideIconAndText_C* WBP_PalKeyGuideIconAndText_Free;
    class UWBP_PalKeyGuideIconAndText_C* WBP_PalKeyGuideIconAndText_Player;
    class UWBP_PalKeyGuideIconAndText_C* WBP_PalKeyGuideIconAndText_TopDown;
    FPalDataTableRowName_UIInputAction ActionNameEscape;
    FPalDataTableRowName_UIInputAction ActionNameSpectateNextPlayer;
    FPalDataTableRowName_UIInputAction ActionNameSpectateFreely;
    FTimerHandle DelayedSetupTimerHandle;
    FPalDataTableRowName_UIInputAction ActionNameOpenChat;
    FPalUIActionBindData BindDataActionNameEscape;
    FPalUIActionBindData BindDataActionNameOpenChat;
    FPalUIActionBindData BinDataActionNameSpectateNextPlayer;
    FPalUIActionBindData BindDataActionNameSpectateFreely;
    FPalDataTableRowName_UIInputAction ActionNameSpectateTopDown;
    FPalUIActionBindData BindDataActionNameTopDown;

    void On Spectate Next Player(FString PlayerName, EPalArenaPlayerIndex IndexType);
    void SetUILayerVisibility(bool bIsHide, FGameplayTag LayerTagName);
    void UnRegisterInputActions();
    void RegisterInputActions();
    void RequestOpenChat();
    void Spectate TopDown();
    void SpectateFreely();
    void SpectateNextPlayer();
    void EndSpectate();
    void OnSetup();
    void OnClosed();
    void ExecuteUbergraph_WBP_PalArenaSpectatorHUD(int32 EntryPoint);
};

#endif
