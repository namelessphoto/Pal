#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalWeaponSubParameterData.generated.h"

USTRUCT(BlueprintType)
struct FPalWeaponSubParameterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float dps;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Range;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float stability;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float accuracy;
    
    PAL_API FPalWeaponSubParameterData();
};

