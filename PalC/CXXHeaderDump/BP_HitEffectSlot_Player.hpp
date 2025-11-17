#ifndef UE4SS_SDK_BP_HitEffectSlot_Player_HPP
#define UE4SS_SDK_BP_HitEffectSlot_Player_HPP

class UBP_HitEffectSlot_Player_C : public UPalHitEffectSlot
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class UNiagaraSystem*> LoadCache;

    void SpawnElementalHitEffectBullet(EPalElementType Element, FVector Location, double EffectScale);
    void SpawnElementalHitEffectNear(EPalElementType Element, FVector Location, double EffectScale);
    void SpawnSneakAttackEffect(FVector Location);
    void Spawn Elemental Hit Effect Far(EPalElementType Element, FVector Location, double EffectScale, bool IsPoison, TSoftObjectPtr<UNiagaraSystem> OverrideEffect);
    void OnLoaded_9E6C8F9D4F39DAEE12ED13A974550770(class UObject* Loaded);
    void PlayHitEffect(const FPalDamageInfo& Info);
    void LoadAndPlayEffect(TSoftObjectPtr<UNiagaraSystem> EffectPath, FTransform Transform);
    void ExecuteUbergraph_BP_HitEffectSlot_Player(int32 EntryPoint);
};

#endif
