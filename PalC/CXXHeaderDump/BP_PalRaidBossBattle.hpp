#ifndef UE4SS_SDK_BP_PalRaidBossBattle_HPP
#define UE4SS_SDK_BP_PalRaidBossBattle_HPP

class ABP_PalRaidBossBattle_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalRaidBossComponent_C* BP_PalRaidBossComponent;
    class USceneComponent* DefaultSceneRoot;

    void ExecuteUbergraph_BP_PalRaidBossBattle(int32 EntryPoint);
};

#endif
