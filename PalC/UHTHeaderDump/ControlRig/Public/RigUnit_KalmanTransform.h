#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_SimBase.h"
#include "RigUnit_KalmanTransform.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_KalmanTransform : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Value;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 BufferSize;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform Result;
    
    UPROPERTY()
    TArray<FTransform> Buffer;
    
    UPROPERTY()
    int32 LastInsertIndex;
    
    FRigUnit_KalmanTransform();
};

