#ifndef UE4SS_SDK_BP_PalSphere_Body_Legend_HPP
#define UE4SS_SDK_BP_PalSphere_Body_Legend_HPP

class ABP_PalSphere_Body_Legend_C : public ABP_PalSphere_Body_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PalSphere_Body_Legend(int32 EntryPoint);
};

#endif
