#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_SimBase.h"
#include "RigUnit_TimeOffsetVector.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_TimeOffsetVector : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SecondsAgo;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 BufferSize;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float TimeRange;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Result;
    
    UPROPERTY()
    TArray<FVector> Buffer;
    
    UPROPERTY()
    TArray<float> DeltaTimes;
    
    UPROPERTY()
    int32 LastInsertIndex;
    
    UPROPERTY()
    int32 UpperBound;
    
    FRigUnit_TimeOffsetVector();
};

