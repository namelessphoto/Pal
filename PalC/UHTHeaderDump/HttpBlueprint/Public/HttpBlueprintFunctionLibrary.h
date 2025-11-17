#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "HttpHeader.h"
#include "HttpBlueprintFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class HTTPBLUEPRINT_API UHttpBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHttpBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool RemoveHeader(UPARAM(Ref) FHttpHeader& HeaderObject, const FString& HeaderToRemove);
    
    UFUNCTION(BlueprintPure)
    static void MakeRequestHeader(const TMap<FString, FString>& Headers, FHttpHeader& OutHeader);
    
    UFUNCTION(BlueprintPure)
    static bool GetHeaderValue(const FHttpHeader& HeaderObject, const FString& HeaderName, FString& OutHeaderValue);
    
    UFUNCTION(BlueprintPure)
    static TMap<FString, FString> GetAllHeaders_Map(const FHttpHeader& HeaderObject);
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> GetAllHeaders(const FHttpHeader& HeaderObject);
    
    UFUNCTION(BlueprintCallable)
    static void AddHeader(UPARAM(Ref) FHttpHeader& HeaderObject, const FString& NewHeader, const FString& NewHeaderValue);
    
};

