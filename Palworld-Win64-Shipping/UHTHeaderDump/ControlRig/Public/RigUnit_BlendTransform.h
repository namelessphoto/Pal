#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "BlendTarget.h"
#include "RigUnit.h"
#include "RigUnit_BlendTransform.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_BlendTransform : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBlendTarget> Targets;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform Result;
    
    FRigUnit_BlendTransform();
};

