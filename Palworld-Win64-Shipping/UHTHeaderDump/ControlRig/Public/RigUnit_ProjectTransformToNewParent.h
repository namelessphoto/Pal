#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigUnit.h"
#include "RigUnit_ProjectTransformToNewParent.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ProjectTransformToNewParent : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Child;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bChildInitial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey OldParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOldParentInitial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey NewParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bNewParentInitial;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform Transform;
    
    UPROPERTY()
    FCachedRigElement CachedChild;
    
    UPROPERTY()
    FCachedRigElement CachedOldParent;
    
    UPROPERTY()
    FCachedRigElement CachedNewParent;
    
    FRigUnit_ProjectTransformToNewParent();
};

