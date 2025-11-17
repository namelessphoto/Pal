#ifndef UE4SS_SDK_BP_CharaCreNameEditWindowDispatchParameter_HPP
#define UE4SS_SDK_BP_CharaCreNameEditWindowDispatchParameter_HPP

class UBP_CharaCreNameEditWindowDispatchParameter_C : public UPalHUDDispatchParameterBase
{
    FText InName;
    FText outName;
    bool ForPlayer;
    FName OverrideTitleId;

};

#endif
