#ifndef UE4SS_SDK_BP_Status_YakushimaBoss002_ChangeMorph_HPP
#define UE4SS_SDK_BP_Status_YakushimaBoss002_ChangeMorph_HPP

class UBP_Status_YakushimaBoss002_ChangeMorph_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName Const_MorphName;

    void Change Morph(double Value);
    void OnBeginStatus();
    void OnEndStatus();
    void ExecuteUbergraph_BP_Status_YakushimaBoss002_ChangeMorph(int32 EntryPoint);
};

#endif
