#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalFriendshipRankDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalFriendshipRankDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FriendshipRank;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RequiredPoint;
    
    PAL_API FPalFriendshipRankDataRow();
};

