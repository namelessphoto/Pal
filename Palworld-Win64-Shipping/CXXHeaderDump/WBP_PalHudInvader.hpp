#ifndef UE4SS_SDK_WBP_PalHudInvader_HPP
#define UE4SS_SDK_WBP_PalHudInvader_HPP

class UWBP_PalHudInvader_C : public UPalUserWidgetWorldHUD
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* MI_Icon;

    void OnSetup();
    void ParentDestroyEvent(class AActor* DestroyedActor);
    void ParentDeadEvent(FPalDeadInfo DeadInfo);
    void ExecuteUbergraph_WBP_PalHudInvader(int32 EntryPoint);
};

#endif
