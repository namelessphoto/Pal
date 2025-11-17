#ifndef UE4SS_SDK_WBP_PalPossessItemIcon_HPP
#define UE4SS_SDK_WBP_PalPossessItemIcon_HPP

class UWBP_PalPossessItemIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Red;
    class UWidgetAnimation* Anm_Orange;
    class UWidgetAnimation* Anm_Blue;
    class UWidgetAnimation* Anm_Loop;
    class UWidgetAnimation* Anm_Close;
    class UWidgetAnimation* Anm_Open;
    class UImage* BaseFlare;
    class UImage* Flare;
    class UImage* Line;
    class UImage* Shadow;
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;
    FWBP_PalPossessItemIcon_COnFinishedClose OnFinishedClose;
    void OnFinishedClose();

    void Finished_8EA3005E48EF792C3516879160C3F958();
    void Finished_D25F024E49DE41380A3843A691EA22D3();
    void AnmEvent_Open();
    void AnmEvent_Close();
    void ExecuteUbergraph_WBP_PalPossessItemIcon(int32 EntryPoint);
    void OnFinishedClose__DelegateSignature();
};

#endif
