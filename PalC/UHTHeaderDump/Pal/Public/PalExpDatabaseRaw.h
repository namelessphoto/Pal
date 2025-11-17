#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalExpDatabaseRaw.generated.h"

USTRUCT(BlueprintType)
struct FPalExpDatabaseRaw : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int64 DropEXP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int64 NextEXP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int64 PalNextEXP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int64 TotalEXP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int64 PalTotalEXP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int64 BuildEXP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int64 CraftEXP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int64 PalBuildEXP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int64 PalCraftEXP;
    
    PAL_API FPalExpDatabaseRaw();
};

