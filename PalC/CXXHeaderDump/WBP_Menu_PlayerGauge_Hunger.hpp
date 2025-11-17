#ifndef UE4SS_SDK_WBP_Menu_PlayerGauge_Hunger_HPP
#define UE4SS_SDK_WBP_Menu_PlayerGauge_Hunger_HPP

class UWBP_Menu_PlayerGauge_Hunger_C : public UWBP_Menu_CharacterHungerGauge_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Construct();
    void ExecuteUbergraph_WBP_Menu_PlayerGauge_Hunger(int32 EntryPoint);
};

#endif
