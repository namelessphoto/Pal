#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "PalPlayerTreasureMapPointRepInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerTreasureMapPointRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid TreasureMapPointId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FVector Location;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 Rarity;
    
    PAL_API FPalPlayerTreasureMapPointRepInfo();
};

