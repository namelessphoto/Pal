#ifndef UE4SS_SDK_BP_Fishing_FishShadowBase_HPP
#define UE4SS_SDK_BP_Fishing_FishShadowBase_HPP

class ABP_Fishing_FishShadowBase_C : public APalFishShadow
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0608 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0610 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0618 (size: 0x8)
    FVector RootPoint;                                                                // 0x0620 (size: 0x18)
    FVector NextPoint;                                                                // 0x0638 (size: 0x18)
    double RotZSpeed;                                                                 // 0x0650 (size: 0x8)
    double MoveRadius;                                                                // 0x0658 (size: 0x8)
    double DelayTimer;                                                                // 0x0660 (size: 0x8)
    double DelayTime;                                                                 // 0x0668 (size: 0x8)
    FVector PickLocation;                                                             // 0x0670 (size: 0x18)
    FVector PrevLocation;                                                             // 0x0688 (size: 0x18)
    bool IsEscape;                                                                    // 0x06A0 (size: 0x1)
    bool IsHit;                                                                       // 0x06A1 (size: 0x1)
    bool IsReached;                                                                   // 0x06A2 (size: 0x1)
    bool IsPick;                                                                      // 0x06A3 (size: 0x1)
    FRotator EscapeRotation;                                                          // 0x06A8 (size: 0x18)
    double EscapeSpeed;                                                               // 0x06C0 (size: 0x8)
    class UNiagaraComponent* SpawnedEffect;                                           // 0x06C8 (size: 0x8)
    double EffectScale;                                                               // 0x06D0 (size: 0x8)
    class UAnimSequence* IdleAnim;                                                    // 0x06D8 (size: 0x8)
    class UAnimSequence* WalkAnim;                                                    // 0x06E0 (size: 0x8)
    class UAnimSequence* BattleAnim;                                                  // 0x06E8 (size: 0x8)
    double HeightOffset;                                                              // 0x06F0 (size: 0x8)
    double HitSinkOffset;                                                             // 0x06F8 (size: 0x8)

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
}; // Size: 0x700

#endif
