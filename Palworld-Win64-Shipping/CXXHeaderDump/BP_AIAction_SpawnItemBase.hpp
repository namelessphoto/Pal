#ifndef UE4SS_SDK_BP_AIAction_SpawnItemBase_HPP
#define UE4SS_SDK_BP_AIAction_SpawnItemBase_HPP

class UBP_AIAction_SpawnItemBase_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 SpawnCount;
    class APalCharacter* ActionCharacter;
    FPalStaticItemIdAndNum SpawnItemInfo;
    FName SpawnSocketName;
    FVector SpawnLocationOffset;
    FRotator SpawnItemRotator;

    void OnActionNotify_Proc(FName Notify);
    void IsActionRunning(bool& IsRunning);
    void SpawnItem();
    void AbortProc();
    bool CanSpawnItem();
    void GetStatusInstance(class UPalStatusCollectItem*& Status Collect Item);
    void SetMoveFlag(bool IsActive);
    void Setup(class UObject* Object);
    void ActionStart(class APawn* ControlledPawn);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void OnAbort();
    void OnActionNotify(const class UPalActionBase* action, FName NotifyName);
    void OnCompleteItemSpawn();
    void PlaySpawnItemAction();
    void ExecuteUbergraph_BP_AIAction_SpawnItemBase(int32 EntryPoint);
};

#endif
