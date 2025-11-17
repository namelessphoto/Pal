#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "CachedRigElement.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetControlColor.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SetControlColor : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor Color;
    
    UPROPERTY()
    FCachedRigElement CachedControlIndex;
    
    FRigUnit_SetControlColor();
};

