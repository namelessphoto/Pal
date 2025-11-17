#ifndef UE4SS_SDK_BP_Status_Drown_HPP
#define UE4SS_SDK_BP_Status_Drown_HPP

class UBP_Status_Drown_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool IsDrowning;
    FTimerHandle Timer;

    void GetSlipDamage(int32& Damage);
    void GetOwnerHP(int64& OwnerHP);
    void IsDrownInWater(bool& IsDrawningInWater);
    void IsDrown(bool& IsDrawning);
    void カスタムイベント_SlipDamage();
    void OnBeginStatus();
    void OnEndStatus();
    void ExecuteUbergraph_BP_Status_Drown(int32 EntryPoint);
};

#endif
