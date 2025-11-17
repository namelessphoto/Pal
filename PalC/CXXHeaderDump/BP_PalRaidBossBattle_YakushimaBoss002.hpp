#ifndef UE4SS_SDK_BP_PalRaidBossBattle_YakushimaBoss002_HPP
#define UE4SS_SDK_BP_PalRaidBossBattle_YakushimaBoss002_HPP

class ABP_PalRaidBossBattle_YakushimaBoss002_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalRaidBossComponent_YakushimaBoss002_C* BP_PalRaidBossComponent_YakushimaBoss002;
    class USceneComponent* DefaultSceneRoot;

    void ExecuteUbergraph_BP_PalRaidBossBattle_YakushimaBoss002(int32 EntryPoint);
};

#endif
