#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalArenaNPCData.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaNPCData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName NameTextID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RankPoint;
    
    PAL_API FPalArenaNPCData();
};

