#ifndef UE4SS_SDK_BP_WorldSecurity_AreaInvasion_Volume_HPP
#define UE4SS_SDK_BP_WorldSecurity_AreaInvasion_Volume_HPP

class ABP_WorldSecurity_AreaInvasion_Volume_C : public APalTriggerAreaBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara;
    class UBoxComponent* BoxCollision;
    class USceneComponent* DefaultSceneRoot;
    TArray<class AActor*> HitActorArray;

    void NotifyHitActors();
    void IsPlayerOverlap(bool& IsOverlap, TArray<class AActor*>& OverlapPlayers);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume(int32 EntryPoint);
};

#endif
