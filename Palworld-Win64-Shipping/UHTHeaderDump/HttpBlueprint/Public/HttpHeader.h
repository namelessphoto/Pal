#pragma once
#include "CoreMinimal.h"
#include "HttpHeader.generated.h"

USTRUCT(BlueprintType)
struct HTTPBLUEPRINT_API FHttpHeader {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FString, FString> Headers;
    
public:
    FHttpHeader();
};

