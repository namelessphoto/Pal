#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WeaponAnimationInfo.h"
#include "WeaponAnimationInfoWrap.generated.h"

UCLASS(BlueprintType, Deprecated, NotPlaceable)
class UDEPRECATED_WeaponAnimationInfoWrap : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FWeaponAnimationInfo Data;
    
    UDEPRECATED_WeaponAnimationInfoWrap();

    UFUNCTION(BlueprintCallable)
    void SetData(const FWeaponAnimationInfo& Input);
    
};

