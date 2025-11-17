#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ControlRigShapeDefinition.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct CONTROLRIG_API FControlRigShapeDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ShapeName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Transform;
    
    FControlRigShapeDefinition();
};

