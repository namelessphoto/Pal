#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CachedRigElement.h"
#include "EBoneGetterSetterMode.h"
#include "RigElementKeyCollection.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetTransformArray.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SetTransformArray : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKeyCollection Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBoneGetterSetterMode space;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bInitial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTransform> Transforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPropagateToChildren;
    
    UPROPERTY()
    TArray<FCachedRigElement> CachedIndex;
    
    FRigUnit_SetTransformArray();
};

