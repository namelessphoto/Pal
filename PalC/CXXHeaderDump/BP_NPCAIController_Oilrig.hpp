#ifndef UE4SS_SDK_BP_NPCAIController_Oilrig_HPP
#define UE4SS_SDK_BP_NPCAIController_Oilrig_HPP

class ABP_NPCAIController_Oilrig_C : public ABP_NPCAIController_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A8 (size: 0x8)
    bool StartCombatByOilrigCombatMode;                                               // 0x05B0 (size: 0x1)
    double SwimTimer;                                                                 // 0x05B8 (size: 0x8)

    void CheckSwimming(double DeltaTime);
    void ReceiveTick(float DeltaSeconds);
    void ReceivePossess(class APawn* PossessedPawn);
    void ExecuteUbergraph_BP_NPCAIController_Oilrig(int32 EntryPoint);
}; // Size: 0x5C0

#endif
