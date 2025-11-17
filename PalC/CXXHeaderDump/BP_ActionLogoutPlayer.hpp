#ifndef UE4SS_SDK_BP_ActionLogoutPlayer_HPP
#define UE4SS_SDK_BP_ActionLogoutPlayer_HPP

class UBP_ActionLogoutPlayer_C : public UBP_ActionSimpleMonoMontage_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SetDisableCollision(bool isDisable);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_ActionLogoutPlayer(int32 EntryPoint);
};

#endif
