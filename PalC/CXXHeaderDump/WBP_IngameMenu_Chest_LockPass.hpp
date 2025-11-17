#ifndef UE4SS_SDK_WBP_IngameMenu_Chest_LockPass_HPP
#define UE4SS_SDK_WBP_IngameMenu_Chest_LockPass_HPP

class UWBP_IngameMenu_Chest_LockPass_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Wrong;
    class UWidgetAnimation* Anm_Correct;
    class UWidgetAnimation* Anm_Setting;
    class UImage* SettingsBase;
    class UBP_PalTextBlock_C* Text_Message;
    class UWBP_CommonButton_C* WBP_CommonButton;
    class UWBP_IngameMenu_Chest_LockNum_C* WBP_IngameMenu_Chest_LockNum_0;
    class UWBP_IngameMenu_Chest_LockNum_C* WBP_IngameMenu_Chest_LockNum_1;
    class UWBP_IngameMenu_Chest_LockNum_C* WBP_IngameMenu_Chest_LockNum_2;
    class UWBP_IngameMenu_Chest_LockNum_C* WBP_IngameMenu_Chest_LockNum_3;
    class UWBP_IngameMenu_Chest_LockNum_C* WBP_IngameMenu_Chest_LockNum_4;
    class UWBP_IngameMenu_Chest_LockNum_C* WBP_IngameMenu_Chest_LockNum_5;
    class UWBP_IngameMenu_Chest_LockNum_C* WBP_IngameMenu_Chest_LockNum_6;
    class UWBP_IngameMenu_Chest_LockNum_C* WBP_IngameMenu_Chest_LockNum_7;
    class UWBP_IngameMenu_Chest_LockNum_C* WBP_IngameMenu_Chest_LockNum_8;
    class UWBP_IngameMenu_Chest_LockNum_C* WBP_IngameMenu_Chest_LockNum_9;
    class UWBP_IngameMenu_Chest_LockNumInput_C* WBP_IngameMenu_Chest_LockNumInput;
    class UWBP_IngameMenu_Chest_LockNumInput_C* WBP_IngameMenu_Chest_LockNumInput_1;
    class UWBP_IngameMenu_Chest_LockNumInput_C* WBP_IngameMenu_Chest_LockNumInput_2;
    class UWBP_IngameMenu_Chest_LockNumInput_C* WBP_IngameMenu_Chest_LockNumInput_3;
    class UPalMapObjectPasswordLockModule* PasswordLockModule;
    TArray<class UWBP_IngameMenu_Chest_LockNum_C*> Numpads;
    TArray<class UWBP_IngameMenu_Chest_LockNumInput_C*> InputNums;
    TArray<int32> InputNumbers;
    FDataTableRowHandle SettingMsgId;
    FDataTableRowHandle CorrectMsgId;
    FDataTableRowHandle WrongMsgId;
    bool Is Authentication;

    class UWidget* BP_GetDesiredFocusTarget();
    FString GetInputNumberStr();
    void OnSetup();
    void OnNumpadClicked(int32 ClickedNum);
    void OnInitialized();
    void CloseAction();
    void Destruct();
    void NotifyAuthenticationResult(bool passed);
    void ResetInput();
    void BndEvt__WBP_IngameMenu_Chest_LockPass_WBP_CommonButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_IngameMenu_Chest_LockPass(int32 EntryPoint);
};

#endif
