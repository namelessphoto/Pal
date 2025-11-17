#ifndef UE4SS_SDK_BP_PalRideMarkerSaddle_HPP
#define UE4SS_SDK_BP_PalRideMarkerSaddle_HPP

class UBP_PalRideMarkerSaddle_C : public UPalRideMarkerComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Effect;
    double MinSpeed;
    double MaxSpeed;

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnChangeRiding_イベント_0(bool IsEnable);
    void ExecuteUbergraph_BP_PalRideMarkerSaddle(int32 EntryPoint);
};

#endif
