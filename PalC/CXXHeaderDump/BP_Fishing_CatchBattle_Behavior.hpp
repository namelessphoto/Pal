#ifndef UE4SS_SDK_BP_Fishing_CatchBattle_Behavior_HPP
#define UE4SS_SDK_BP_Fishing_CatchBattle_Behavior_HPP

class UBP_Fishing_CatchBattle_Behavior_C : public UPalFishingCatchBattleBehaviorBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    EPalFishBattleBehaviorType BehaviorType;
    double Difficulty;
    double CurrentPosX;
    double TargetPosX;
    double MaxPosX;
    double StartPosX;
    double TargetChangeTimer;
    double TargetPosMultiplier;
    double TargetRandMin;
    double TargetRandMax;
    double IntervalMin;
    double IntervalMax;
    double IntervalMultiplier;
    double EaseAlpha;
    bool IsMoving;
    double arrivetime;
    double SinkerDiverSpeed;
    double SinkerDiverBias;
    FString DebugString;
    double MinPosX;
    bool IsFloatWhileNotMove;
    EPalFishBattleBehaviorType FishingBehavoirType;
    bool PreMoveRight;
    double TiredDistance;
    double TiredDistanceSetting;
    bool IsTired;
    double TiredInterval;
    double TiredIntervalSetting;
    double RandomMoveMod;

    void OverRideDistance(double Distance, double& mod_distance);
    void OverRideNotMove_DiverRiser(double DeltaTime, double mod);
    void OverRideArrivalTime_Calm(double arrivetime, double& mod_arrivetime);
    void Tick Calc Fish Pos X(double DeltaTime, double& FishPosX);
    void Get Predict Arrival Time(double Distance, double& ArrivalTime);
    void GetIsChangeNextInterval(double Difficulty, int32 SameDirection, bool& IsChange);
    void UpdateNextTarget(double NextTargetPosX, double Distance);
    void Get Next Target Pos X(double CurrentPosX, bool ForceUp, double mod, double max_Clamp, double& Distance, double& NextTargetPos, bool& IsMoveRight);
    void ClampLimitPos(double PosX, double& ClampedPosX);
    void GetDirection(double& Direction);
    void GetNextInterval(double& NextInterval);
    void Initialize(const FPalFishingCatchBattleInfo& Info);
    void OnInitialized();
    void ExecuteUbergraph_BP_Fishing_CatchBattle_Behavior(int32 EntryPoint);
};

#endif
