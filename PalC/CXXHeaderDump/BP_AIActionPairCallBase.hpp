#ifndef UE4SS_SDK_BP_AIActionPairCallBase_HPP
#define UE4SS_SDK_BP_AIActionPairCallBase_HPP

class UBP_AIActionPairCallBase_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AActor* Trainer;
    bool Petting;
    TSubclassOf<class UBP_ActionPairBehaviorBase_C> PairBehaviorActionClass;

    void OnStartPair();
    void CreatePairBehaviorActionDynamicParameter(FActionDynamicParameter& DynamicParameter);
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void OnFinish();
    void ExecuteUbergraph_BP_AIActionPairCallBase(int32 EntryPoint);
};

#endif
