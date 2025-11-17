#pragma once
#include "CoreMinimal.h"
#include "PropertyBagPropertyDescMetaData.generated.h"

USTRUCT()
struct STRUCTUTILS_API FPropertyBagPropertyDescMetaData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Key;
    
    UPROPERTY()
    FString Value;
    
    FPropertyBagPropertyDescMetaData();
};

