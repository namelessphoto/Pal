#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CachedRigElement.h"
#include "EBoneGetterSetterMode.h"
#include "RigElementKeyCollection.h"
#include "RigUnit.h"
#include "RigUnit_GetTransformArray.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_GetTransformArray : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKeyCollection Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBoneGetterSetterMode space;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bInitial;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FTransform> Transforms;
    
    UPROPERTY()
    TArray<FCachedRigElement> CachedIndex;
    
    FRigUnit_GetTransformArray();
};

