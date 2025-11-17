#ifndef UE4SS_SDK_BP_HUDDispatchParameter_ItemSearch_HPP
#define UE4SS_SDK_BP_HUDDispatchParameter_ItemSearch_HPP

class UBP_HUDDispatchParameter_ItemSearch_C : public UPalHUDDispatchParameterBase
{
    bool ShowEssential;
    FBP_HUDDispatchParameter_ItemSearch_COnSearchSlotClicked OnSearchSlotClicked;
    void OnSearchSlotClicked(FName StaticItemId);

    void OnSearchSlotClicked__DelegateSignature(FName StaticItemId);
};

#endif
