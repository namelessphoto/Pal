#ifndef UE4SS_SDK_BP_ObjectEmitter_HPP
#define UE4SS_SDK_BP_ObjectEmitter_HPP

class UBP_ObjectEmitter_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)
    TArray<class ULightComponent*> LightComponents;                                   // 0x00A8 (size: 0x10)
    class UCurveFloat* Light Intensity Curve;                                         // 0x00B8 (size: 0x8)
    TArray<class UMeshComponent*> Emission Targets;                                   // 0x00C0 (size: 0x10)
    class UCurveFloat* Emission Intensity Curve;                                      // 0x00D0 (size: 0x8)

    void Update Emissions();
    void Update Lights();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_ObjectEmitter(int32 EntryPoint);
}; // Size: 0xD8

#endif
