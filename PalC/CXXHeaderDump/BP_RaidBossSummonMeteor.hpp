#ifndef UE4SS_SDK_BP_RaidBossSummonMeteor_HPP
#define UE4SS_SDK_BP_RaidBossSummonMeteor_HPP

class ABP_RaidBossSummonMeteor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh;
    class UNiagaraComponent* Niagara;
    class USphereComponent* SphereCollision;
    TMap<FPalDataTableRowName_PalMonsterData, int32> PalNameAndNum;
    FVector MoveDirection;
    double Const_MoveSpeed;
    FGuid TargetCamp ID;
    int32 PalLevel;
    bool IsRequestedSpawn;
    bool IsFadeOutMode;
    double FadeTimer;

    void EffectFadeOutLoop(double Timer, double FadeTime, class UNiagaraComponent* Effect, FName ParamName);
    void CalcSpawnLocation(int32 Index, int32 MaxNum, FVector& Location, FRotator& Rotate);
    void SpawnPal();
    void SetupMeteor(TMap<FPalDataTableRowName_PalMonsterData, int32> NameAndNum, FVector MovementDirection, FGuid CampID, int32 Level, bool DelayTime);
    void BndEvt__BP_RaidBossSummonMeteor_SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_RaidBossSummonMeteor(int32 EntryPoint);
};

#endif
