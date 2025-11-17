#ifndef UE4SS_SDK_BP_GliderObjectBase_HPP
#define UE4SS_SDK_BP_GliderObjectBase_HPP

class ABP_GliderObjectBase_C : public APalGliderObject
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void OnStartGliding();
    void OnEndGliding();
    void ExecuteUbergraph_BP_GliderObjectBase(int32 EntryPoint);
};

#endif
