#ifndef UE4SS_SDK_WBP_PalArenaSpectatorHUD_HPP
#define UE4SS_SDK_WBP_PalArenaSpectatorHUD_HPP

class UWBP_PalArenaSpectatorHUD_C : public UPalUserWidgetStackableUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_PlayerName;                             // 0x0428 (size: 0x8)
    class UCanvasPanel* CanvasPanel_PlayerName;                                       // 0x0430 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0438 (size: 0x8)
    class UImage* Image_Base;                                                         // 0x0440 (size: 0x8)
    class UWBP_Ingame_Chat_Wrapper_C* WBP_Ingame_Chat_Wrapper;                        // 0x0448 (size: 0x8)
    class UWBP_PalKeyGuideIconAndText_C* WBP_PalKeyGuideIconAndText_Exit;             // 0x0450 (size: 0x8)
    class UWBP_PalKeyGuideIconAndText_C* WBP_PalKeyGuideIconAndText_Free;             // 0x0458 (size: 0x8)
    class UWBP_PalKeyGuideIconAndText_C* WBP_PalKeyGuideIconAndText_Player;           // 0x0460 (size: 0x8)
    class UWBP_PalKeyGuideIconAndText_C* WBP_PalKeyGuideIconAndText_TopDown;          // 0x0468 (size: 0x8)
    FPalDataTableRowName_UIInputAction ActionNameEscape;                              // 0x0470 (size: 0x8)
    FPalDataTableRowName_UIInputAction ActionNameSpectateNextPlayer;                  // 0x0478 (size: 0x8)
    FPalDataTableRowName_UIInputAction ActionNameSpectateFreely;                      // 0x0480 (size: 0x8)
    FTimerHandle DelayedSetupTimerHandle;                                             // 0x0488 (size: 0x8)
    FPalDataTableRowName_UIInputAction ActionNameOpenChat;                            // 0x0490 (size: 0x8)
    FPalUIActionBindData BindDataActionNameEscape;                                    // 0x0498 (size: 0x4)
    FPalUIActionBindData BindDataActionNameOpenChat;                                  // 0x049C (size: 0x4)
    FPalUIActionBindData BinDataActionNameSpectateNextPlayer;                         // 0x04A0 (size: 0x4)
    FPalUIActionBindData BindDataActionNameSpectateFreely;                            // 0x04A4 (size: 0x4)
    FPalDataTableRowName_UIInputAction ActionNameSpectateTopDown;                     // 0x04A8 (size: 0x8)
    FPalUIActionBindData BindDataActionNameTopDown;                                   // 0x04B0 (size: 0x4)

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
}; // Size: 0x4B4

#endif
