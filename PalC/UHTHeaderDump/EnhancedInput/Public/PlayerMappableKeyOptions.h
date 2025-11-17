#pragma once
#include "CoreMinimal.h"
#include "PlayerMappableKeyOptions.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FPlayerMappableKeyOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UObject* MetaData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText DisplayCategory;
    
    ENHANCEDINPUT_API FPlayerMappableKeyOptions();
};

