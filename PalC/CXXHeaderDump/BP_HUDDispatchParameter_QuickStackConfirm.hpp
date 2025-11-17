#ifndef UE4SS_SDK_BP_HUDDispatchParameter_QuickStackConfirm_HPP
#define UE4SS_SDK_BP_HUDDispatchParameter_QuickStackConfirm_HPP

class UBP_HUDDispatchParameter_QuickStackConfirm_C : public UPalHUDDispatchParameterBase
{
    FBP_HUDDispatchParameter_QuickStackConfirm_COnQuickStackConfirmed OnQuickStackConfirmed;
    void OnQuickStackConfirmed(bool IsYes);
    TArray<class UPalItemSlot*> StackItemSlots;

    void OnQuickStackConfirmed__DelegateSignature(bool IsYes);
};

#endif
