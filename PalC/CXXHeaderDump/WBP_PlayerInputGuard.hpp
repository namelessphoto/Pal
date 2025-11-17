#ifndef UE4SS_SDK_WBP_PlayerInputGuard_HPP
#define UE4SS_SDK_WBP_PlayerInputGuard_HPP

class UWBP_PlayerInputGuard_C : public UPalUIInputGuard
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnSetup();
    void ExecuteUbergraph_WBP_PlayerInputGuard(int32 EntryPoint);
};

#endif
