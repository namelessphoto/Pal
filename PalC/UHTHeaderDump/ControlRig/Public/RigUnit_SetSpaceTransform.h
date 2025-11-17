#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CachedRigElement.h"
#include "EBoneGetterSetterMode.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetSpaceTransform.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SetSpaceTransform : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName space;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBoneGetterSetterMode SpaceType;
    
    UPROPERTY()
    FCachedRigElement CachedSpaceIndex;
    
    FRigUnit_SetSpaceTransform();
};

