#ifndef UE4SS_SDK_BP_Fishing_Lure_HPP
#define UE4SS_SDK_BP_Fishing_Lure_HPP

class ABP_Fishing_Lure_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* NS_Fishing_Swim;
    class UNiagaraComponent* NS_Splash_Sink;
    class UNiagaraComponent* NS_LandingPoint_NG;
    class UNiagaraComponent* NS_LandingPoint_OK;
    class UNiagaraComponent* NS_InWaterPal;
    class UNiagaraComponent* NS_Splash_Success;
    class UNiagaraComponent* NS_Splash_OnWater;
    class USkeletalMeshComponent* SK_FishingFloat001;
    class USceneComponent* DefaultSceneRoot;
    bool IsPickMode;
    bool IsHit;
    double BaseLocationZ;
    double Amplitude;
    double Frequency;
    double CurrentTime;
    FVector NextLocation;
    double HitSinkDepth;
    FVector DefaultWaterLocation;
    EPalFishingRodState RodState;
    class UNiagaraSystem* NS_Battle;
    class UNiagaraComponent* BattleEffect;
    class ABP_Fishing_FishShadowBase_C* TargetFish;

    void SetTargetFishShadow(class ABP_Fishing_FishShadowBase_C* TargetFish);
    void DisableAll();
    void SetFloatMesh(class USkeletalMesh* Mesh);
    void SetThrowLocation(FVector ThrowLocation);
    void SetVisibleEffectForLoop(class UNiagaraComponent* Effect, bool IsVisible, bool IsAdjustWaterPlane);
    void SetVisibleEffect(class UNiagaraComponent* Effect, bool IsVisible);
    void SetVisibleSwimEffect(bool IsVisible);
    void SetVisibleSinkSplashEffect(bool IsVisible);
    void SetVisibleInWaterEffect(bool IsVisible);
    void SetVisibleLandingPointEffect(bool IsVisible, bool CanFishing);
    void SetVisibleSuccessSplashEffect(bool IsVisible);
    void SetVisibleOnWaterSplashEffect(bool IsVisible);
    void SetVisibleBattleSplashEffect(bool IsVisible);
    void SetVisibleFloat(bool IsVisible);
    void ReceiveTick(float DeltaSeconds);
    void StartPick();
    void SuccessPick();
    void FailedPick();
    void OnChangeRodState(EPalFishingRodState RodState);
    void ReceiveBeginPlay();
    void OnChangeFloatMoveState(bool IsMove);
    void ExecuteUbergraph_BP_Fishing_Lure(int32 EntryPoint);
};

#endif
