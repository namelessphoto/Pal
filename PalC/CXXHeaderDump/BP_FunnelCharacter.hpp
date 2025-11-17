#ifndef UE4SS_SDK_BP_FunnelCharacter_HPP
#define UE4SS_SDK_BP_FunnelCharacter_HPP

class ABP_FunnelCharacter_C : public APalFunnelCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalNavigationInvokerComponent* PalNavigationInvoker;
    class UPalFacialComponent* PalFacial;

    void SetLocationNearTrainer();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnActive(bool NoEffect);
    void OnInactive(bool NoEffect);
    void ExecuteUbergraph_BP_FunnelCharacter(int32 EntryPoint);
};

#endif
