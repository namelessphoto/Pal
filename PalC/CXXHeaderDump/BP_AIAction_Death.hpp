#ifndef UE4SS_SDK_BP_AIAction_Death_HPP
#define UE4SS_SDK_BP_AIAction_Death_HPP

class UBP_AIAction_Death_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool IsPlayer;
    int32 BoneIndex;

    bool IsInterruptibleBySleep();
    bool IsInterruptibleByRecoverHungry();
    void GetDeathActionClass(TSubclassOf<class UBP_ActionDeath_C>& DeathAction);
    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void カスタムイベント_0(class UPalIndividualCharacterParameter* IndividualParameter);
    void ActionResume(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_Death(int32 EntryPoint);
};

#endif
