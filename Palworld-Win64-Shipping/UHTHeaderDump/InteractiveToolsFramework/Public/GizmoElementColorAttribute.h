#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "GizmoElementColorAttribute.generated.h"

USTRUCT()
struct INTERACTIVETOOLSFRAMEWORK_API FGizmoElementColorAttribute {
    GENERATED_BODY()
public:
    UPROPERTY()
    FLinearColor Value;
    
    UPROPERTY()
    bool bHasValue;
    
    UPROPERTY()
    bool bOverridesChildState;
    
    FGizmoElementColorAttribute();
};

