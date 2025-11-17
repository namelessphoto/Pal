#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalItemSlotId.h"
#include "PalBaseCampUtility.generated.h"

class APalAIController;

UCLASS(BlueprintType)
class UPalBaseCampUtility : public UObject {
    GENERATED_BODY()
public:
    UPalBaseCampUtility();

    UFUNCTION(BlueprintCallable)
    static void RequestMoveInventoryItemToBaseCamp(const UObject* WorldObjectContext, const FGuid& TargetBaseCampID, const TArray<FPalItemSlotId>& InventoryItemSlotIds);
    
    UFUNCTION(BlueprintPure)
    static bool IsRunnableAction_PalRandomRest_BaseCamp(APalAIController* AIController);
    
};

