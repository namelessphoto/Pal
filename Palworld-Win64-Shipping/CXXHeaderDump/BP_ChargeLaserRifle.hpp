#ifndef UE4SS_SDK_BP_ChargeLaserRifle_HPP
#define UE4SS_SDK_BP_ChargeLaserRifle_HPP

class ABP_ChargeLaserRifle_C : public APalWeaponBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh;
    class UNiagaraComponent* ChargeEffect;
    class USkeletalMeshComponent* WeaponMesh;
    class USceneComponent* DefaultSceneRoot;
    bool IsPull;
    double ChargeValue;
    double Const_IncrementSpeed;
    double Const_DecrementSpeed;
    double tempDeltaTime;
    FBP_ChargeLaserRifle_COnChangedChargeValue OnChangedChargeValue;
    void OnChangedChargeValue(double CurretnChargeValue);
    double ReloadSpeedPlayRate;

    void GetCurrentChargeValue(double& ChargeValue);
    FTransform GetLeftHandTransform();
    bool IsUseLeftHandAttach();
    void OnRestartReload();
    void CanShoot(bool& can);
    void GetTargetLocation(FVector& targetPosition);
    void GetMuzzleTransform(FTransform& TF);
    void ShootBullet();
    void ChangeChargeValue();
    void OnNotifyEnd_7D3D1A57488DAA75B92021BFFA4E3435(FName NotifyName);
    void OnNotifyBegin_7D3D1A57488DAA75B92021BFFA4E3435(FName NotifyName);
    void OnInterrupted_7D3D1A57488DAA75B92021BFFA4E3435(FName NotifyName);
    void OnBlendOut_7D3D1A57488DAA75B92021BFFA4E3435(FName NotifyName);
    void OnCompleted_7D3D1A57488DAA75B92021BFFA4E3435(FName NotifyName);
    void OnNotifyEnd_6868AA2F41E676FCD1C891B7E8A7B79A(FName NotifyName);
    void OnNotifyBegin_6868AA2F41E676FCD1C891B7E8A7B79A(FName NotifyName);
    void OnInterrupted_6868AA2F41E676FCD1C891B7E8A7B79A(FName NotifyName);
    void OnBlendOut_6868AA2F41E676FCD1C891B7E8A7B79A(FName NotifyName);
    void OnCompleted_6868AA2F41E676FCD1C891B7E8A7B79A(FName NotifyName);
    void OnNotifyEnd_F04017F8494C2F37C78E51B48EBD2A1C(FName NotifyName);
    void OnNotifyBegin_F04017F8494C2F37C78E51B48EBD2A1C(FName NotifyName);
    void OnInterrupted_F04017F8494C2F37C78E51B48EBD2A1C(FName NotifyName);
    void OnBlendOut_F04017F8494C2F37C78E51B48EBD2A1C(FName NotifyName);
    void OnCompleted_F04017F8494C2F37C78E51B48EBD2A1C(FName NotifyName);
    void OnNotifyEnd_B8C41D4B4A5B4B1CCDEF6198D3783FEF(FName NotifyName);
    void OnNotifyBegin_B8C41D4B4A5B4B1CCDEF6198D3783FEF(FName NotifyName);
    void OnInterrupted_B8C41D4B4A5B4B1CCDEF6198D3783FEF(FName NotifyName);
    void OnBlendOut_B8C41D4B4A5B4B1CCDEF6198D3783FEF(FName NotifyName);
    void OnCompleted_B8C41D4B4A5B4B1CCDEF6198D3783FEF(FName NotifyName);
    void OnNotifyEnd_1A67CE1042B43EF42A4334AFA2181CEE(FName NotifyName);
    void OnNotifyBegin_1A67CE1042B43EF42A4334AFA2181CEE(FName NotifyName);
    void OnInterrupted_1A67CE1042B43EF42A4334AFA2181CEE(FName NotifyName);
    void OnBlendOut_1A67CE1042B43EF42A4334AFA2181CEE(FName NotifyName);
    void OnCompleted_1A67CE1042B43EF42A4334AFA2181CEE(FName NotifyName);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnPullTrigger();
    void OnReleaseTrigger();
    void OnWeaponNotify(EWeaponNotifyType Type);
    void OnReloadStart(float InReloadSpeedPlayRate);
    void OnAttachWeapon(class AActor* attachActor);
    void ExecuteUbergraph_BP_ChargeLaserRifle(int32 EntryPoint);
    void OnChangedChargeValue__DelegateSignature(double CurretnChargeValue);
};

#endif
