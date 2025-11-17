#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalCapturedCageInfoDatabaseRow.generated.h"

USTRUCT(BlueprintType)
struct FPalCapturedCageInfoDatabaseRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FieldName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PalId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MinLevel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxLevel;
    
    PAL_API FPalCapturedCageInfoDatabaseRow();
};

