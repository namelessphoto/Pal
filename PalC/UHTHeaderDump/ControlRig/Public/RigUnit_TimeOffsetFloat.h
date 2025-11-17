#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
#include "RigUnit_TimeOffsetFloat.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_TimeOffsetFloat : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SecondsAgo;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 BufferSize;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float TimeRange;
    
    UPROPERTY(BlueprintReadOnly)
    float Result;
    
    UPROPERTY()
    TArray<float> Buffer;
    
    UPROPERTY()
    TArray<float> DeltaTimes;
    
    UPROPERTY()
    int32 LastInsertIndex;
    
    UPROPERTY()
    int32 UpperBound;
    
    FRigUnit_TimeOffsetFloat();
};

