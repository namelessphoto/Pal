#ifndef UE4SS_SDK_BP_PalOilrigController_HPP
#define UE4SS_SDK_BP_PalOilrigController_HPP

class ABP_PalOilrigController_C : public APalOilrigController
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Debug_Mesh;
    class UBP_OilrigMachineSpawnerComponent_C* BP_OilrigMachineSpawnerComponent;
    class USceneComponent* DefaultSceneRoot;

    void SoundStop();
    void ReceiveTick(float DeltaSeconds);
    void OnStartCombatToAll_BP();
    void ExecuteUbergraph_BP_PalOilrigController(int32 EntryPoint);
};

#endif
