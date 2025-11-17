#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalFishBattleBehaviorType.h"
#include "EPalFishShadowSizeType.h"
#include "PalFishShadowDataRow.generated.h"

class APalFishShadow;

USTRUCT(BlueprintType)
struct FPalFishShadowDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalFishShadowSizeType FishShadowSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName PalId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName BlueprintClassName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<APalFishShadow> FishShadowBlueprintClassSoft;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MoveSpeedPerSec;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SearchRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SearchProbability;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float KingPassiveRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RarePassiveRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalFishBattleBehaviorType BehaviorType;
    
    PAL_API FPalFishShadowDataRow();
};

