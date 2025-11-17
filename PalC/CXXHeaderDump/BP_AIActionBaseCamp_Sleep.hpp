#ifndef UE4SS_SDK_BP_AIActionBaseCamp_Sleep_HPP
#define UE4SS_SDK_BP_AIActionBaseCamp_Sleep_HPP

class UBP_AIActionBaseCamp_Sleep_C : public UPalAIActionBaseCampSleep
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ExecuteUbergraph_BP_AIActionBaseCamp_Sleep(int32 EntryPoint);
};

#endif
