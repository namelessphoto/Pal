#ifndef UE4SS_SDK_WBP_CommonWarning_HPP
#define UE4SS_SDK_WBP_CommonWarning_HPP

class UWBP_CommonWarning_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Close;
    class UWidgetAnimation* Anm_Open;
    class UBP_PalTextBlock_C* BP_PalTextBlock;
    class UImage* Image_Icon;
    bool Displaying;
    TArray<FName> Crime Ids;
    EPalUICommonWarningType Display Type;
    FWBP_CommonWarning_COnWarningClear OnWarningClear;
    void OnWarningClear(EPalUICommonWarningType WarningType);

    void GetDisplayType(EPalUICommonWarningType& Display Type);
    void Finished_DAD0908E4A3D9DC986076BBB9D0BAB98();
    void SetWarning(FPalUICommonWarningDisplayData WarningData);
    void ClearWarning();
    void ExecuteUbergraph_WBP_CommonWarning(int32 EntryPoint);
    void OnWarningClear__DelegateSignature(EPalUICommonWarningType WarningType);
};

#endif
