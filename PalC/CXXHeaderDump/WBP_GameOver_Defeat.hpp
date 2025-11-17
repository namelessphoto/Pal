#ifndef UE4SS_SDK_WBP_GameOver_Defeat_HPP
#define UE4SS_SDK_WBP_GameOver_Defeat_HPP

class UWBP_GameOver_Defeat_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Close;
    class UWidgetAnimation* Anm_Open;
    class UImage* BGBlack;
    class UHorizontalBox* HorizontalBox_DropPal;
    class UHorizontalBox* HorizontalBox_RespawnTimer;
    class UImage* Image_Scroll;
    class UImage* Image_Scroll_0;
    class UImage* Image_Scroll_1;
    class UImage* Image_Scroll_2;
    class UBP_PalTextBlock_C* Text_DropItemInfo;
    class UBP_PalTextBlock_C* Text_HardcoreInfo;
    class UBP_PalTextBlock_C* Text_Second;
    class UVerticalBox* VerticalBox_DropInfo;
    class UVerticalBox* VerticalBox_DropPalIcon;
    class UWBP_CommonButton_C* WBP_CommonButton;
    class UWBP_CommonButton_C* WBP_CommonButton_ResetCharacter;
    FWBP_GameOver_Defeat_COnFinishedOpen OnFinishedOpen;
    void OnFinishedOpen();
    FWBP_GameOver_Defeat_COnFinishedClose OnFinishedClose;
    void OnFinishedClose();
    FWBP_GameOver_Defeat_COnClickedRespawn OnClickedRespawn;
    void OnClickedRespawn();
    FDataTableRowHandle DropInventoryMsgID;
    FDataTableRowHandle DropAllItemMsgID;
    FWBP_GameOver_Defeat_COnClickResetCharacter OnClickResetCharacter;
    void OnClickResetCharacter();

    void SetFocusToResetCharacterButton();
    void SetHardcoreInfo();
    void SetDeathPenaltyMode(EPalOptionWorldDeathPenalty PenaltyMode);
    void SetDropPalInfo(TArray<FPalLogInfo_DropPal>& DropPalInfo);
    void Hide Respawn Timer();
    void SetRemainingTime(int32 RemainingSecond);
    void Set Focus to Respawn Button();
    void Finished_58EC9B6A4AC75462EDBD71B398D95E41();
    void Finished_D92A1E7344709CE3A6F44587549DFD19();
    void AnmEvent_Open();
    void AnmEvent_Close();
    void Construct();
    void Destruct();
    void BndEvt__WBP_GameOver_Defeat_WBP_CommonButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__WBP_GameOver_Defeat_WBP_CommonButton_RecreateCharacter_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_GameOver_Defeat(int32 EntryPoint);
    void OnClickResetCharacter__DelegateSignature();
    void OnClickedRespawn__DelegateSignature();
    void OnFinishedClose__DelegateSignature();
    void OnFinishedOpen__DelegateSignature();
};

#endif
