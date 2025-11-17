#ifndef UE4SS_SDK_BP_PalGamemode_HPP
#define UE4SS_SDK_BP_PalGamemode_HPP

class ABP_PalGamemode_C : public APalGameMode
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    FName DefaultPlayerStartTag;

    class AActor* ChoosePlayerStart(class AController* Player);
    class AActor* SpawmDummyNavInvoker(FTransform Transform);
    void BindFunction_InvaderManager(FBindFunction_InvaderManagerSpawn Dummy Nav Invoker Delegate Spawn Dummy Nav Invoker Delegate);
    void InpActEvt_DebugWindow_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void カスタムイベント_0(int32 SoundRadius, FVector EmitLocation, class AActor* Emitter);
    void ExecuteUbergraph_BP_PalGamemode(int32 EntryPoint);
};

#endif
