#pragma once
#include "CoreMinimal.h"
#include "EWeaponAnimationPoseType.h"
#include "WeaponNotifyAnimationInfo.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FWeaponNotifyAnimationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EWeaponAnimationPoseType, UAnimMontage*> PoseMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool isAutoStop;
    
    PAL_API FWeaponNotifyAnimationInfo();
};

