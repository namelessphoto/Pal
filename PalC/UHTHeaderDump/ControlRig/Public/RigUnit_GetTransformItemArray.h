#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CachedRigElement.h"
#include "EBoneGetterSetterMode.h"
#include "RigElementKey.h"
#include "RigUnit.h"
#include "RigUnit_GetTransformItemArray.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_GetTransformItemArray : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRigElementKey> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBoneGetterSetterMode space;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bInitial;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FTransform> Transforms;
    
    UPROPERTY()
    TArray<FCachedRigElement> CachedIndex;
    
    FRigUnit_GetTransformItemArray();
};

