#ifndef UE4SS_SDK_WBP_PalSpectatorHUD_HPP
#define UE4SS_SDK_WBP_PalSpectatorHUD_HPP

class UWBP_PalSpectatorHUD_C : public UPalUserWidgetStackableUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PlayerName;                                        // 0x0428 (size: 0x8)
    class UBP_PalTextBlock_C* Text_UserId;                                            // 0x0430 (size: 0x8)
    class UWBP_Ingame_Chat_Wrapper_C* WBP_Ingame_Chat_Wrapper;                        // 0x0438 (size: 0x8)
    FPalDataTableRowName_UIInputAction ActionNameEscape;                              // 0x0440 (size: 0x8)
    FPalDataTableRowName_UIInputAction ActionNameOpenMenu;                            // 0x0448 (size: 0x8)
    FPalDataTableRowName_UIInputAction ActionNameSpectatePrevPlayer;                  // 0x0450 (size: 0x8)
    FPalDataTableRowName_UIInputAction ActionNameSpectateNextPlayer;                  // 0x0458 (size: 0x8)
    FPalDataTableRowName_UIInputAction ActionNameSpectateFreely;                      // 0x0460 (size: 0x8)
    FPalDataTableRowName_UIInputAction ActionNameIncreaseSpecateMoveSpeed;            // 0x0468 (size: 0x8)
    FPalDataTableRowName_UIInputAction ActionNameDecreaseSpecateMoveSpeed;            // 0x0470 (size: 0x8)
    FPalDataTableRowName_UIInputAction ActionNameSetHUDVisible;                       // 0x0478 (size: 0x8)
    FPalDataTableRowName_UIInputAction ActionNameMoveUp;                              // 0x0480 (size: 0x8)
    FPalDataTableRowName_UIInputAction ActionNameMoveDown;                            // 0x0488 (size: 0x8)
    bool bIsHUDVisible;                                                               // 0x0490 (size: 0x1)
    FTimerHandle DelayedSetupTimerHandle;                                             // 0x0498 (size: 0x8)
    FPalDataTableRowName_UIInputAction ActionNameOpenChat;                            // 0x04A0 (size: 0x8)
    FPalUIActionBindData BindDataActionNameMoveDown;                                  // 0x04A8 (size: 0x4)
    FPalUIActionBindData BindDataActionNameMoveUp;                                    // 0x04AC (size: 0x4)
    FPalUIActionBindData BindDataActionNameEscape;                                    // 0x04B0 (size: 0x4)
    FPalUIActionBindData BindDataActionNameSetHUDVisible;                             // 0x04B4 (size: 0x4)
    FPalUIActionBindData BindDataActionNameIncreaseSpecateMoveSpeed;                  // 0x04B8 (size: 0x4)
    FPalUIActionBindData BindDataActionNameDecreaseSpecateMoveSpeed;                  // 0x04BC (size: 0x4)
    FPalUIActionBindData BindDataActionNameOpenChat;                                  // 0x04C0 (size: 0x4)
    FPalUIActionBindData BindDataActionNameSpectatePrevPlayer;                        // 0x04C4 (size: 0x4)
    FPalUIActionBindData BindDataActionNameSpectateNextPlayer;                        // 0x04C8 (size: 0x4)
    FPalUIActionBindData BindDataActionNameSpectateFreely;                            // 0x04CC (size: 0x4)
    FPalUIActionBindData BindDataActionNameOpenMenu;                                  // 0x04D0 (size: 0x4)
    FTimerHandle UpdateViewPortWidgetsVisibilityTimerHandle;                          // 0x04D8 (size: 0x8)

    void OnSpectateNextPlayer(FString PlayerName, FString NickName, FString PlayerUId, FString UserId);
    void SetViewportWidgetsVisiblity(ESlateVisibility Visibility);
    void RequestOpenChat();
    void SetUILayerVisibility(bool bIsHide, FGameplayTag LayerTagName);
    void DoNothing();
    void SetHUDVisible();
    void OpenMenu();
    void DecreaseSpectateMoveSpeed();
    void IncreaseSpectateMoveSpeed();
    void SpectateFreely();
    void SpectatePrevPlayer();
    void SpectateNextPlayer();
    void EndSpectate();
    void UnRegisterInputActions();
    void RegisterInputActions();
    void OnSetup();
    void OnClosed();
    void DelayedSetup();
    void UpdateViewPortWidgetsVisibility();
    void ExecuteUbergraph_WBP_PalSpectatorHUD(int32 EntryPoint);
}; // Size: 0x4E0

#endif
