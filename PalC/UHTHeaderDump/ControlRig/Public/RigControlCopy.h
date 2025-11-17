#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ERigControlType.h"
#include "RigControlValue.h"
#include "RigElementKey.h"
#include "RigControlCopy.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigControlCopy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERigControlType ControlType;
    
    UPROPERTY()
    FRigControlValue Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey ParentKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform OffsetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform ParentTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform LocalTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform GlobalTransform;
    
    FRigControlCopy();
};

