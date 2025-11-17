#ifndef UE4SS_SDK_BP_PalActivatePalPointLightBox_HPP
#define UE4SS_SDK_BP_PalActivatePalPointLightBox_HPP

class ABP_PalActivatePalPointLightBox_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;

    void SetActiveDayTimeLight(class AActor* Actor, bool Active);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_PalActivatePalPointLightBox(int32 EntryPoint);
};

#endif
