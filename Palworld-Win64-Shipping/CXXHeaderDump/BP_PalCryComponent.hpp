#ifndef UE4SS_SDK_BP_PalCryComponent_HPP
#define UE4SS_SDK_BP_PalCryComponent_HPP

class UBP_PalCryComponent_C : public UPalCryComponentBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float ElapsedTimeFromLastIdleCry;
    class APalCharacter* CryingCharacter;
    TMap<TSubclassOf<UPalActionBase>, TEnumAsByte<E_PalEmo>> ActionEmoMap;
    TMap<TSubclassOf<UPalAIActionBase>, TEnumAsByte<E_PalEmo>> AIActionEmoMap;
    double CoolTImeIdleCry;
    bool IsCryingOnAIAction;
    TSubclassOf<class UPalAIActionBase> CryingAIActionClass;
    TSubclassOf<class UPalAIActionBase> CurrentAIActionClass;
    class UPalIndividualCharacterParameter* IndividualParameter;
    bool HasHungry;
    bool IsDebug;
    double GeneralCoolTime;
    FName LastCryEmoState;
    double DeltaTimeFromLastCry;
    EPalTribeID CryPalID;
    bool DisableCrying;
    FPalDataTableRowName_PalHumanData CryNPCId;

    void CheckWorkerEvent();
    void OnSpawnPal(bool bIsActive);
    void CheckHungerType(EPalStatusHungerType Current, EPalStatusHungerType Last);
    void CheckAIAction();
    void CheckAction(const class UPalActionBase* action);
    FName GetPalId();
    void ProcessIdleCry(double DeltaTime);
    void PlayCry(FName EmoState);
    void Initialize();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnPlayCryWithAction(TEnumAsByte<E_PalEmo> PalEmo);
    void ExecuteUbergraph_BP_PalCryComponent(int32 EntryPoint);
};

#endif
