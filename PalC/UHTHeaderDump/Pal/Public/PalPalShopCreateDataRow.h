#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalPalShopCreateDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalPalShopCreateDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxLostPalNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CharacterNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPalDataTableRowName_PalMonsterData> CharacterIDArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinCharacterLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxCharacterLevel;
    
    PAL_API FPalPalShopCreateDataRow();
};

