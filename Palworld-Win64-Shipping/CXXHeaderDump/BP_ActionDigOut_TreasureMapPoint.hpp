#ifndef UE4SS_SDK_BP_ActionDigOut_TreasureMapPoint_HPP
#define UE4SS_SDK_BP_ActionDigOut_TreasureMapPoint_HPP

class UBP_ActionDigOut_TreasureMapPoint_C : public UBP_ActionInteractBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName flagName;
    class AActor* ToolActor;

    void OnEndAction();
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionDigOut_TreasureMapPoint(int32 EntryPoint);
};

#endif
