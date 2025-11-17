#ifndef UE4SS_SDK_WBP_AssignBoard_PalSlot_Assigned_HPP
#define UE4SS_SDK_WBP_AssignBoard_PalSlot_Assigned_HPP

class UWBP_AssignBoard_PalSlot_Assigned_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_AssignBoard_PalSlot_C* WBP_AssignBoard_PalSlot;

    void SetEmpty();
    void SetIndividualParameter(class UPalIndividualCharacterParameter* Parameter);
    void Construct();
    void ExecuteUbergraph_WBP_AssignBoard_PalSlot_Assigned(int32 EntryPoint);
};

#endif
