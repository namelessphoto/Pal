#ifndef UE4SS_SDK_BP_PalBossTower_HPP
#define UE4SS_SDK_BP_PalBossTower_HPP

class ABP_PalBossTower_C : public APalBossTower
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara_QuestGlowEffect;
    class UPalInteractLockSettingComponent* PalInteractLockSetting;
    class UBoxComponent* EntryWaitInfoTrigger;
    class USceneComponent* DeadItemDropPoint;
    class UBP_InteractableBox_C* BP_InteractableBox;
    class USphereComponent* EntryCancel_Trigger;
    class USceneComponent* TopWarpPoint;
    class USceneComponent* FrontWarpPoint;
    class USphereComponent* InsidePlayerCheck_Trigger;
    class UStaticMeshComponent* SM_TowerSphere_tower_sphere_geo;
    class UStaticMeshComponent* SM_TowerSphere_tower_sphereCube_geo;
    class UStaticMeshComponent* SM_Tower;
    class USceneComponent* DefaultSceneRoot;
    bool IsOpen;
    FDataTableRowHandle DialogMsgID;
    TSoftObjectPtr<APalPlayerCharacter> CachedRequestStartBattlePlayer;
    FGuid DialogUId;
    TMap<class EPalBossType, class FDataTableRowHandle> BossTypeAndQuestIdMap;
    FTimerHandle QuestManagerInitializeTimerHandle;

    void OnCompleteQuestLocal(const FName& QuestId);
    void OnOrderedQuestLocal(const FName& QuestId);
    void OnCloseStartBattleCheckDialog(bool bResult);
    void OpenStartBattleCheckDialog();
    FTransform GetDeadItemDropPoint();
    void SwitchTrigger();
    void UpdateBossBattleState(EPalBossBattleState NewBossBattleState);
    void Force Warp Player();
    FTransform GetTopWarpPoint();
    FTransform GetFrontWarpPoint();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Interact(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    void BndEvt__BP_PalBossTower_InsideEntry_Trigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnChangeBossBattleStateBP(EPalBossBattleState NewState);
    void BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_8_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_10_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void IntializeQuestManagerEvent();
    void ExecuteUbergraph_BP_PalBossTower(int32 EntryPoint);
};

#endif
