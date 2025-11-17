#ifndef UE4SS_SDK_WBP_BossBattle_BossEliminated_HPP
#define UE4SS_SDK_WBP_BossBattle_BossEliminated_HPP

class UWBP_BossBattle_BossEliminated_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_OpenClose;

    void Construct();
    void ExecuteUbergraph_WBP_BossBattle_BossEliminated(int32 EntryPoint);
};

#endif
