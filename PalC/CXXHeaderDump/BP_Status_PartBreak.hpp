#ifndef UE4SS_SDK_BP_Status_PartBreak_HPP
#define UE4SS_SDK_BP_Status_PartBreak_HPP

class UBP_Status_PartBreak_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName Const_MorphName;

    void ClearMorph(FName MorphTargetName);
    void Change Morph(double Value, FName MorphTargetName);
    void OnBeginStatus();
    void OnEndStatus();
    void ExecuteUbergraph_BP_Status_PartBreak(int32 EntryPoint);
};

#endif
