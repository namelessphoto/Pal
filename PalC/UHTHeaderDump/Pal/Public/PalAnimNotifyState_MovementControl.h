#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "PalAnimNotifyState_MovementControl.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UPalAnimNotifyState_MovementControl : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsFlagNameOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName flagName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MovementSpeedRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AirControlXYRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float YawRotatorRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GravityRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FixedGravityZ;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SlideAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsDisableMovement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsDisableJump;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsDisableCrouch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsDisablePartnerSkill;
    
    UPalAnimNotifyState_MovementControl();

};

