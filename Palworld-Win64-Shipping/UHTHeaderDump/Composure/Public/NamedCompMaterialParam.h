#pragma once
#include "CoreMinimal.h"
#include "NamedCompMaterialParam.generated.h"

USTRUCT()
struct COMPOSURE_API FNamedCompMaterialParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParamName;
    
    FNamedCompMaterialParam();
};

