#ifndef UE4SS_SDK_BP_HumanCryComponent_HPP
#define UE4SS_SDK_BP_HumanCryComponent_HPP

class UBP_HumanCryComponent_C : public UPalCryComponentBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APalCharacter* CryingCharacter;
    TSubclassOf<class UPalActionBase> CurrentActionClass;

    void PlayCry(class UAkAudioEvent* AkEvent);
    void BP_HumanCryComponent_AutoGenFunc(const class UPalActionBase* action);
    void Initialize();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_HumanCryComponent(int32 EntryPoint);
};

#endif
