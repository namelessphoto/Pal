#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalNPCInteractionDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FPalNPCInteractionDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName UniqueNPCID;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EPalInteractiveObjectIndicatorType InteractionType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName IncidentId;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName IncidentArgs1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName IncidentArgs2;
    
    PAL_API FPalNPCInteractionDataTableRow();
};

