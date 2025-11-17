#ifndef UE4SS_SDK_BP_DropWeaponPartNotify_HPP
#define UE4SS_SDK_BP_DropWeaponPartNotify_HPP

class UBP_DropWeaponPartNotify_C : public UAnimNotify
{
    class UStaticMesh* Mesh;
    FName In Bone Name;
    FRotator Offset;
    FVector Velocity;
    float Angular Intensify;

    void BeginWeaponDrop(class ABP_DropWeaponPart_C* self2, class AActor* Owner);
    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
};

#endif
