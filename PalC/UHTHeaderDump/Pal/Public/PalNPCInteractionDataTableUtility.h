#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalNPCInteractionDataTableRow.h"
#include "PalNPCInteractionDataTableUtility.generated.h"

UCLASS(BlueprintType)
class UPalNPCInteractionDataTableUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalNPCInteractionDataTableUtility();

    UFUNCTION(BlueprintPure)
    static void GetJSONStringByInteractionDataTable(FString& OutString, const TMap<FName, FPalNPCInteractionDataTableRow>& DataRows);
    
};

