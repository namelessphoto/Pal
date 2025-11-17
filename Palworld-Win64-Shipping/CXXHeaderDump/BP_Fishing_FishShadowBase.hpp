#ifndef UE4SS_SDK_BP_Fishing_FishShadowBase_HPP
#define UE4SS_SDK_BP_Fishing_FishShadowBase_HPP

class ABP_Fishing_FishShadowBase_C : public APalFishShadow
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* Mesh;
    class USceneComponent* DefaultSceneRoot;
    FVector RootPoint;
    FVector NextPoint;
    double RotZSpeed;
    double MoveRadius;
    double DelayTimer;
    double DelayTime;
    FVector PickLocation;
    FVector PrevLocation;
    bool IsEscape;
    bool IsHit;
    bool IsReached;
    bool IsPick;
    FRotator EscapeRotation;
    double EscapeSpeed;
    class UNiagaraComponent* SpawnedEffect;
    double EffectScale;
    class UAnimSequence* IdleAnim;
    class UAnimSequence* WalkAnim;
    class UAnimSequence* BattleAnim;
    double HeightOffset;
    double HitSinkOffset;

    void GetSocketMouthLocation(FVector& MouthLocation);
    void FishingHit();
    void EndPick();
    void StartPick(FVector PickLocation);
    void EscapeMove(double DeltaTime);
    void PickMove(double DeltaTime);
    void Update Move(float DeltaTime);
    void RestDelayTimer();
    void CalcNextPoint();
    void SetupMesh();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnInitialized();
    void OnSearchHit(const FVector& PickLocation);
    void OnEscape();
    void OnFishingStart();
    void OnSpawnedRareEffect(class UNiagaraSystem* Effect);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void ExecuteUbergraph_BP_Fishing_FishShadowBase(int32 EntryPoint);
};

#endif
