#ifndef UE4SS_SDK_BP_HeatSourceBoxComponent_HPP
#define UE4SS_SDK_BP_HeatSourceBoxComponent_HPP

class UBP_HeatSourceBoxComponent_C : public UPalHeatSourceBoxComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 HeatLevel_DayTime;
    int32 HeatLevel_NightTime;

    void ReceiveBeginPlay();
    void Begin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void End(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_HeatSourceBoxComponent(int32 EntryPoint);
};

#endif
