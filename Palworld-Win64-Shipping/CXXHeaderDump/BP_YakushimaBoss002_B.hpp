#ifndef UE4SS_SDK_BP_YakushimaBoss002_B_HPP
#define UE4SS_SDK_BP_YakushimaBoss002_B_HPP

class ABP_YakushimaBoss002_B_C : public ABP_MonsterBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* SuccessFXArea;
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule_Heart;
    class UPalUVEyeComponent* PalUVEye;
    class UPalIndividualCharacterHandle* LeftHandle;
    class UPalIndividualCharacterHandle* RightHandle;
    class UPalIndividualCharacterHandle* HeadHandle;
    bool Break_Left;
    bool Break_Right;
    bool Break_Head;
    class UPalIndividualCharacterHandle* EyeHandle;
    double ShieldScale;
    FTimerHandle BossCryEnd;
    FName CharacterID_Left;
    FName CharacterID_Right;
    FName CharacterID_Head;
    TSubclassOf<class AController> Controller_Hand;
    TSubclassOf<class AController> Controller_Head;

    class UPalIndividualCharacterHandle* SpawnParts(const FName CharacterID, TSubclassOf<class AController> Controller Class, FSpawnPartsSpawnCallback spawnCallback);
    void OnRep_Break_Head();
    void OnRep_Break_Left();
    void OnRep_Break_Right();
    void CanApplyHeartDamage(bool& Result);
    void OnNotifyEnd_555756C845BF486E0754DF9A1D3AF297(FName NotifyName);
    void OnNotifyBegin_555756C845BF486E0754DF9A1D3AF297(FName NotifyName);
    void OnInterrupted_555756C845BF486E0754DF9A1D3AF297(FName NotifyName);
    void OnBlendOut_555756C845BF486E0754DF9A1D3AF297(FName NotifyName);
    void OnCompleted_555756C845BF486E0754DF9A1D3AF297(FName NotifyName);
    void ReceiveBeginPlay();
    void SpawnLeft(FPalInstanceID ID);
    void SpawnRight(FPalInstanceID ID);
    void OnInitialized(class APalCharacter* InCharacter);
    void OnUpdateCollision();
    void BreakLeft();
    void BreakRight();
    void SpawnEye(FPalInstanceID ID);
    void PlayDeathAnimation();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void PlaySuccessFX();
    void StopSuccessFX();
    void BossCry();
    void SpawnHead(FPalInstanceID ID);
    void BreakHead();
    void UpdateTargetLocation();
    void ExecuteUbergraph_BP_YakushimaBoss002_B(int32 EntryPoint);
};

#endif
