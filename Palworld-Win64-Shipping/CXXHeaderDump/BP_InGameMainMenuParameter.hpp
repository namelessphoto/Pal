#ifndef UE4SS_SDK_BP_InGameMainMenuParameter_HPP
#define UE4SS_SDK_BP_InGameMainMenuParameter_HPP

class UBP_InGameMainMenuParameter_C : public UPalHUDDispatchParameterBase
{
    TEnumAsByte<EPalUIInGameMainMenuTabType> TabType;
    EPalBuildObjectTypeA BuildMenuInitialTypeA;
    bool Lock;
    bool bDiscardFirstCancelAction;
    FName QuestId;

};

#endif
