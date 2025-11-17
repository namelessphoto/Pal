#ifndef UE4SS_SDK_BP_PalActionTransportItem_HPP
#define UE4SS_SDK_BP_PalActionTransportItem_HPP

class UBP_PalActionTransportItem_C : public UPalActionTransportItem
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SetupItemActor();
    void FindMontage(class UAnimMontage*& Montage, bool& Exist);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_PalActionTransportItem(int32 EntryPoint);
};

#endif
