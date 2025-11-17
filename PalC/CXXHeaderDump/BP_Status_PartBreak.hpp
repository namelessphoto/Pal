#ifndef UE4SS_SDK_BP_Status_PartBreak_HPP
#define UE4SS_SDK_BP_Status_PartBreak_HPP

class UBP_Status_PartBreak_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0048 (size: 0x8)
    FName Const_MorphName;                                                            // 0x0050 (size: 0x8)

    void ClearMorph(FName MorphTargetName);
    void Change Morph(double Value, FName MorphTargetName);
    void OnBeginStatus();
    void OnEndStatus();
    void ExecuteUbergraph_BP_Status_PartBreak(int32 EntryPoint);
}; // Size: 0x58

#endif
