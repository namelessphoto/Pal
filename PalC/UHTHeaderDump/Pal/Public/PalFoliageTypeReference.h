#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalMapObjectDestroyFXType.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalFoliageTypeReference.generated.h"

class UFoliageType;

USTRUCT(BlueprintType)
struct FPalFoliageTypeReference : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UFoliageType> FoliageType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_MapObjectData FoliageMapObjectId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Hp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_ItemData DropItemId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 DropItemNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalMapObjectDestroyFXType DestroyFXType;
    
    PAL_API FPalFoliageTypeReference();
};

