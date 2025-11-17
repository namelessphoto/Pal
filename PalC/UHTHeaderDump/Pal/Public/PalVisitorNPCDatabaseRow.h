#pragma once
#include "CoreMinimal.h"
#include "EPalIVisitorNPCAction.h"
#include "PalInvaderDatabaseRow.h"
#include "PalVisitorNPCDatabaseRow.generated.h"

USTRUCT(BlueprintType)
struct FPalVisitorNPCDatabaseRow : public FPalInvaderDatabaseRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalIVisitorNPCAction ActionTimeLimit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsSquad;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FormationRow;
    
    PAL_API FPalVisitorNPCDatabaseRow();
};

