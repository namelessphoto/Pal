#ifndef UE4SS_SDK_BP_AIActionCombatHeliBase_HPP
#define UE4SS_SDK_BP_AIActionCombatHeliBase_HPP

class UBP_AIActionCombatHeliBase_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool NewVar;
    FVector OilrigCenterPoint;
    double Const_FindTargetRange;

    void IsValid Target(class AActor* TargetActor, bool& Validd);
    void FindTarget(class AActor*& TargetActor);
    void ActionStart(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIActionCombatHeliBase(int32 EntryPoint);
};

#endif
