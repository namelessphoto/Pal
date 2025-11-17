#ifndef UE4SS_SDK_BP_ActionWateringOneshot_HPP
#define UE4SS_SDK_BP_ActionWateringOneshot_HPP

class UBP_ActionWateringOneshot_C : public UBP_ActionSimpleMonoMontage_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName WateredNotifyName;

    void NotifyWatered(FName NotifyName);
    void OnNotifyBegin(FName NotifyName);
    void ExecuteUbergraph_BP_ActionWateringOneshot(int32 EntryPoint);
};

#endif
