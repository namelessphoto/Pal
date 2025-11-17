#ifndef UE4SS_SDK_NiagaraAnimNotifies_HPP
#define UE4SS_SDK_NiagaraAnimNotifies_HPP

struct FCurveParameterPair
{
    FName AnimCurveName;
    FName UserVariableName;

};

class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{
    class UNiagaraSystem* Template;
    FName SocketName;
    FVector LocationOffset;
    FRotator RotationOffset;
    bool bDestroyAtEnd;

    class UFXSystemComponent* GetSpawnedEffect(class UMeshComponent* MeshComp);
};

class UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect
{
    bool bEnableNormalizedNotifyProgress;
    FName NotifyProgressUserParameter;
    TArray<FCurveParameterPair> AnimCurves;

    float GetNotifyProgress(class UMeshComponent* MeshComp);
};

class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{
    class UNiagaraSystem* Template;
    FVector LocationOffset;
    FRotator RotationOffset;
    FVector Scale;
    bool bAbsoluteScale;
    uint8 Attached;
    FName SocketName;

    class UFXSystemComponent* GetSpawnedEffect();
};

#endif
