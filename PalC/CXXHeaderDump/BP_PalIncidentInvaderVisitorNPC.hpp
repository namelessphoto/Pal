#ifndef UE4SS_SDK_BP_PalIncidentInvaderVisitorNPC_HPP
#define UE4SS_SDK_BP_PalIncidentInvaderVisitorNPC_HPP

class UBP_PalIncidentInvaderVisitorNPC_C : public UBP_PalIncidentInvaderBase_C
{
    TSubclassOf<class APalAIController> GuardmanNPCAIControllerClass;
    double Formation_Width;
    double FormationSpace_X;
    double FormationSpace_Y;

    void OnLeaderBaseCampArrived();
    void CalcFormationOffset(int32 Index, int32 Row, FVector& Offset);
    TSubclassOf<class APalAIController> GetNPCAIControllerClass(const FPalInvaderSpawnCharacterParameter& SpawnParameter);
    void IsSquad(bool& Result);
    void Get Chosen Row Data(FPalVisitorNPCDatabaseRow& ChosenRowData);
    void OnAllCharacterSpawned(TArray<class APalAIController*>& MemberController);
    void Get Character Location Type(EPalCharacterLocationType& CharacterLocationType);
    bool GetInvaderStartPoint(FVector& Result);
    void EndProc();
    void StartProc();
};

#endif
