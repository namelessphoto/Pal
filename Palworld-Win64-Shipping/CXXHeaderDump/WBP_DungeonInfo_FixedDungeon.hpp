#ifndef UE4SS_SDK_WBP_DungeonInfo_FixedDungeon_HPP
#define UE4SS_SDK_WBP_DungeonInfo_FixedDungeon_HPP

class UWBP_DungeonInfo_FixedDungeon_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BossExistsImage;
    class UCanvasPanel* Dungeon_Info;
    class UCanvasPanel* DungeonInfo;
    class UBP_PalTextBlock_C* Text_DungeonName;
    class UBP_PalTextBlock_C* Text_LevelValue;
    class UWBP_BossBattle_Timer_C* WBP_BossBattle_Timer;
    FPalDungeonInfoParameter DungeonInfoParameter;
    FText DefaultDisappearText;
    FGameDateTime BossRespawnTimeAt;

    void SetDungeonBossSpawned(class UPalDungeonInstanceModel* DungeonInstanceModel);
    void UpdateBossRespawnRemainTime();
    void SetBossRespawnTimeAt(class UPalDungeonInstanceModel* DungeonInstanceModel);
    void Set Dungeon Level(class UPalDungeonInstanceModel* DungeonInstanceModel);
    void SetDungeonName(class UPalDungeonInstanceModel* DungeonInstanceModel);
    void Update Display Info(class UPalDungeonInstanceModel* DungeonInstanceModel);
    void SetupEvents(class UPalStageModelDungeon* StageModel);
    void UpdateDungeonInfoByTick();
    void Setup by Stage Model(class UPalStageModelDungeon* InStageModel);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_DungeonInfo_FixedDungeon(int32 EntryPoint);
};

#endif
