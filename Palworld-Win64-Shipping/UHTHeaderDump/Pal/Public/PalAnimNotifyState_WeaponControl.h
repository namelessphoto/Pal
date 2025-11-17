#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EPalShooterFlagContainerPriority.h"
#include "PalAnimNotifyState_WeaponControl.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UPalAnimNotifyState_WeaponControl : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsDisableShoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsDisableAim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsDisableAttachLeftHand;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsDisableReload;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsDisableChangeWeapon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalShooterFlagContainerPriority Priority;
    
    UPalAnimNotifyState_WeaponControl();

};

