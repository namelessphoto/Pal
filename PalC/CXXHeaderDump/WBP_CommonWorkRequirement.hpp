#ifndef UE4SS_SDK_WBP_CommonWorkRequirement_HPP
#define UE4SS_SDK_WBP_CommonWorkRequirement_HPP

class UWBP_CommonWorkRequirement_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_RequirePalInfo_C* WBP_RequirePalInfo;
    class UPalMapObjectConcreteModelBase* Model;

    void On Updated Worker Pal(class UPalWorkBase* Work);
    void OnSetup();
    void ExecuteUbergraph_WBP_CommonWorkRequirement(int32 EntryPoint);
};

#endif
