#ifndef UE4SS_SDK_BP_PalUIBuildModel_HPP
#define UE4SS_SDK_BP_PalUIBuildModel_HPP

class UBP_PalUIBuildModel_C : public UPalUIBuildModel
{
    EPalBuildObjectTypeA CurrentTabType;
    FBP_PalUIBuildModel_COnChangeTabType OnChangeTabType;
    void OnChangeTabType(EPalBuildObjectTypeA TypeA);

    void ChangeToBackTab();
    void ChangeToNextTab();
    void ChangeTab(EPalBuildObjectTypeA TypeA);
    void OnChangeTabType__DelegateSignature(EPalBuildObjectTypeA TypeA);
};

#endif
