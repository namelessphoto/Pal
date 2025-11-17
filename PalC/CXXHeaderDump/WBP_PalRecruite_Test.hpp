#ifndef UE4SS_SDK_WBP_PalRecruite_Test_HPP
#define UE4SS_SDK_WBP_PalRecruite_Test_HPP

class UWBP_PalRecruite_Test_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton;                                      // 0x0438 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton_1;                                    // 0x0440 (size: 0x8)
    class UWBP_PalCommonInfo_SaveParameter_C* WBP_PalCommonInfo_SaveParameter;        // 0x0448 (size: 0x8)
    FWBP_PalRecruite_Test_COnRecruit OnRecruit;                                       // 0x0450 (size: 0x10)
    void OnRecruit();

    void DisplayPalInfo(FPalIndividualCharacterSaveParameter displayParameter);
    void OnSetup();
    void BndEvt__WBP_PalRecruite_Test_WBP_CommonButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__WBP_PalRecruite_Test_WBP_CommonButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_PalRecruite_Test(int32 EntryPoint);
    void OnRecruit__DelegateSignature();
}; // Size: 0x460

#endif
