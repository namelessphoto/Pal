#ifndef UE4SS_SDK_WBP_Ingame_InteractMultiplayModifier_HPP
#define UE4SS_SDK_WBP_Ingame_InteractMultiplayModifier_HPP

class UWBP_Ingame_InteractMultiplayModifier_C : public UPalUIBuildMultiplayModifierHUD
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UTextBlock* UserNameTextBlock;                                              // 0x0438 (size: 0x8)

    void OnSetup();
    void OnUpdateLastModifiedUserName();
    void ExecuteUbergraph_WBP_Ingame_InteractMultiplayModifier(int32 EntryPoint);
}; // Size: 0x440

#endif
