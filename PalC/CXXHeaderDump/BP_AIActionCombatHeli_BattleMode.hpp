#ifndef UE4SS_SDK_BP_AIActionCombatHeli_BattleMode_HPP
#define UE4SS_SDK_BP_AIActionCombatHeli_BattleMode_HPP

class UBP_AIActionCombatHeli_BattleMode_C : public UBP_AIActionCombatHeliBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AActor* CurrentTarget;
    double Const_BattleDistanceMin;
    double Const_BattleDistanceMax;
    double Const_BattleHeight;
    double Const_SideMovePower;
    class UBP_CombatHeliRpidWeaponComponent_FrontMG_C* GunComponent;
    class UBP_CombatHeliRpidWeaponComponent_WingMiso_C* MisoComponent;
    bool IsBomberMode;
    class UBP_CombatHeliRpidWeaponComponent_Bomber_C* BomberComponent;
    double MoveDirectionRight;
    double tempDeltaTime;
    double Const_BombShootStartDistance;
    double Const_DefaultMoveSpeedRate;
    double Const_BombMoveSpeedRate;
    TArray<FPalOilrigCombatHeliRandomWeaponInfo> Const_WeaponRandomInfo;
    bool IsStop;
    double Const_HeightMoveSpeedRate;
    EPalOilrigCombatHeliWeaponType CurrentWeaponType;
    class UBP_CombatHeliRpidWeaponComponent_C* CurrentWeaponComponent;
    FTimerHandle PlayerCheckTimerHandle;

    void CheckPlayerDistanceForBGM();
    void RemoveAllPlayerTarget();
    void ChangeAimTarget();
    void Is Valid Current Target(bool& Valid);
    void SetupComponent();
    void TickBP();
    void ChangeMoveDirection();
    void RayCheckToTarget(bool& Success);
    void ReleaseTriggerAllWeapn();
    void ChangeNextWeapon();
    void IsNearTarget2D(double Distance, bool& Near);
    void SetMoveVelocity();
    void RotateToTarget(double DeltaTime);
    void AttackProcess();
    void ActionAbort(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void ActionResume(class APawn* ControlledPawn);
    void ActionStart(class APawn* ControlledPawn);
    void OnChildActionFinished(class UPawnAction* action, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode(int32 EntryPoint);
};

#endif
