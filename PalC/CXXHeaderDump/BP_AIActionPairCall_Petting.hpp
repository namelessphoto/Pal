#ifndef UE4SS_SDK_BP_AIActionPairCall_Petting_HPP
#define UE4SS_SDK_BP_AIActionPairCall_Petting_HPP

class UBP_AIActionPairCall_Petting_C : public UBP_AIActionPairCallBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    bool IsMomoChyo();
    void OnStartPair();
    void OnFinish();
    void ActionAbort(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIActionPairCall_Petting(int32 EntryPoint);
};

#endif
