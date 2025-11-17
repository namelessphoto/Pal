#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalOptionWorldMode.h"
#include "PalOptionWorldModePresetRow.generated.h"

USTRUCT(BlueprintType)
struct FPalOptionWorldModePresetRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EPalOptionWorldMode WorldMode;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bEnablePlayerToPlayerDamage;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bCanPickupOtherGuildDeathPenaltyDrop;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bEnableNonLoginPenalty;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bIsStartLocationSelectByMap;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bExistPlayerAfterLogout;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bEnableDefenseOtherGuildPlayer;
    
    PAL_API FPalOptionWorldModePresetRow();
};

