#ifndef UE4SS_SDK_BP_ActionGenerateEnergy_Electric_HPP
#define UE4SS_SDK_BP_ActionGenerateEnergy_Electric_HPP

class UBP_ActionGenerateEnergy_Electric_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* SpawnedEffect;
    class UPalStaticCharacterParameterComponent* Static Character Parameter;
    class UPalAnimInstance* Anim Instance;
    TArray<FReserveMontage> PlayMontageList;
    double FXDelay Time;
    double Play List Whole Length;

    void AddMontageToPlayList(const TArray<FReserveMontage>& TargetArray, class UAnimMontage* Montage, double& PlayLength);
    void CreatePlayMontageList();
    void StopMotangeAll();
    class UAnimMontage* GetFarSkillActionLoopMontage();
    class UAnimMontage* GetFarSkillStartLoopMontage();
    void OnNotifyEnd_79E9FB6645A76A339C6A37B3860D17C1(FName NotifyName);
    void OnNotifyBegin_79E9FB6645A76A339C6A37B3860D17C1(FName NotifyName);
    void OnInterrupted_79E9FB6645A76A339C6A37B3860D17C1(FName NotifyName);
    void OnBlendOut_79E9FB6645A76A339C6A37B3860D17C1(FName NotifyName);
    void OnCompleted_79E9FB6645A76A339C6A37B3860D17C1(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void PlayActionMontage();
    void ExecuteUbergraph_BP_ActionGenerateEnergy_Electric(int32 EntryPoint);
};

#endif
