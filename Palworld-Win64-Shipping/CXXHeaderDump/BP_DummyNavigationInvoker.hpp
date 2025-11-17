#ifndef UE4SS_SDK_BP_DummyNavigationInvoker_HPP
#define UE4SS_SDK_BP_DummyNavigationInvoker_HPP

class ABP_DummyNavigationInvoker_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalNavigationInvokerComponent* PalNavigationInvoker;
    class USceneComponent* DefaultSceneRoot;

    void ExecuteUbergraph_BP_DummyNavigationInvoker(int32 EntryPoint);
};

#endif
