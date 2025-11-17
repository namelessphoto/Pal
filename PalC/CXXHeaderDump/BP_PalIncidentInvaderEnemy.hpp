#ifndef UE4SS_SDK_BP_PalIncidentInvaderEnemy_HPP
#define UE4SS_SDK_BP_PalIncidentInvaderEnemy_HPP

class UBP_PalIncidentInvaderEnemy_C : public UBP_PalIncidentInvaderBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    double MarchTimer;
    FPalInvaderDatabaseRow ChosenInvaderData;
    bool EnableTimer;

    void ReturnToSpawnedPoint();
    void OnAllCharacterSpawned(TArray<class APalAIController*>& MemberController);
    void OnCharacterSpawned(class APalCharacter* SpawnedCharacter);
    void Get Character Location Type(EPalCharacterLocationType& CharacterLocationType);
    bool GetInvaderStartPoint(FVector& Result);
    void EndProc();
    void StartProc();
    void Tick(float DeltaTime);
    void OnInvaderArrived();
    void ExecuteUbergraph_BP_PalIncidentInvaderEnemy(int32 EntryPoint);
};

#endif
