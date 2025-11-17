#ifndef UE4SS_SDK_BP_Status_Dying_HPP
#define UE4SS_SDK_BP_Status_Dying_HPP

class UBP_Status_Dying_C : public UPalStatusDying
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName flagName;
    FBP_Status_Dying_COnUpdateDying OnUpdateDying;
    void OnUpdateDying(double DyingHP, double MaxDyingHP);
    FTimerHandle UpdateTimer;
    FBP_Status_Dying_COnDyingEnd OnDyingEnd;
    void OnDyingEnd();
    FBP_Status_Dying_COnDyingInterrupt OnDyingInterrupt;
    void OnDyingInterrupt(bool IsInterrupting);
    class AActor* Action Actor;
    class UWBP_DyingFriendLoupe_C* DyingLoupe;
    bool TickEnabled;
    FGuid GameOverUIGUID;
    bool PartnerSkillReviveCanceled;
    double OtomoRiviveCancelTimer;
    FTimerHandle OtomoReviveCancelTimerHandle;

    bool IsOtomoRevive();
    void OtomoReviveCancelCheck();
    void IsRunningPartnerSkill(bool& IsRunning);
    void Setup();
    void IsInstantDeath (bool& IsInstantDeath);
    void FlagControll(bool bIsDisable);
    void OnBeginStatus();
    void TickStatus(float DeltaTime);
    void OnEndStatus();
    void SetupInteractTrigger(bool IsEnable);
    void OnStartRescue(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    void OnEndRescue(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    void UpdateDyingWidget();
    void ProcessDeath();
    void StartBindInteract(TScriptInterface<class IPalInteractiveObjectComponentInterface> InteractDelegatesInterface);
    void StartUnBindInteract(TScriptInterface<class IPalInteractiveObjectComponentInterface> InteractDelegatesInterface);
    void ToDeath(bool isIsstantDeath);
    void CancelOtomoRevive();
    void ExecuteUbergraph_BP_Status_Dying(int32 EntryPoint);
    void OnDyingInterrupt__DelegateSignature(bool IsInterrupting);
    void OnDyingEnd__DelegateSignature();
    void OnUpdateDying__DelegateSignature(double DyingHP, double MaxDyingHP);
};

#endif
