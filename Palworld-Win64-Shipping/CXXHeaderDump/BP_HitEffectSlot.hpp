#ifndef UE4SS_SDK_BP_HitEffectSlot_HPP
#define UE4SS_SDK_BP_HitEffectSlot_HPP

class UBP_HitEffectSlot_C : public UPalHitEffectSlot
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<TSoftObjectPtr<UNiagaraSystem>> PreLoadList;
    TArray<class UNiagaraSystem*> LoadCache;
    bool IsCrying;
    TArray<class TSubclassOf<APalMapObject>> RockBPList;
    TArray<class TSubclassOf<APalMapObject>> TreeBPList;
    bool NewVar_0;
    FString RockBPName;
    FString MeteorBPName;

    void PlayHitSound(const FPalDamageInfo& PalDamageInfo);
    void IsEnableCameraShake(bool& IsEnable);
    void PlayCameraShakeAndSoundEffect(EPalWazaCategory Category, class AActor* Attacker, bool SpecializedEffectPlayed);
    void SpawnSpecializationEffect(class AActor* Attacker, FVector Location, double EffectScale, bool& Played);
    void SpawnSneakAttackEffect(FVector Location);
    void SpawnElementalHitEffectBullet(EPalElementType Element, FVector Location, double EffectScale);
    void SpawnElementalHitEffectNear(EPalElementType Element, FVector Location, double EffectScale);
    void Spawn Elemental Hit Effect Far(EPalElementType Element, FVector Location, double EffectScale, bool IsPoison, TSoftObjectPtr<UNiagaraSystem> OverrideEffect);
    void OnLoaded_D5A0C82B4BA3C329BE0E728CCA761919(class UObject* Loaded);
    void LoadAndPlayEffect(TSoftObjectPtr<UNiagaraSystem> EffectPath, FTransform Transform);
    void Initialize();
    void PlayHitEffect(const FPalDamageInfo& Info);
    void CryCoolTime(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
    void ExecuteUbergraph_BP_HitEffectSlot(int32 EntryPoint);
};

#endif
