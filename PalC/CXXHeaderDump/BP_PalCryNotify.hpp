#ifndef UE4SS_SDK_BP_PalCryNotify_HPP
#define UE4SS_SDK_BP_PalCryNotify_HPP

class UBP_PalCryNotify_C : public UAnimNotify
{
    TArray<FName> Emo State;
    int32 Probability;

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
};

#endif
