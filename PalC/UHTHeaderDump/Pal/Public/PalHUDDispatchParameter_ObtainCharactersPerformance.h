#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalInstanceID.h"
#include "PalHUDDispatchParameter_ObtainCharactersPerformance.generated.h"

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_ObtainCharactersPerformance : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TArray<FPalInstanceID> IndividualIds;
    
    UPROPERTY(BlueprintReadWrite)
    FName TitleTextId;
    
    UPROPERTY(BlueprintReadWrite)
    FName RewardTextId;
    
    UPalHUDDispatchParameter_ObtainCharactersPerformance();

};

