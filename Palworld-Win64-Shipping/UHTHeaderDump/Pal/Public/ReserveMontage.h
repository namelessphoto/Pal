#pragma once
#include "CoreMinimal.h"
#include "ReserveMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FReserveMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float StartTime;
    
    PAL_API FReserveMontage();
};

