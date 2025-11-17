#ifndef UE4SS_SDK_BP_Status_WithVisualEffect_HPP
#define UE4SS_SDK_BP_Status_WithVisualEffect_HPP

class UBP_Status_WithVisualEffect_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    EPalVisualEffectID VisualEffectID;
    bool AutoRemoveWhenOtherElemetAdd;
    EPalElementType DamageUpElement;
    EPalElementType DamageDownElement;
    FName CommonFlagName;
    bool IsHideEffect;

    void HideReAddEffectWhenInActiveOtomo();
    void IsIgnoreElement(EPalAdditionalEffectType AddEffect, bool& Ignore);
    void HideReAddEffect();
    void ResetDamageDown();
    void ResetDamageUp();
    void SetDamageDown();
    void SetDamageUp();
    void HasSelfPalElement(EPalElementType MyElement, bool& Has);
    void OnBeginStatus();
    void OnEndStatus();
    void カスタムイベント_OtherStatusAdd(const class UPalStatusComponent* StatusComponent, EPalStatusID statusID, class UPalStatusBase* Status);
    void カスタムイベント_Dead(FPalDeadInfo DeadInfo);
    void TickStatus(float DeltaTime);
    void ExecuteUbergraph_BP_Status_WithVisualEffect(int32 EntryPoint);
};

#endif
