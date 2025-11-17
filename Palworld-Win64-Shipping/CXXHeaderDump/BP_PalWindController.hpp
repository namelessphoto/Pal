#ifndef UE4SS_SDK_BP_PalWindController_HPP
#define UE4SS_SDK_BP_PalWindController_HPP

class ABP_PalWindController_C : public APalWindController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void UpdateNPC(FPalWindInfo& WindInfo);
    void UpdateNiagaraParameterCollection(const FPalWindInfo& WindInfo);
    void ExecuteUbergraph_BP_PalWindController(int32 EntryPoint);
};

#endif
