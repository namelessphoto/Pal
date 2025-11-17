#ifndef UE4SS_SDK_BP_ActionDeath_YakushimaBoss002_HPP
#define UE4SS_SDK_BP_ActionDeath_YakushimaBoss002_HPP

class UBP_ActionDeath_YakushimaBoss002_C : public UBP_ActionDeath_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnBeginAction();
    void ApplyRagdoll();
    void ExecuteUbergraph_BP_ActionDeath_YakushimaBoss002(int32 EntryPoint);
};

#endif
