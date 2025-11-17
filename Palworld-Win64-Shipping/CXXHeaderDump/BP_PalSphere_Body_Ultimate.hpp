#ifndef UE4SS_SDK_BP_PalSphere_Body_Ultimate_HPP
#define UE4SS_SDK_BP_PalSphere_Body_Ultimate_HPP

class ABP_PalSphere_Body_Ultimate_C : public ABP_PalSphere_Body_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PalSphere_Body_Ultimate(int32 EntryPoint);
};

#endif
