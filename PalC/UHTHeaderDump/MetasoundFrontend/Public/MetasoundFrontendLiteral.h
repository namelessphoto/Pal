#pragma once
#include "CoreMinimal.h"
#include "EMetasoundFrontendLiteralType.h"
#include "MetasoundFrontendLiteral.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct METASOUNDFRONTEND_API FMetasoundFrontendLiteral {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    EMetasoundFrontendLiteralType Type;
    
    UPROPERTY()
    int32 AsNumDefault;
    
    UPROPERTY()
    TArray<bool> AsBoolean;
    
    UPROPERTY()
    TArray<int32> AsInteger;
    
    UPROPERTY()
    TArray<float> AsFloat;
    
    UPROPERTY()
    TArray<FString> AsString;
    
    UPROPERTY()
    TArray<UObject*> AsUObject;
    
public:
    FMetasoundFrontendLiteral();
};

