#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "CachedRigElement.h"
#include "RigUnit.h"
#include "RigUnit_GetControlColor.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_GetControlColor : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Control;
    
    UPROPERTY(BlueprintReadOnly)
    FLinearColor Color;
    
    UPROPERTY()
    FCachedRigElement CachedControlIndex;
    
    FRigUnit_GetControlColor();
};

