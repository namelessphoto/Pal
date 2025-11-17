#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "CachedRigElement.h"
#include "RigUnit.h"
#include "RigUnit_GetControlVector2D.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_GetControlVector2D : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Control;
    
    UPROPERTY(BlueprintReadOnly)
    FVector2D Vector;
    
    UPROPERTY(BlueprintReadOnly)
    FVector2D Minimum;
    
    UPROPERTY(BlueprintReadOnly)
    FVector2D Maximum;
    
    UPROPERTY()
    FCachedRigElement CachedControlIndex;
    
    FRigUnit_GetControlVector2D();
};

