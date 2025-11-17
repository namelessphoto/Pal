#ifndef UE4SS_SDK_BP_CutsceneActor_Arena_PreBattle_HPP
#define UE4SS_SDK_BP_CutsceneActor_Arena_PreBattle_HPP

class ABP_CutsceneActor_Arena_PreBattle_C : public ABP_CutsceneActorBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalCutsceneArenaPreBattleBindParameter* PreBattleBindParameter;

    void SetBindParameter(class UPalCutsceneBindParameter* BindParameter);
    void OnPrePlayCutscene();
    void ExecuteUbergraph_BP_CutsceneActor_Arena_PreBattle(int32 EntryPoint);
};

#endif
