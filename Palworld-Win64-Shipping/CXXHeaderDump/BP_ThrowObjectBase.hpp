#ifndef UE4SS_SDK_BP_ThrowObjectBase_HPP
#define UE4SS_SDK_BP_ThrowObjectBase_HPP

class ABP_ThrowObjectBase_C : public APalBullet
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalSoundPlayerComponent_C* SoundPlayer;
    int32 BoundCount;
    double EnableGravityInterval;
    double DefaultGravityScale;
    class UNiagaraSystem* ThrowEffect;
    bool IsCachedGravityScale;
    float Const_Effect_Scale;
    FLinearColor Const_Effect_ColorShock;
    FLinearColor Const_Effect_ColorThrow;
    FLinearColor Const_Effect_ColorThrow2;

    void SetEffectParam(class UNiagaraComponent* Niagara);
    void CacheDefaultGravity();
    void Play Throw Sound();
    class USceneComponent* GetAkOwnerComponent();
    void PlaySoundWithMaterial(FPalDataTableRowName_SoundID ID, TEnumAsByte<EPhysicalSurface> PhysicalMaterial);
    void PlaySound(FPalDataTableRowName_SoundID ID);
    void IsCountDestroy(bool& IsDestroy);
    void IncrementBoundCountAndCheckDestroy();
    void GetMaxBoundCount(int32& Count);
    bool IsDestroy(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void OnBlock(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void OnEnableGravity();
    void OnHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void ExecuteUbergraph_BP_ThrowObjectBase(int32 EntryPoint);
};

#endif
