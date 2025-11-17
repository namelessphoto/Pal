#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_SimBase.h"
#include "RigUnit_TimeOffsetTransform.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_TimeOffsetTransform : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SecondsAgo;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 BufferSize;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float TimeRange;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform Result;
    
    UPROPERTY()
    TArray<FTransform> Buffer;
    
    UPROPERTY()
    TArray<float> DeltaTimes;
    
    UPROPERTY()
    int32 LastInsertIndex;
    
    UPROPERTY()
    int32 UpperBound;
    
    FRigUnit_TimeOffsetTransform();
};

