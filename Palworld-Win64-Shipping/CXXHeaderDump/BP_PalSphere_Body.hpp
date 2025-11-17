#ifndef UE4SS_SDK_BP_PalSphere_Body_HPP
#define UE4SS_SDK_BP_PalSphere_Body_HPP

class ABP_PalSphere_Body_C : public ABP_PalCaptureBodyBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* SkeletalMesh;
    FVector HitedBallGoalLocation;
    double HitedBallMoveTime;
    double HitedBallMoveTimer;
    class UParticleSystemComponent* CureEffect;
    TEnumAsByte<EPalCaptureSphereState> PalSphereState;
    TArray<bool> JudgedFlagArray;
    double JudgeInterval;
    double JudgeTimer;
    int32 nowJudgePhaseCount;
    class UCurveVector* BallShakeCurve;
    double BallShakeTime;
    double BallShakeTimer;
    double BouncePower;
    double ShakePower;
    double afterShakePassingPhaseEventDelay;
    double afterHitedBallPassingPhaseDelay;
    double flyToSkyDelay;
    class UNiagaraSystem* passingPhaseEffect;
    TArray<double> OriginalRateArray;
    class UNiagaraSystem* AbsorbToBallEffect;
    class UNiagaraSystem* AbsorbToBallCenterEffect;
    class UNiagaraSystem* OpenSphereEffect;
    FPalDataTableRowName_SoundID SoundId_Shake;
    class UAnimSequence* OpenSphereAnim;
    TMap<TEnumAsByte<E_PalCaptureSphereBouncedReason>, UNiagaraSystem*> BounceEffectMap;
    class UPalCaptureBallEffectSettingDataAsset* EffectSettingDataAsset;
    TArray<double> CriticalRateArray;
    class UNiagaraSystem* CriticalEffect;

    void CalculateCaptureRate(int32 CaptureLevel, TArray<double>& rateArray);
    void FindOwnerPlayer(class APalPlayerCharacter*& Player);
    void IsSkipFirstJudge(class UPalCharacterParameterComponent* Parameter, TArray<double>& RateList, bool& isSkip);
    void SetParameterCaptureAbsorbToBallEffectBySize(class UNiagaraComponent* Effect);
    void CheckBouncedReason(TEnumAsByte<E_PalCaptureSphereBouncedReason>& reasonType);
    void PrevIndexFullPercentage(int32 Index, bool& IsFull);
    void BallShakeTick(double DeltaTime);
    void JudgeProcess(int32 JudgeIndex, bool& Result);
    void PlayOpenSphereEffect();
    void PlayBallCenterEffect();
    void PlayCaptureAbsorbToBallEffect();
    void StopTargetPal();
    void SetupInServer(class APalCharacter* TargetCharacter);
    void PlaySoundShake();
    void SetCaptureState(TEnumAsByte<EPalCaptureSphereState> NewState);
    void Judging(double DeltaTime);
    void TickMovement_MoveToSky(double DeltaTime);
    void TickMovement_HitedBall(double DeltaTime);
    void SynchronizeJudgeParameter(const TArray<bool>& JudgeFlagArray, const TArray<double>& OriginalJudgeRateArray, const TArray<double>& CriticalJudgeRateArray);
    void OnShakeBodyToALL();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void CaptureSuccessEvent();
    void PlayCaptureEffectEvent();
    void BounceBallEvent();
    void FlyToSkyEvent(double Delay);
    void DelayPassingPhase(int32 Phase, double DelayTime);
    void DelayPassingPhase_WithEffect(int32 Phase, double DelayTime);
    void OnCompleteCaptureEmissiveEffect(class UPalVisualEffectBase* VisualEffect);
    void OnPassingCapturePhase_イベント_0(int32 PhaseCount, class UPalIndividualCharacterHandle* targetHandle);
    void FailedCapture_OutOfBall();
    void IntoBall(FVector GoolLocation);
    void IntoBallEvent();
    void ExecuteUbergraph_BP_PalSphere_Body(int32 EntryPoint);
};

#endif
