#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalPlayerParameterDatabaseRow.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerParameterDatabaseRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Stamina;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Hp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MeleeAttack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ShotAttack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Defense;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Support;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 CraftSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Satiety;
    
    PAL_API FPalPlayerParameterDatabaseRow();
};

