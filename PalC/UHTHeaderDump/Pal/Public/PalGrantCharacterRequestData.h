#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalGrantCharacterRequestData.generated.h"

class UPalIndividualCharacterHandle;

USTRUCT(BlueprintType)
struct FPalGrantCharacterRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid PlayerUId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FName LotteryItemName;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalIndividualCharacterHandle* IndividualHandle;
    
    PAL_API FPalGrantCharacterRequestData();
};

