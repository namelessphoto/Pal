#ifndef UE4SS_SDK_WBP_Menu_CharacterExpGauge_HPP
#define UE4SS_SDK_WBP_Menu_CharacterExpGauge_HPP

class UWBP_Menu_CharacterExpGauge_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0608 (size: 0x8)
    class UImage* Image;                                                              // 0x0610 (size: 0x8)
    class UImage* Image_398;                                                          // 0x0618 (size: 0x8)
    class UProgressBar* ProgressBar_58;                                               // 0x0620 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NextExp;                                           // 0x0628 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowLevelNum;                                       // 0x0630 (size: 0x8)

    void UpdateExp(int64 addExp, int64 oldExp, double nowExpRate);
    void UpdateLevel(int32 NewLevel);
    void OnInitialized();
    void Destruct();
    void ExecuteUbergraph_WBP_Menu_CharacterExpGauge(int32 EntryPoint);
}; // Size: 0x638

#endif
