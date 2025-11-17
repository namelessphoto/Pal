#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "WeaponNotifyAnimationInfo.h"
#include "PalUniqueRideAnimeAssetBase.generated.h"

class UAnimMontage;
class UAnimSequence;

UCLASS(BlueprintType)
class PAL_API UPalUniqueRideAnimeAssetBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SocketName_Hand_R;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector IKPoleLocation_Hand_R;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SocketName_Hand_L;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector IKPoleLocation_Hand_L;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SocketName_Foot_R;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector IKPoleLocation_Foot_R;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SocketName_Foot_L;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector IKPoleLocation_Foot_L;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool DisableLeftHandIK_BallMotion;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequence* RidingAnimation;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimMontage* RidingAnimation_Ball_Aim;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimMontage* RidingAnimation_Ball_Fire;
    
private:
    UPROPERTY(Transient)
    FWeaponNotifyAnimationInfo WeaponNotifyAnimInfo_Ball_Aim;
    
    UPROPERTY(Transient)
    FWeaponNotifyAnimationInfo WeaponNotifyAnimInfo_Ball_Fire;
    
public:
    UPalUniqueRideAnimeAssetBase();

    UFUNCTION(BlueprintPure)
    UAnimSequence* GetRideAnimSequence();
    
};

