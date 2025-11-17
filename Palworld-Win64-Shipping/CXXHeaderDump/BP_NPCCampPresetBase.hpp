#ifndef UE4SS_SDK_BP_NPCCampPresetBase_HPP
#define UE4SS_SDK_BP_NPCCampPresetBase_HPP

class ABP_NPCCampPresetBase_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    FBP_NPCCampPresetBase_COnSpawnedCharacter OnSpawnedCharacter;
    void OnSpawnedCharacter(class UPalIndividualCharacterHandle* NewParam);
    bool IsAllEnemyDead;
    class APalNPCCampSpawnerBase* OwnerCampSpawner;
    bool Debug_DisableRayAdjust;
    FBP_NPCCampPresetBase_COnOpenMainTreasureBox OnOpenMainTreasureBox;
    void OnOpenMainTreasureBox();

    void ResetCampForAntiAirCamp();
    void GetCampSpawnerName(FName& Key);
    void DeleteChildActor();
    void GetRewardKey(FName& Key);
    void Ray Adjust Floor();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void カスタムイベント(class UPalIndividualCharacterHandle* NewParam);
    void OnCapturedEvent();
    void カスタムイベント_0(class UPalEnemyCampTreasureBoxSpawnerComponent* SelfComponent);
    void ExecuteUbergraph_BP_NPCCampPresetBase(int32 EntryPoint);
    void OnOpenMainTreasureBox__DelegateSignature();
    void OnSpawnedCharacter__DelegateSignature(class UPalIndividualCharacterHandle* NewParam);
};

#endif
