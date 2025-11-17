#ifndef UE4SS_SDK_BP_Action_Emote_KickCollision_HPP
#define UE4SS_SDK_BP_Action_Emote_KickCollision_HPP

class ABP_Action_Emote_KickCollision_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    FHitResult Hit;
    class USkeletalMeshComponent* NewLocalVar;

    void ReceiveBeginPlay();
    void BndEvt__BP_Action_Emote_KickCollision_Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_Action_Emote_KickCollision(int32 EntryPoint);
};

#endif
