#ifndef UE4SS_SDK_BP_PalSphere_Body_Master_HPP
#define UE4SS_SDK_BP_PalSphere_Body_Master_HPP

class ABP_PalSphere_Body_Master_C : public ABP_PalSphere_Body_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PalSphere_Body_Master(int32 EntryPoint);
};

#endif
