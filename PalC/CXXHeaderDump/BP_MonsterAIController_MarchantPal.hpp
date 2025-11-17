#ifndef UE4SS_SDK_BP_MonsterAIController_MarchantPal_HPP
#define UE4SS_SDK_BP_MonsterAIController_MarchantPal_HPP

class ABP_MonsterAIController_MarchantPal_C : public ABP_MonsterAIControllerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector Spawned Position;
    bool EscapeMode;
    bool DespawnDelay;

    void SetupSpawnedPosition();
    void IsEscapeEnd(bool& IsEscapeEnd);
    void ReceiveTick(float DeltaSeconds);
    void ReceivePossess(class APawn* PossessedPawn);
    void カスタムイベント(FPalInstanceID ID);
    void StartEscape(class AActor* TargetActor);
    void カスタムイベント_1(FPalDeadInfo DeadInfo);
    void カスタムイベント_2(class UPalVisualEffectBase* VisualEffect);
    void ExecuteUbergraph_BP_MonsterAIController_MarchantPal(int32 EntryPoint);
};

#endif
