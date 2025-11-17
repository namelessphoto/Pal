#ifndef UE4SS_SDK_WBP_Arena_RuleSetting_Pal_HPP
#define UE4SS_SDK_WBP_Arena_RuleSetting_Pal_HPP

class UWBP_Arena_RuleSetting_Pal_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* Horizontal_Title_Ban_1;
    class UHorizontalBox* HorizontalBox_65;
    class UScrollBox* ScrollBox;
    class UWBP_CommonButton_C* WBP_CommonButton_BanAll;
    class UWBP_CommonButton_C* WBP_CommonButton_EnableAll;
    class UWBP_Menu_btn_C* WBP_Menu_btn;
    class UWrapBox* WrapBox;
    FWBP_Arena_RuleSetting_Pal_COnCloseButtonClicked OnCloseButtonClicked;
    void OnCloseButtonClicked();
    TMap<class FName, class UWBP_Arena_RuleSetting_PalListButton_C*> PalList;
    FWBP_Arena_RuleSetting_Pal_COnToggleCharacterRestrict OnToggleCharacterRestrict;
    void OnToggleCharacterRestrict(FName CharacterID, class UWBP_Arena_RuleSetting_PalListButton_C* Widget);
    FWBP_Arena_RuleSetting_Pal_COnChangeAll OnChangeAll;
    void OnChangeAll(bool IsBan);

    void IsCharacterEncounted(FName CharacterID, bool& Encounted);
    void OnCharacterButtonClick(FName CharacterID);
    void SetupPalList();
    void Setup(TArray<FPalDataTableRowName_PalMonsterData>& RestrictPals, bool Changeable);
    void BndEvt__WBP_Arena_RuleSetting_Pal_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void OnInitialized();
    void BndEvt__WBP_Arena_RuleSetting_Pal_WBP_CommonButton_BanAll_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__WBP_Arena_RuleSetting_Pal_WBP_CommonButton_EnableAll_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_Arena_RuleSetting_Pal(int32 EntryPoint);
    void OnChangeAll__DelegateSignature(bool IsBan);
    void OnToggleCharacterRestrict__DelegateSignature(FName CharacterID, class UWBP_Arena_RuleSetting_PalListButton_C* Widget);
    void OnCloseButtonClicked__DelegateSignature();
};

#endif
