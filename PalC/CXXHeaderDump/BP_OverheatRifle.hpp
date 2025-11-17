#ifndef UE4SS_SDK_BP_OverheatRifle_HPP
#define UE4SS_SDK_BP_OverheatRifle_HPP

class ABP_OverheatRifle_C : public ABP_NormalRifle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0670 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0678 (size: 0x8)
    double HeatValue;                                                                 // 0x0680 (size: 0x8)
    double Const_HeatUpOneShot;                                                       // 0x0688 (size: 0x8)
    double Const_HeatDownSpeed;                                                       // 0x0690 (size: 0x8)
    bool IsOverHeatMode;                                                              // 0x0698 (size: 0x1)
    bool IsPull;                                                                      // 0x0699 (size: 0x1)
    FBP_OverheatRifle_COnChangedHeatValue OnChangedHeatValue;                         // 0x06A0 (size: 0x10)
    void OnChangedHeatValue(bool bOverHeated, double HeatValue);
    double Heat Value;                                                                // 0x06B0 (size: 0x8)

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
}; // Size: 0x6B8

#endif
