#ifndef UE4SS_SDK_BP_CopyMesh_ReturnToBallEmissive_HPP
#define UE4SS_SDK_BP_CopyMesh_ReturnToBallEmissive_HPP

class ABP_CopyMesh_ReturnToBallEmissive_C : public APalCopyMeshVisualEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool IsEnd;
    double DissolveTime;
    double EmissionTimer;
    double CurrentEmission;
    double EmissionMax;
    double EmissionTime;
    double DissolveTimer;
    double DissolveStartTime;
    double CurrentDissolve;
    double NSStartTime;
    bool IsEndVisualEffect;

    void PlayPalReturnSound();
    void SetFade(double Value);
    void SetEmission(double Value);
    void ReceiveBeginPlay();
    void End();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_CopyMesh_ReturnToBallEmissive(int32 EntryPoint);
};

#endif
