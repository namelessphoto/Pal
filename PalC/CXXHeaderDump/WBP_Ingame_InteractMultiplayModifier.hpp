#ifndef UE4SS_SDK_WBP_Ingame_InteractMultiplayModifier_HPP
#define UE4SS_SDK_WBP_Ingame_InteractMultiplayModifier_HPP

class UWBP_Ingame_InteractMultiplayModifier_C : public UPalUIBuildMultiplayModifierHUD
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* UserNameTextBlock;

    void OnSetup();
    void OnUpdateLastModifiedUserName();
    void ExecuteUbergraph_WBP_Ingame_InteractMultiplayModifier(int32 EntryPoint);
};

#endif
