#ifndef UE4SS_SDK_BP_LevelInstance_BossRoomBase_HPP
#define UE4SS_SDK_BP_LevelInstance_BossRoomBase_HPP

class ABP_LevelInstance_BossRoomBase_C : public APalBossBattleLevelInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* TowerBox8;
    class UBoxComponent* TowerBox7;
    class UBoxComponent* TowerBox6;
    class UBoxComponent* TowerBox5;
    class UBoxComponent* TowerBox4;
    class UBoxComponent* TowerBox3;
    class UBoxComponent* TowerBox2;
    class UBoxComponent* TowerBox1;
    class UBoxComponent* ForNavMesh_Ground;
    class UBoxComponent* EdgeBox3;
    class UBoxComponent* EdgeBox2;
    class UBoxComponent* EdgeBox1;
    class UBoxComponent* EdgeBox;
    class USceneComponent* GroundCheckPoint;
    class UBoxComponent* WallBox4;
    class UBoxComponent* WallBox3;
    class UBoxComponent* WallBox2;
    class UBoxComponent* WallBox1;
    class UBoxComponent* CeilingBox;
    class UStaticMeshComponent* SequencerTransform;
    class UStaticMeshComponent* SM_EnemyPoint;
    class UStaticMeshComponent* PlayerStartPoint;
    class ABP_BossBattle_BossCharacterSpawner_C* BossSpawner;
    FBP_LevelInstance_BossRoomBase_COnSetBoss OnSetBoss;
    void OnSetBoss(class APalCharacter* Boss);
    FBP_LevelInstance_BossRoomBase_COnLoadedLevel OnLoadedLevel;
    void OnLoadedLevel();
    bool IsLoaded;

    void GetBossSpawner(class ABP_BossBattle_BossCharacterSpawner_C*& BossSpawner);
    FTransform GetSequencerTransform();
    bool CheckLevelLoaded();
    FTransform GetPlayerStartTransform();
    void Spawn Boss Spawner_Internal(EPalBossType Boss, int32 JoinPlayerNum);
    void Set Spawn Boss Character(class APalCharacter* Boss);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ResetBossLocation();
    void SpawnBossSpawner(EPalBossType BossType, int32 JoinPlayerNum);
    void ExecuteUbergraph_BP_LevelInstance_BossRoomBase(int32 EntryPoint);
    void OnLoadedLevel__DelegateSignature();
    void OnSetBoss__DelegateSignature(class APalCharacter* Boss);
};

#endif
