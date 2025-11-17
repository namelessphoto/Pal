#ifndef UE4SS_SDK_BP_Fishing_CatchBattle_HPP
#define UE4SS_SDK_BP_Fishing_CatchBattle_HPP

class UBP_Fishing_CatchBattle_C : public UPalFishingCatchBattle
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_Fishing_CatchBattle_Behavior_C* BehaviorModule;
    FPalFishingCatchBattleInfo CatchBattleInfo;
    TMap<class EPalFishBattleBehaviorType, class TSubclassOf<UBP_Fishing_CatchBattle_Behavior_C>> BehaviorMap;

    void Tick(float DeltaTime);
    void OnInitialized(const FPalFishingCatchBattleInfo& Info);
    void ExecuteUbergraph_BP_Fishing_CatchBattle(int32 EntryPoint);
};

#endif
