#pragma once
#include "CoreMinimal.h"
#include "DatasmithAssetImportOptions.generated.h"

USTRUCT()
struct DATASMITHCONTENT_API FDatasmithAssetImportOptions {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName PackagePath;
    
    FDatasmithAssetImportOptions();
};

