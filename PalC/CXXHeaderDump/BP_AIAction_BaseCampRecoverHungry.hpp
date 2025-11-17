#ifndef UE4SS_SDK_BP_AIAction_BaseCampRecoverHungry_HPP
#define UE4SS_SDK_BP_AIAction_BaseCampRecoverHungry_HPP

class UBP_AIAction_BaseCampRecoverHungry_C : public UPalAIActionBaseCampRecoverHungry
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Change Recover Hungry Action(TSubclassOf<class UPalAIActionBaseCampRecoverHungryChildBase> ChildActionClass);
    void ActionStart(class APawn* ControlledPawn);
    void ChangeActionApproach();
    void ChangeActionEat();
    void NotifyOrderCommand(const EPalMapBaseCampWorkerOrderType OrderType);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ExecuteUbergraph_BP_AIAction_BaseCampRecoverHungry(int32 EntryPoint);
};

#endif
