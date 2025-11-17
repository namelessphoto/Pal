#ifndef UE4SS_SDK_BP_ActionPairBehaviorBase_HPP
#define UE4SS_SDK_BP_ActionPairBehaviorBase_HPP

class UBP_ActionPairBehaviorBase_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector PlayerGoalPos;
    FVector PalGoalPos;
    FRotator PlayerGoalRotate;
    FRotator PalGoalRotate;
    double Timer;
    FBP_ActionPairBehaviorBase_CFinishEvent FinishEvent;
    void FinishEvent();
    double MotionTimeSecond;
    class ABP_PettingCamera_C* Camera;
    double Alpha;
    double LerpSpeed;
    bool RemovePalMode;
    FVector RemoveGoalPos;
    double AlphaRemove;
    double tempDeltaTime;
    double tempAnimRate;
    bool IsJumpCancel;
    EPalActionType MonsterActionMontageType;
    EPalFacialEyeType FacialType;
    TSoftObjectPtr<UObject> HeadEffectAsset;
    EPalActionType EndActionType;
    double PalAnimationSpeed;

    EPalActionType GetEActionForRideBoss();
    void Is Valid Target(bool& IsValid);
    class UNiagaraComponent* SpawnNiagara(FVector Location, class UObject* Object);
    void OnCompleted(class AActor* Human, class AActor* Monster);
    void RemovePalMoveing();
    void GetHumanAnime(class UAnimMontage*& Montage);
    void StartPettingCamera();
    void OnNotifyEnd_AFFE27B5471DDCA5938711B5A98C1BAC(FName NotifyName);
    void OnNotifyBegin_AFFE27B5471DDCA5938711B5A98C1BAC(FName NotifyName);
    void OnInterrupted_AFFE27B5471DDCA5938711B5A98C1BAC(FName NotifyName);
    void OnBlendOut_AFFE27B5471DDCA5938711B5A98C1BAC(FName NotifyName);
    void OnCompleted_AFFE27B5471DDCA5938711B5A98C1BAC(FName NotifyName);
    void OnNotifyEnd_195B11E24A68AB1C346EBCB5275B82C9(FName NotifyName);
    void OnNotifyBegin_195B11E24A68AB1C346EBCB5275B82C9(FName NotifyName);
    void OnInterrupted_195B11E24A68AB1C346EBCB5275B82C9(FName NotifyName);
    void OnBlendOut_195B11E24A68AB1C346EBCB5275B82C9(FName NotifyName);
    void OnCompleted_195B11E24A68AB1C346EBCB5275B82C9(FName NotifyName);
    void OnLoaded_E1928592499A4EC8EA38C6BCC85A61EE(class UObject* Loaded);
    void OnNotifyEnd_00F343BB4B6F993C5A65D28008648678(FName NotifyName);
    void OnNotifyBegin_00F343BB4B6F993C5A65D28008648678(FName NotifyName);
    void OnInterrupted_00F343BB4B6F993C5A65D28008648678(FName NotifyName);
    void OnBlendOut_00F343BB4B6F993C5A65D28008648678(FName NotifyName);
    void OnCompleted_00F343BB4B6F993C5A65D28008648678(FName NotifyName);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void FinishPetting();
    void JumpCancel();
    void ExecuteUbergraph_BP_ActionPairBehaviorBase(int32 EntryPoint);
    void FinishEvent__DelegateSignature();
};

#endif
