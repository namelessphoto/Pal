#ifndef UE4SS_SDK_BP_ThrowPal_ThrowObject_HPP
#define UE4SS_SDK_BP_ThrowPal_ThrowObject_HPP

class ABP_ThrowPal_ThrowObject_C : public ABP_ThrowObjectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara;
    class USkeletalMeshComponent* SK_Weapon_PalSphere_001;
    bool IsBounce;
    FRotator ThrowRotator;

    void FindNearEnemy(class APalCharacter* OwnerCharacter, class APalCharacter*& OutputPin);
    void PostProcessSpawnOtomo(class AActor* HitActor);
    void SpawnOtomo(class APalCharacter*& SpawnOtomo);
    void CollectTarget(class AActor*& NewParam);
    void UpdateRotator(double DeltaTime);
    void OnHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_ThrowPal_ThrowObject(int32 EntryPoint);
};

#endif
