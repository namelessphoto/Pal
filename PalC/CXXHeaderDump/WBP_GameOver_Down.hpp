#ifndef UE4SS_SDK_WBP_GameOver_Down_HPP
#define UE4SS_SDK_WBP_GameOver_Down_HPP

class UWBP_GameOver_Down_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalTextBlock_C* BP_PalTextBlock_CountDown;
    class UCanvasPanel* CanvasPanel_CountDown;
    class UImage* RoundProgress;
    class UWBP_Ingame_Interact_C* WBP_Ingame_Interact;
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;
    bool CurrentInRescue;
    FPalDataTableRowName_UIInputAction UIInputAction;
    FPalUIActionBindData Trigger Action Handle;
    FPalUIActionBindData End Trigger Actionhandle;
    double longPushTime;
    bool PressingGiveup;
    double CurrentPressedTime;
    FWBP_GameOver_Down_COnGiveup OnGiveup;
    void OnGiveup();
    FWBP_GameOver_Down_COnCreateRescueWidget OnCreateRescueWidget;
    void OnCreateRescueWidget(class UWBP_GameOver_Rescue_C* Widget);
    FDataTableRowHandle GiveupMsgId;
    bool Is Partner Skill Revive;

    void CencelPartnerSkillReive();
    class UWidget* BP_GetDesiredFocusTarget();
    void Setup();
    void EndTriggerInteract();
    void StartTriggerInteract();
    void Unregister Action();
    void RegisterAction(bool isInputConsume);
    void UpdateDying(double Remain, double Max);
    void OnSetup();
    void CloseWidget();
    void SetInRescue(bool InRescue);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Destruct();
    void Construct();
    void CustomEvent();
    void ExecuteUbergraph_WBP_GameOver_Down(int32 EntryPoint);
    void OnCreateRescueWidget__DelegateSignature(class UWBP_GameOver_Rescue_C* Widget);
    void OnGiveup__DelegateSignature();
};

#endif
