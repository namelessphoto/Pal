#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalBossType.h"
#include "PalTechnologyDataTableRowBase.generated.h"

USTRUCT(BlueprintType)
struct FPalTechnologyDataTableRowBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Name;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Description;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName IconName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalBossType RequireDefeatTowerBoss;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName RequireTechnology;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName RequireResearchId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsBossTechnology;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 LevelCap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Tier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Cost;
    
    PAL_API FPalTechnologyDataTableRowBase();
};

