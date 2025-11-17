#pragma once
#include "CoreMinimal.h"
#include "BaseLensTable.generated.h"

class ULensFile;

USTRUCT()
struct CAMERACALIBRATIONCORE_API FBaseLensTable {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TWeakObjectPtr<ULensFile> LensFile;
    
public:
    FBaseLensTable();
};

