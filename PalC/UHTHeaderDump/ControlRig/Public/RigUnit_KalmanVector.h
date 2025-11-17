#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_SimBase.h"
#include "RigUnit_KalmanVector.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_KalmanVector : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Value;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 BufferSize;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Result;
    
    UPROPERTY()
    TArray<FVector> Buffer;
    
    UPROPERTY()
    int32 LastInsertIndex;
    
    FRigUnit_KalmanVector();
};

