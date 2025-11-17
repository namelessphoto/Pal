#ifndef UE4SS_SDK_WBP_Menu_PlayerGauge_HP_HPP
#define UE4SS_SDK_WBP_Menu_PlayerGauge_HP_HPP

class UWBP_Menu_PlayerGauge_HP_C : public UWBP_Menu_CharacterHPGauge_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Construct();
    void ExecuteUbergraph_WBP_Menu_PlayerGauge_HP(int32 EntryPoint);
};

#endif
