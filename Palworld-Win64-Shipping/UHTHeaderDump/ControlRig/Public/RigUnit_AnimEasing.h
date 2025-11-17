#pragma once
#include "CoreMinimal.h"
#include "EControlRigAnimEasingType.h"
#include "RigUnit_AnimBase.h"
#include "RigUnit_AnimEasing.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_AnimEasing : public FRigUnit_AnimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EControlRigAnimEasingType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SourceMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SourceMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TargetMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TargetMaximum;
    
    UPROPERTY(BlueprintReadOnly)
    float Result;
    
    FRigUnit_AnimEasing();
};

