#ifndef UE4SS_SDK_BP_Action_AliveRagdoll_HPP
#define UE4SS_SDK_BP_Action_AliveRagdoll_HPP

class UBP_Action_AliveRagdoll_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool IsRagdoll;
    FVector preLocation;
    FTransform MeshTF;
    bool EndAble;
    FName InBoneName;
    FName flagName;
    FName DefaultCollisionProfile;
    class UNiagaraComponent* Niagara;
    double Scale;
    bool AomukeOrLeft;
    double StartHeight;

    void SetDefaultMeshTF();
    void ResetActorTransform(bool SafeHeight);
    void DisableRagdoll();
    void BlowCharacter();
    void OnLoaded_1E91249448FAC6F71D7339ACA5AC1552(class UObject* Loaded);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void SpawnStunEffect(TSoftObjectPtr<UNiagaraSystem> Path);
    void ExecuteUbergraph_BP_Action_AliveRagdoll(int32 EntryPoint);
};

#endif
