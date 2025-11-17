#ifndef UE4SS_SDK_BP_HUDDispatchParameter_TechnologyFilter_HPP
#define UE4SS_SDK_BP_HUDDispatchParameter_TechnologyFilter_HPP

class UBP_HUDDispatchParameter_TechnologyFilter_C : public UPalHUDDispatchParameterBase
{
    TSet<EPalItemTypeA> ItemTypes;
    TSet<EPalBuildObjectTypeA> BuildType;
    bool ShowUnlocked;
    FBP_HUDDispatchParameter_TechnologyFilter_COnFilterApplied OnFilterApplied;
    void OnFilterApplied(TSet<EPalItemTypeA> ItemFilter, TSet<EPalBuildObjectTypeA> BuiltFilter, bool ShowUnlocked);

    void OnFilterApplied__DelegateSignature(TSet<EPalItemTypeA> ItemFilter, TSet<EPalBuildObjectTypeA> BuiltFilter, bool ShowUnlocked);
};

#endif
