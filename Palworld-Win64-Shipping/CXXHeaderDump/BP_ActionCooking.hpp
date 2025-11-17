#ifndef UE4SS_SDK_BP_ActionCooking_HPP
#define UE4SS_SDK_BP_ActionCooking_HPP

class UBP_ActionCooking_C : public UBP_ActionInteractBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_ActionCooking(int32 EntryPoint);
};

#endif
