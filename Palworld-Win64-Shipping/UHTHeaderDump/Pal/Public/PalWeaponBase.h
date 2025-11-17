#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalAdditionalEffectType.h"
#include "EPalDamageAnimationReactionType.h"
#include "EPalPassiveSkillEffectType.h"
#include "EPalShooterFlagContainerPriority.h"
#include "EPalWeaponType.h"
#include "EWeaponCoopType.h"
#include "EWeaponNotifyType.h"
#include "EWeaponPlaySoundType.h"
#include "FlagContainer.h"
#include "PalDataTableRowName_SoundID.h"
#include "PalItemData.h"
#include "PalItemId.h"
#include "PalOwnerCharacterAcquirableInterface.h"
#include "PalPassiveSkillEffect.h"
#include "PalSoundOptions.h"
#include "PalSpecialAttackRateInfo.h"
#include "Templates/SubclassOf.h"
#include "PalWeaponBase.generated.h"

class APalBackWeaponBase;
class APalBullet;
class APalCharacter;
class UCameraShakeBase;
class UCurveFloat;
class UForceFeedbackEffect;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UPalDynamicItemDataBase;
class UPalDynamicWeaponItemDataBase;
class UPalSoundSlot;
class UPalStaticWeaponItemData;
class USceneComponent;
class UTexture2D;

UCLASS()
class APalWeaponBase : public AActor, public IPalOwnerCharacterAcquirableInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponNotifyDelegate, EWeaponNotifyType, NotifyType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUseBulletDelegate, int32, remainingBulletsNum);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReloadBulletsDelegate, int32, bulletsNum);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalChangeHiddenWeaponDelegate, bool, bIsHidden);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnShootBulletDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDetachWeaponDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCoolDownUpdateDelegate, float, RemainingTime, float, CoolDownTime);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeCoolDownStateDelegate, bool, IsStart);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAttachWeaponDelegate);
    DECLARE_DYNAMIC_DELEGATE_RetVal(int32, FGetWeaponDamageDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FForceUpdateBulletDelegate, int32, remainingBulletsNum);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCreatedBulletDelegate, APalBullet*, Bullet);
    
    UPROPERTY(BlueprintAssignable)
    FReloadBulletsDelegate OnReloadDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FForceUpdateBulletDelegate OnForceUpdateBulletDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FUseBulletDelegate OnUseBulletDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnShootBulletDelegate OnShootBulletDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnChangeCoolDownStateDelegate OnChangeCoolDownStateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnCoolDownUpdateDelegate OnCoolDownUpdateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FCreatedBulletDelegate OnCreatedBulletDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGetWeaponDamageDelegate OnGetWeaponDamageDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnAttachWeaponDelegate OnAttachWeaponDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnDetachWeaponDelegate OnDetachWeaponDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponNotifyDelegate OnWeaponNotifyDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPalChangeHiddenWeaponDelegate OnChangedHiddenWeaponDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BulletDeleteTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BulletDecayStartRate;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* RecoilCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float RecoilYawRange;
    
    UPROPERTY(EditDefaultsOnly)
    float RecoilPitchTotalMax;
    
    UPROPERTY(EditDefaultsOnly)
    float RecoilDecaySpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCameraShakeBase> ShotCameraShake;
    
    UPROPERTY(EditDefaultsOnly)
    UForceFeedbackEffect* ShotForceFeedbackEffect;
    
    UPROPERTY(EditDefaultsOnly)
    EWeaponCoopType WeaponCoopType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalWeaponType WeaponType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsRequiredBullet;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName BulletItemName;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* ShootBlurMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* ShootBlurAlphaCurve;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FPalSpecialAttackRateInfo> SpecialAttackRateInfos;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> weaponIconTexture;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalDamageAnimationReactionType weaponBulletDamageReactionType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UPalSoundSlot> PalSoundSlotClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EWeaponPlaySoundType, FPalDataTableRowName_SoundID> PlaySoundIds;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsEmptyOtomoPal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CoolDownTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool IsTriggerOnlyFireWeapon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PvPDamageRate;
    
    UPROPERTY(EditDefaultsOnly)
    bool IsInfinityMagazine;
    
    UPROPERTY(EditDefaultsOnly)
    bool IsOverrideAnimRateScale;
    
    UPROPERTY(EditDefaultsOnly)
    float OverrideAnimRateScale;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<UMaterialInterface*, UMaterialInterface*> OverrideMaterialMap_ForUI;
    
private:
    UPROPERTY()
    UMaterialInstanceDynamic* ShootBlurMaterialDynamic;
    
    UPROPERTY(Transient)
    FPalItemId ownItemID;
    
    UPROPERTY(Transient)
    FPalItemData ownItemData;
    
    UPROPERTY()
    UPalStaticWeaponItemData* ownWeaponStaticData;
    
    UPROPERTY()
    UPalDynamicWeaponItemDataBase* ownWeaponDynamicData;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer HiddenWeapon;
    
    UPROPERTY(Transient)
    UPalSoundSlot* PalSoundSlotCache;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float RecoilPowerRate;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsScopeMode;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsOneBulletReloadWeapon;
    
    UPROPERTY(EditDefaultsOnly)
    float DelayDestorySecond;
    
    UPROPERTY(EditDefaultsOnly)
    bool IsUnnecessaryDynamicData;
    
    UPROPERTY(EditDefaultsOnly)
    EPalShooterFlagContainerPriority ShooterFlagPriority;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<APalBackWeaponBase> BackWeaponClass;
    
private:
    UPROPERTY(Transient)
    APalBackWeaponBase* BackWeaponModel;
    
    UPROPERTY(Transient)
    int32 LoadoutSelectorIndex;
    
    UPROPERTY(Transient)
    TArray<UMaterialInterface*> OriginalMaterials;
    
public:
    APalWeaponBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnbindGetWeaponDamageDelegate();
    
    UFUNCTION(BlueprintPure)
    UPalDynamicWeaponItemDataBase* TryGetDynamicWeaponData() const;
    
    UFUNCTION(BlueprintCallable)
    void StartCoolDown(float Rate);
    
    UFUNCTION()
    void SetupWeaponSkill();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetHiddenWeaponMyself(bool isHidden);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetHiddenWeaponDefault(bool isHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetHiddenWeapon(FName flagName, bool isHidden);
    
    UFUNCTION(BlueprintCallable)
    void SendWeaponNotify(EWeaponNotifyType Type);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool SeekRightHandOpen() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool SeekLeftHandOpen() const;
    
    UFUNCTION(NetMulticast, Reliable)
    void RPCDummy();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReserveSummonWeapon();
    
    UFUNCTION(BlueprintCallable)
    void RequestConsumeItem_ForThrowWeapon(const FName& StaticItemId, int32 ConsumeNum);
    
    UFUNCTION(BlueprintCallable)
    void RequestConsumeItem(const FName& StaticItemId, int32 ConsumeNum);
    
public:
    UFUNCTION(BlueprintCallable)
    bool ReloadBullets();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReleaseSummonWeapon();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlaySoundWithOption(const FPalDataTableRowName_SoundID& ID, const FPalSoundOptions& Arg);
    
    UFUNCTION(BlueprintCallable)
    void PlaySound(const FPalDataTableRowName_SoundID& ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWeaponNotify(EWeaponNotifyType Type);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSummonWeapon(int32 SummonCount);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStopReload();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartAim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestClosing();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReloadStart(float InReloadSpeedPlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReleaseTrigger();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPullTrigger();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPullCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndAim();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDetachWeapon(AActor* detachActor);
    
private:
    UFUNCTION()
    void OnCreatedDynamicItemDataInClient(UPalDynamicItemDataBase* CreatedItemData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCreatedBullet(APalBullet* Bullet);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeTargetDirection(FVector Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttachWeapon(AActor* attachActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimNotifyEnd(FName NotifyName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimNotifyBegin(FName NotifyName);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsUseLeftHandAttach() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsNeedCheckSummonWeapon() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLocallyControlledWeapon();
    
    UFUNCTION(BlueprintPure)
    bool IsHiddenWeapon();
    
    UFUNCTION(BlueprintPure)
    bool IsFullMagazine() const;
    
    UFUNCTION(BlueprintPure)
    bool IsExistBulletInPlayerInventory() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsEnableAutoAim() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsEmptyMagazine() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCoolDown() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    int32 GetWeaponEffectValue() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    EPalAdditionalEffectType GetWeaponEffectType() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    int32 GetWeaponDamageFromDelegate() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetWeaponDamage_forPlayerFlamethrower() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    int32 GetWeaponDamage() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetWeaponBaseDamage() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    AActor* GetWeaponAttacker();
    
public:
    UFUNCTION(BlueprintPure)
    TArray<FPalSpecialAttackRateInfo> GetSpecialAttackRateInfos() const;
    
    UFUNCTION(BlueprintPure)
    float GetSneakAttackRate();
    
    UFUNCTION(BlueprintPure)
    TArray<FPalPassiveSkillEffect> GetSkillEffectList();
    
protected:
    UFUNCTION(BlueprintPure)
    float GetShooterComponentBlurRate();
    
public:
    UFUNCTION(BlueprintPure)
    void GetRequiredBulletName(FName& outName);
    
    UFUNCTION(BlueprintPure)
    float GetRemainingCoolDownTime() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    int32 GetRemainBulletCount() const;
    
protected:
    UFUNCTION(BlueprintPure)
    float GetRandomFloat(float Min, float Max);
    
public:
    UFUNCTION(BlueprintPure)
    float GetParameterWithPassiveSkillEffect(float originalValue, EPalPassiveSkillEffectType EffectType) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    APalCharacter* GetOwnerCharacter();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    int32 GetNPCWeaponDamage() const;
    
protected:
    UFUNCTION(BlueprintPure)
    int32 GetNeedSpawnSummonWeaponCount();
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxSummonCount();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetMainMesh();
    
    UFUNCTION(BlueprintPure)
    int32 GetMagazineSize() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FTransform GetLeftHandTransform() const;
    
    UFUNCTION(BlueprintPure)
    FPalItemId GetItemId() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetInventoryBulletCount() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FName GetEquipSocketName();
    
    UFUNCTION(BlueprintPure)
    float GetDurability() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    float GetDefaultBlurAngle() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FVector GetBulletShootRootLocation();
    
    UFUNCTION(BlueprintPure)
    float GetBlurModifierValue();
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 DecrementCurrentSelectPalSphere(int32 RequestConsumeNum, FName& UsedItemID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DecrementBullet();
    
    UFUNCTION(BlueprintCallable)
    void DecreaseDurabilityWithValue(float Durability);
    
    UFUNCTION(BlueprintCallable)
    void DecreaseDurability();
    
    UFUNCTION()
    void ClearWeaponSkill();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearSummonWeapon();
    
    UFUNCTION(BlueprintPure)
    bool CanReserveSummonWeapon();
    
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanDealDamageWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CalcStability();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CalcRange();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CalcDPS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CalcAccuracy();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyOverrideMaterial_ForUI();
    

    // Fix for true pure virtual functions not being implemented
};

