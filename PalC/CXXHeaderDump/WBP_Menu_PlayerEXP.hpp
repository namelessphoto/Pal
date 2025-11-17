#ifndef UE4SS_SDK_WBP_Menu_PlayerEXP_HPP
#define UE4SS_SDK_WBP_Menu_PlayerEXP_HPP

class UWBP_Menu_PlayerEXP_C : public UWBP_Menu_CharacterExpGauge_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Construct();
    void ExecuteUbergraph_WBP_Menu_PlayerEXP(int32 EntryPoint);
};

#endif
