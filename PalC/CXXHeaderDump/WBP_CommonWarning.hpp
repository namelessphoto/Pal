#ifndef UE4SS_SDK_WBP_CommonWarning_HPP
#define UE4SS_SDK_WBP_CommonWarning_HPP

class UWBP_CommonWarning_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWidgetAnimation* Anm_Close;                                                // 0x0410 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0418 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock;                                        // 0x0420 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0428 (size: 0x8)
    bool Displaying;                                                                  // 0x0430 (size: 0x1)
    TArray<FName> Crime Ids;                                                          // 0x0438 (size: 0x10)
    EPalUICommonWarningType Display Type;                                             // 0x0448 (size: 0x1)
    FWBP_CommonWarning_COnWarningClear OnWarningClear;                                // 0x0450 (size: 0x10)
    void OnWarningClear(EPalUICommonWarningType WarningType);

    void GetDisplayType(EPalUICommonWarningType& Display Type);
    void Finished_DAD0908E4A3D9DC986076BBB9D0BAB98();
    void SetWarning(FPalUICommonWarningDisplayData WarningData);
    void ClearWarning();
    void ExecuteUbergraph_WBP_CommonWarning(int32 EntryPoint);
    void OnWarningClear__DelegateSignature(EPalUICommonWarningType WarningType);
}; // Size: 0x460

#endif
