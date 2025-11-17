#ifndef UE4SS_SDK_BP_PalIncidentInvaderEnemy_HPP
#define UE4SS_SDK_BP_PalIncidentInvaderEnemy_HPP

class UBP_PalIncidentInvaderEnemy_C : public UBP_PalIncidentInvaderBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    double MarchTimer;                                                                // 0x0350 (size: 0x8)
    FPalInvaderDatabaseRow ChosenInvaderData;                                         // 0x0358 (size: 0x90)
    bool EnableTimer;                                                                 // 0x03E8 (size: 0x1)

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
}; // Size: 0x3E9

#endif
