#ifndef UE4SS_SDK_BP_ObjectEmitter_HPP
#define UE4SS_SDK_BP_ObjectEmitter_HPP

class UBP_ObjectEmitter_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class ULightComponent*> LightComponents;
    class UCurveFloat* Light Intensity Curve;
    TArray<class UMeshComponent*> Emission Targets;
    class UCurveFloat* Emission Intensity Curve;

    void Update Emissions();
    void Update Lights();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_ObjectEmitter(int32 EntryPoint);
};

#endif
