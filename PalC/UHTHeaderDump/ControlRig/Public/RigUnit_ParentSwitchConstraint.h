#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigElementKeyCollection.h"
#include "RigUnitMutable.h"
#include "RigUnit_ParentSwitchConstraint.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ParentSwitchConstraint : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Subject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ParentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKeyCollection Parents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform InitialGlobalTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform Transform;
    
    UPROPERTY(BlueprintReadOnly)
    bool Switched;
    
    UPROPERTY()
    FCachedRigElement CachedSubject;
    
    UPROPERTY()
    FCachedRigElement CachedParent;
    
    UPROPERTY()
    FTransform RelativeOffset;
    
    FRigUnit_ParentSwitchConstraint();
};

