#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CachedRigElement.h"
#include "EBoneGetterSetterMode.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetSpaceInitialTransform.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SetSpaceInitialTransform : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SpaceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Transform;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBoneGetterSetterMode space;
    
    UPROPERTY()
    FCachedRigElement CachedSpaceIndex;
    
    FRigUnit_SetSpaceInitialTransform();
};

