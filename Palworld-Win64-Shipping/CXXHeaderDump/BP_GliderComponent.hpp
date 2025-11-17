#ifndef UE4SS_SDK_BP_GliderComponent_HPP
#define UE4SS_SDK_BP_GliderComponent_HPP

class UBP_GliderComponent_C : public UPalGliderComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalCharacterMovementComponent* CharacterMovement;
    class UNiagaraComponent* GlidingEffect;
    class APalGliderObject* CurrentGliderObject;
    FName GliderDisableFlag;
    TSubclassOf<class APalGliderObject> CurrentGliderActorClass;
    FTimerHandle TimerHandle;

    void CheckReturnSpawnedOtomo();
    void SpawnGlidingEffect();
    void Setup();
    void OnInitializeGlider();
    void OnGlidingCancleAction();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void OnStartGliding();
    void OnEndGliding();
    void OnChangeGliderVisibility(bool bIsVisibility);
    void カスタムイベント();
    void ExecuteUbergraph_BP_GliderComponent(int32 EntryPoint);
};

#endif
