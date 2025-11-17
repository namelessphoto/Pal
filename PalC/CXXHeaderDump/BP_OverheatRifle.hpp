#ifndef UE4SS_SDK_BP_OverheatRifle_HPP
#define UE4SS_SDK_BP_OverheatRifle_HPP

class ABP_OverheatRifle_C : public ABP_NormalRifle_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpotLightComponent* SpotLight;
    double HeatValue;
    double Const_HeatUpOneShot;
    double Const_HeatDownSpeed;
    bool IsOverHeatMode;
    bool IsPull;
    FBP_OverheatRifle_COnChangedHeatValue OnChangedHeatValue;
    void OnChangedHeatValue(bool bOverHeated, double HeatValue);
    double Heat Value;

    int32 GetRemainBulletCount();
    void GetAmmoClass(TSubclassOf<class AActor>& AmmoClass);
    void GetMuzzleEffectAttached(class UNiagaraSystem*& Effect);
    void GetHeatValue(double& CurrentHeatValue);
    void isOverHeated(bool& bOverHeated);
    void GetMuzzleLocation(FVector& MuzzleLocation);
    void GetMuzzleEffect(class UNiagaraSystem*& NewParam);
    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
    void ShootBullet();
    void TickCoolDown(double DeltaTime);
    void CanShoot(bool& can);
    void OnShoot(class APalBullet* BulletActor);
    void ReceiveTick(float DeltaSeconds);
    void OnWeaponNotify(EWeaponNotifyType Type);
    void OnPullTrigger();
    void OnReleaseTrigger();
    void OnReloadStart(float InReloadSpeedPlayRate);
    void ReceiveBeginPlay();
    void OnChangedHeatValue_Event(bool bOverHeated, double HeatValue);
    void DecreaseLightIntensify();
    void ExecuteUbergraph_BP_OverheatRifle(int32 EntryPoint);
    void OnChangedHeatValue__DelegateSignature(bool bOverHeated, double HeatValue);
};

#endif
