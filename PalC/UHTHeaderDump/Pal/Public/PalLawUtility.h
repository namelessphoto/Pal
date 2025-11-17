#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalInstanceID.h"
#include "PalItemSlotId.h"
#include "PalLawUtility.generated.h"

class UObject;

UCLASS(BlueprintType)
class UPalLawUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalLawUtility();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsEqualsGroupIndividualIdAndSlotIds(const UObject* WorldContextObject, const FPalInstanceID& IndividualId, const TArray<FPalItemSlotId>& SlotIds, const bool IgnoreNoBelongSlot);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool ExistOtherGroupFromSlotIds(const UObject* WorldContextObject, const FPalInstanceID& IndividualId, const TArray<FPalItemSlotId>& SlotIds, const bool IgnoreNoBelongSlot, FGuid& OutGroupId);
    
};

