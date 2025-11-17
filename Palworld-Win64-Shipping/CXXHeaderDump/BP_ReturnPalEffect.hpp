#ifndef UE4SS_SDK_BP_ReturnPalEffect_HPP
#define UE4SS_SDK_BP_ReturnPalEffect_HPP

class ABP_ReturnPalEffect_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class UNiagaraComponent* Effect;
    FVector StartLocation;
    class APalCharacter* ForPlayer;
    double MaxLengthPerSec;
    bool DestoryNextFrame;
    class UNiagaraSystem* CacheDisappearBurstEffect;
    class UNiagaraSystem* CacheDisappearEffect;
    bool IsStartReturn;
    FVector LerpStartPos;
    double LerpTimer;
    double Progress;
    class UCurveFloat* CurveForLerp;
    class UCurveFloat* CurveForUpOffset;
    bool IsMeatCutPal;

    void StopTrail();
    void TickEffectPosition(double DeltaTime);
    void DestroySelf();
    void StartReturnInternal();
    void StartReturn(class APalCharacter* ReturnPal, class APalCharacter* ForPlayer);
    void OnLoaded_A9820E7D460282848A62DB870A68FEC9(class UObject* Loaded);
    void OnLoaded_FEF66AE74F6F27BBF50A98AACBCB911B(class UObject* Loaded);
    void OnLoaded_C8768D9B48C9921C96A17987152DB6B7(class UObject* Loaded);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void LoadAndSpawnEffect(TSoftObjectPtr<UNiagaraSystem> EffectPath, FTransform SpawnTransform);
    void StartReturn_ForNetwork(class APalCharacter* OtomoPal, class APalCharacter* Player);
    void ExecuteUbergraph_BP_ReturnPalEffect(int32 EntryPoint);
};

#endif
