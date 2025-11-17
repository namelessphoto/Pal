#ifndef UE4SS_SDK_WBP_PalSpectatorHUD_HPP
#define UE4SS_SDK_WBP_PalSpectatorHUD_HPP

class UWBP_PalSpectatorHUD_C : public UPalUserWidgetStackableUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalTextBlock_C* Text_PlayerName;
    class UBP_PalTextBlock_C* Text_UserId;
    class UWBP_Ingame_Chat_Wrapper_C* WBP_Ingame_Chat_Wrapper;
    FPalDataTableRowName_UIInputAction ActionNameEscape;
    FPalDataTableRowName_UIInputAction ActionNameOpenMenu;
    FPalDataTableRowName_UIInputAction ActionNameSpectatePrevPlayer;
    FPalDataTableRowName_UIInputAction ActionNameSpectateNextPlayer;
    FPalDataTableRowName_UIInputAction ActionNameSpectateFreely;
    FPalDataTableRowName_UIInputAction ActionNameIncreaseSpecateMoveSpeed;
    FPalDataTableRowName_UIInputAction ActionNameDecreaseSpecateMoveSpeed;
    FPalDataTableRowName_UIInputAction ActionNameSetHUDVisible;
    FPalDataTableRowName_UIInputAction ActionNameMoveUp;
    FPalDataTableRowName_UIInputAction ActionNameMoveDown;
    bool bIsHUDVisible;
    FTimerHandle DelayedSetupTimerHandle;
    FPalDataTableRowName_UIInputAction ActionNameOpenChat;
    FPalUIActionBindData BindDataActionNameMoveDown;
    FPalUIActionBindData BindDataActionNameMoveUp;
    FPalUIActionBindData BindDataActionNameEscape;
    FPalUIActionBindData BindDataActionNameSetHUDVisible;
    FPalUIActionBindData BindDataActionNameIncreaseSpecateMoveSpeed;
    FPalUIActionBindData BindDataActionNameDecreaseSpecateMoveSpeed;
    FPalUIActionBindData BindDataActionNameOpenChat;
    FPalUIActionBindData BindDataActionNameSpectatePrevPlayer;
    FPalUIActionBindData BindDataActionNameSpectateNextPlayer;
    FPalUIActionBindData BindDataActionNameSpectateFreely;
    FPalUIActionBindData BindDataActionNameOpenMenu;
    FTimerHandle UpdateViewPortWidgetsVisibilityTimerHandle;

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
};

#endif
