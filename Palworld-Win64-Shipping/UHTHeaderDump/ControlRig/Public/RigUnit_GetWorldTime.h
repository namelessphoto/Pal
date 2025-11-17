#pragma once
#include "CoreMinimal.h"
#include "RigUnit_AnimBase.h"
#include "RigUnit_GetWorldTime.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_GetWorldTime : public FRigUnit_AnimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float Year;
    
    UPROPERTY(BlueprintReadOnly)
    float Month;
    
    UPROPERTY(BlueprintReadOnly)
    float Day;
    
    UPROPERTY(BlueprintReadOnly)
    float WeekDay;
    
    UPROPERTY(BlueprintReadOnly)
    float Hours;
    
    UPROPERTY(BlueprintReadOnly)
    float Minutes;
    
    UPROPERTY(BlueprintReadOnly)
    float Seconds;
    
    UPROPERTY(BlueprintReadOnly)
    float OverallSeconds;
    
    FRigUnit_GetWorldTime();
};

