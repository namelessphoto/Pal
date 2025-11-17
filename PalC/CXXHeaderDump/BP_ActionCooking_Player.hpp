#ifndef UE4SS_SDK_BP_ActionCooking_Player_HPP
#define UE4SS_SDK_BP_ActionCooking_Player_HPP

class UBP_ActionCooking_Player_C : public UBP_ActionInteractBase_Player_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_CookingFryingPan_C* CookingToolActor_L;
    FTimerHandle CheckEndCancelTimer_0;
    class ABP_CookingSpatula_C* CookingToolActor_R;

    void OnPlayEndMontage(double EndMontageLength);
    void OnMontageEnd();
    void SyncAnim();
    void OnNotifyBegin(FName NotifyName);
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionCooking_Player(int32 EntryPoint);
};

#endif
