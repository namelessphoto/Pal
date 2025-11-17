#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalLocationType.h"
#include "PalLocationUIData.h"
#include "PalLocationUIData_TableRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPalLocationUIData_TableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalLocationType, FPalLocationUIData> locationUIDataMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FName, TSoftObjectPtr<UTexture2D>> mapObjectIconMap;
    
    PAL_API FPalLocationUIData_TableRow();
};

