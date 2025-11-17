#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalBaseCampWorkerSickType.h"
#include "EPalFacialEyeType.h"
#include "PalBaseCampWorkerSickMasterData.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampWorkerSickMasterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalBaseCampWorkerSickType SickType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 EffectiveItemRank;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalFacialEyeType Facial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 WorkSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MoveSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 SatietyDecrease;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RecoveryProbabilityPercentageInPalBox;
    
    PAL_API FPalBaseCampWorkerSickMasterData();
};

