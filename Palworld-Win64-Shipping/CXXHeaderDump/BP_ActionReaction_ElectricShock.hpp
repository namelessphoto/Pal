#ifndef UE4SS_SDK_BP_ActionReaction_ElectricShock_HPP
#define UE4SS_SDK_BP_ActionReaction_ElectricShock_HPP

class UBP_ActionReaction_ElectricShock_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    double SelfTimer;
    class UCurveFloat* Curve_Right;
    double DefaultMeshPosZ;
    bool VibEnd;
    bool ExistFacialNotify;
    TMap<EPalSizeType, double> Const_VibGainMap;

    void OnWakeup();
    void ResetMeshLocation();
    void ChangeFacial(EPalFacialEyeType Eye);
    void FindMontage(class UAnimMontage*& NewParam);
    void SetDisable(bool Disable);
    void UpdateMeshLocation();
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_ActionReaction_ElectricShock(int32 EntryPoint);
};

#endif
