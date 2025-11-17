#ifndef UE4SS_SDK_BP_TreasureBoxVisual_Base_HPP
#define UE4SS_SDK_BP_TreasureBoxVisual_Base_HPP

class ABP_TreasureBoxVisual_Base_C : public APalTreasureBoxVisualBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Glow;
    class UNiagaraSystem* Niagara;
    FVector LocationOffset;
    class UAkAudioEvent* Ak Event;
    FBP_TreasureBoxVisual_Base_COnFinishOpenInServer OnFinishOpenInServer;
    void OnFinishOpenInServer();
    class UAnimMontage* OpenAnimMontage;
    FBP_TreasureBoxVisual_Base_COnNotifiedStartOpenInAnimation OnNotifiedStartOpenInAnimation;
    void OnNotifiedStartOpenInAnimation();
    FTimerHandle AnimationWaitTimer;

    void SetNoCollisionAllMesh();
    void PlayEffectAndSound();
    void TriggerOpenAnimation();
    void OnFinishOpenAnimation();
    void StartOpenAnimation();
    void OnPassedOpenAnimationLength();
    void OnPlayMontageNotifyBegin_BP(FName NotifyName);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TreasureBoxVisual_Base(int32 EntryPoint);
    void OnNotifiedStartOpenInAnimation__DelegateSignature();
    void OnFinishOpenInServer__DelegateSignature();
};

#endif
