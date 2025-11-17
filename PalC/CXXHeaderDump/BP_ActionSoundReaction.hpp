#ifndef UE4SS_SDK_BP_ActionSoundReaction_HPP
#define UE4SS_SDK_BP_ActionSoundReaction_HPP

class UBP_ActionSoundReaction_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_ActionSoundReaction(int32 EntryPoint);
};

#endif
