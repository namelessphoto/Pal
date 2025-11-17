#ifndef UE4SS_SDK_BP_Status_Dying_HPP
#define UE4SS_SDK_BP_Status_Dying_HPP

class UBP_Status_Dying_C : public UPalStatusDying
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0048 (size: 0x8)
    FName flagName;                                                                   // 0x0050 (size: 0x8)
    FBP_Status_Dying_COnUpdateDying OnUpdateDying;                                    // 0x0058 (size: 0x10)
    void OnUpdateDying(double DyingHP, double MaxDyingHP);
    FTimerHandle UpdateTimer;                                                         // 0x0068 (size: 0x8)
    FBP_Status_Dying_COnDyingEnd OnDyingEnd;                                          // 0x0070 (size: 0x10)
    void OnDyingEnd();
    FBP_Status_Dying_COnDyingInterrupt OnDyingInterrupt;                              // 0x0080 (size: 0x10)
    void OnDyingInterrupt(bool IsInterrupting);
    class AActor* Action Actor;                                                       // 0x0090 (size: 0x8)
    class UWBP_DyingFriendLoupe_C* DyingLoupe;                                        // 0x0098 (size: 0x8)
    bool TickEnabled;                                                                 // 0x00A0 (size: 0x1)
    FGuid GameOverUIGUID;                                                             // 0x00A4 (size: 0x10)
    bool PartnerSkillReviveCanceled;                                                  // 0x00B4 (size: 0x1)
    double OtomoRiviveCancelTimer;                                                    // 0x00B8 (size: 0x8)
    FTimerHandle OtomoReviveCancelTimerHandle;                                        // 0x00C0 (size: 0x8)

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
}; // Size: 0xC8

#endif
