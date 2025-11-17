#pragma once
#include "CoreMinimal.h"
#include "PalRandomRestInfo.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FPalRandomRestInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* RandomRestMontage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Weight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 LoopNum_Min;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 LoopNum_Max;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AfterIdleTime;
    
    PAL_API FPalRandomRestInfo();
};

