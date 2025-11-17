#ifndef UE4SS_SDK_BP_NPCAIController_Oilrig_HPP
#define UE4SS_SDK_BP_NPCAIController_Oilrig_HPP

class ABP_NPCAIController_Oilrig_C : public ABP_NPCAIController_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool StartCombatByOilrigCombatMode;
    double SwimTimer;

    void CheckSwimming(double DeltaTime);
    void ReceiveTick(float DeltaSeconds);
    void ReceivePossess(class APawn* PossessedPawn);
    void ExecuteUbergraph_BP_NPCAIController_Oilrig(int32 EntryPoint);
};

#endif
