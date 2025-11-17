#ifndef UE4SS_SDK_BP_PalAIBlackboard_Common_HPP
#define UE4SS_SDK_BP_PalAIBlackboard_Common_HPP

class UBP_PalAIBlackboard_Common_C : public UPalAIBlackboardBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector MoveGoal_BB;
    bool IsRestMode_BB;
    bool IsReturnTerritoryMode_BB;
    FVector SpawnedPosition_BB;
    FVector SpawnerLocation_BB;
    double ReturnTerritoryRadius_BB;
    double WalkingRadius_BB;
    bool IsBattleMode_BB;
    FVector BattleStartLocation_BB;
    FPalInstanceID TalkerID_BB;
    bool IsEscapeMode_BB;
    double SleepStartTime_BB;
    double SleepEndTime_BB;
    FGuid DrinkWaterSpotID_BB;
    bool IsDrinkWaterMode_BB;
    bool Disable_ReturnTerritory_WildPal;
    double InvaderStartDelayTime_BB;
    bool Disable_Escape_Invader;
    bool IsVisitorDashMode_BB;
    bool IsTalking_BB;
    double ReturnRadiusRate_Combat_BB;

    void Initialize_PalBB(class AActor* SelfActor);
    void ExecuteUbergraph_BP_PalAIBlackboard_Common(int32 EntryPoint);
};

#endif
