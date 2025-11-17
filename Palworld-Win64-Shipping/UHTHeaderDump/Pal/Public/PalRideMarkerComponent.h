#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERelativeTransformSpace -FallbackName=ERelativeTransformSpace
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "EPalRidePositionType.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "Templates/SubclassOf.h"
#include "PalRideMarkerComponent.generated.h"

class APalCharacter;
class APalUniqueRideWeaponBase;
class UPalActiveSkillSlot;
class UPalIndividualCharacterParameter;
class UPalRiderComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalRideMarkerComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeRiding, bool, IsEnable);
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalRidePositionType RidePositionType;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsAdjustRotation;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsFixScale;
    
    UPROPERTY(EditDefaultsOnly)
    bool bHiddenCharacterWhenAim;
    
    UPROPERTY(EditDefaultsOnly)
    float bHiddenCharacterWhenLowAngleAim;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDisableLookAtByRide;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDisableFullBodyIK_UniqueRide;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<APalUniqueRideWeaponBase> UniqueRidePalWeaponClass;
    
    UPROPERTY(EditDefaultsOnly)
    FPalDataTableRowName_PalMonsterData UniqueRidePalID;
    
    UPROPERTY(BlueprintAssignable)
    FChangeRiding OnChangeRiding;
    
private:
    UPROPERTY(Export, Replicated)
    TWeakObjectPtr<UPalRiderComponent> Rider;
    
    UPROPERTY(Transient)
    UPalActiveSkillSlot* SkillSlot;
    
    UPROPERTY(Transient)
    APalUniqueRideWeaponBase* WeaponActor;
    
public:
    UPalRideMarkerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void UpdateOpacity();
    
    UFUNCTION()
    void SyncActiveSkill(UPalIndividualCharacterParameter* IndividualParameter);
    
    UFUNCTION()
    void StartAim();
    
    UFUNCTION()
    void SetVisibleWeapon();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetupUniqueWeapon();
    
    UFUNCTION(NetMulticast, Reliable)
    void SetRidingFlag(bool bIsEnable);
    
    UFUNCTION(BlueprintPure)
    bool IsRiding() const;
    
private:
    UFUNCTION()
    bool IsNeedLowAngleOpacity() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsAdjustRotation() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetRideSocketTransform(TEnumAsByte<ERelativeTransformSpace> space) const;
    
    UFUNCTION(BlueprintPure)
    APalCharacter* GetRiderCharacter() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FName GetAttackSocketName() const;
    
    UFUNCTION(BlueprintCallable)
    UPalActiveSkillSlot* GetActiveSkillSlot();
    
private:
    UFUNCTION()
    void EndAim();
    
    UFUNCTION()
    void CameraChangeActorActive(bool Active);
    
};

