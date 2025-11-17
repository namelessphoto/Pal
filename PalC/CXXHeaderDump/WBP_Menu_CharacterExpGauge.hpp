#ifndef UE4SS_SDK_WBP_Menu_CharacterExpGauge_HPP
#define UE4SS_SDK_WBP_Menu_CharacterExpGauge_HPP

class UWBP_Menu_CharacterExpGauge_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image;
    class UImage* Image_398;
    class UProgressBar* ProgressBar_58;
    class UBP_PalTextBlock_C* Text_NextExp;
    class UBP_PalTextBlock_C* Text_NowLevelNum;

    void UpdateExp(int64 addExp, int64 oldExp, double nowExpRate);
    void UpdateLevel(int32 NewLevel);
    void OnInitialized();
    void Destruct();
    void ExecuteUbergraph_WBP_Menu_CharacterExpGauge(int32 EntryPoint);
};

#endif
