#ifndef UE4SS_SDK_BP_Status_YakushimaBoss002_ChangeMorph_HPP
#define UE4SS_SDK_BP_Status_YakushimaBoss002_ChangeMorph_HPP

class UBP_Status_YakushimaBoss002_ChangeMorph_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0048 (size: 0x8)
    FName Const_MorphName;                                                            // 0x0050 (size: 0x8)

    void Change Morph(double Value);
    void OnBeginStatus();
    void OnEndStatus();
    void ExecuteUbergraph_BP_Status_YakushimaBoss002_ChangeMorph(int32 EntryPoint);
}; // Size: 0x58

#endif
