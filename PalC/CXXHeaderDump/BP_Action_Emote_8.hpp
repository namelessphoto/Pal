#ifndef UE4SS_SDK_BP_Action_Emote_8_HPP
#define UE4SS_SDK_BP_Action_Emote_8_HPP

class UBP_Action_Emote_8_C : public UBP_Action_Emote_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_Action_Emote_KickCollision_C* NewVar;

    void OnNotify(FName Value);
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_Emote_8(int32 EntryPoint);
};

#endif
