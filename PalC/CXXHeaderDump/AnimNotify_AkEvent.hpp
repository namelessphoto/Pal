#ifndef UE4SS_SDK_AnimNotify_AkEvent_HPP
#define UE4SS_SDK_AnimNotify_AkEvent_HPP

class UAnimNotify_AkEvent_C : public UAnimNotify
{
    FString Attach Name;
    class UAkAudioEvent* Event;
    bool Follow;
    FString EventName;

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
};

#endif
