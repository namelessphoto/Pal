#ifndef UE4SS_SDK_BP_PalRegionTriggerBox_HPP
#define UE4SS_SDK_BP_PalRegionTriggerBox_HPP

class ABP_PalRegionTriggerBox_C : public APalRegionAreaTriggerBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_PalRegionTriggerBox(int32 EntryPoint);
};

#endif
