#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_HungerIcon.generated.h"

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_HungerIcon : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool IsExistFood;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid BelongGroupId;
    
    UPalHUDDispatchParameter_HungerIcon();

};

