#ifndef UE4SS_SDK_BP_HUDDispatchParameter_ItemFilter_HPP
#define UE4SS_SDK_BP_HUDDispatchParameter_ItemFilter_HPP

class UBP_HUDDispatchParameter_ItemFilter_C : public UPalHUDDispatchParameterBase
{
    FBP_HUDDispatchParameter_ItemFilter_COnFilterApply OnFilterApply;
    void OnFilterApply(TArray<FName>& Types);
    TArray<FName> CurrentFilter;
    bool RemoveEssential;

    void OnFilterApply__DelegateSignature(TArray<FName>& Types);
};

#endif
