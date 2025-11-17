#ifndef UE4SS_SDK_WBP_IngameStatusPoint_HPP
#define UE4SS_SDK_WBP_IngameStatusPoint_HPP

class UWBP_IngameStatusPoint_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool StatusPointUnused;
    bool TechnologyPointUnused;

    void SetupStatusPointAttention();
    void UpdateUnusedStatusPoint(int32 UnusedPoint);
    void UpdatedTechnologyPoint(int32 TechnologyPoint);
    void ExecuteUbergraph_WBP_IngameStatusPoint(int32 EntryPoint);
};

#endif
