#ifndef UE4SS_SDK_BP_Status_ShieldRecovery_HPP
#define UE4SS_SDK_BP_Status_ShieldRecovery_HPP

class UBP_Status_ShieldRecovery_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool IsRecoverAble;
    FTimerHandle RecoverStartAbleHandle;
    bool InitEnd;
    double DamageWeight;
    double tempDeltaTime;
    double Const_MutekiTime;
    FName flagName;

    void CreateDynamicMaterial();
    void ChangeSheildDamageMaterial();
    void GetParam(class UPalIndividualCharacterParameter*& ip);
    void OnBeginStatus();
    void TickStatus(float DeltaTime);
    void OnEndStatus();
    void カスタムイベント_OnDamage(FPalDamageResult DamageResult);
    void カスタムイベント_OnSlipDamage(int32 Damage);
    void カスタムイベント_0();
    void カスタムイベント_1(class APalCharacter* InCharacter);
    void カスタムイベント_DamageShield(int32 Damage, bool IsShieldBroken);
    void ExecuteUbergraph_BP_Status_ShieldRecovery(int32 EntryPoint);
};

#endif
