#ifndef UE4SS_SDK_WBP_PalRecruite_Test_HPP
#define UE4SS_SDK_WBP_PalRecruite_Test_HPP

class UWBP_PalRecruite_Test_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_CommonButton_C* WBP_CommonButton;
    class UWBP_CommonButton_C* WBP_CommonButton_1;
    class UWBP_PalCommonInfo_SaveParameter_C* WBP_PalCommonInfo_SaveParameter;
    FWBP_PalRecruite_Test_COnRecruit OnRecruit;
    void OnRecruit();

    void DisplayPalInfo(FPalIndividualCharacterSaveParameter displayParameter);
    void OnSetup();
    void BndEvt__WBP_PalRecruite_Test_WBP_CommonButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__WBP_PalRecruite_Test_WBP_CommonButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_PalRecruite_Test(int32 EntryPoint);
    void OnRecruit__DelegateSignature();
};

#endif
