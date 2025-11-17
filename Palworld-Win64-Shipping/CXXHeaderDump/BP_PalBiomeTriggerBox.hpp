#ifndef UE4SS_SDK_BP_PalBiomeTriggerBox_HPP
#define UE4SS_SDK_BP_PalBiomeTriggerBox_HPP

class ABP_PalBiomeTriggerBox_C : public APalBiomeAreaTriggerBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalBiomeEffectController_C* BP_PalBiomeEffectController;
    class UBoxComponent* Box;

    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_PalBiomeTriggerBox(int32 EntryPoint);
};

#endif
