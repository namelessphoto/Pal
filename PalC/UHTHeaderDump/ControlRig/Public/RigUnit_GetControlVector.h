#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CachedRigElement.h"
#include "EBoneGetterSetterMode.h"
#include "RigUnit.h"
#include "RigUnit_GetControlVector.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_GetControlVector : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBoneGetterSetterMode space;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Vector;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Minimum;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Maximum;
    
    UPROPERTY()
    FCachedRigElement CachedControlIndex;
    
    FRigUnit_GetControlVector();
};

