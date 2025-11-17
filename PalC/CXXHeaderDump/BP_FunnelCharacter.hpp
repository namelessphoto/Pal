#ifndef UE4SS_SDK_BP_FunnelCharacter_HPP
#define UE4SS_SDK_BP_FunnelCharacter_HPP

class ABP_FunnelCharacter_C : public APalFunnelCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A30 (size: 0x8)
    class UPalNavigationInvokerComponent* PalNavigationInvoker;                       // 0x0A38 (size: 0x8)
    class UPalFacialComponent* PalFacial;                                             // 0x0A40 (size: 0x8)

    void SetLocationNearTrainer();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnActive(bool NoEffect);
    void OnInactive(bool NoEffect);
    void ExecuteUbergraph_BP_FunnelCharacter(int32 EntryPoint);
}; // Size: 0xA48

#endif
