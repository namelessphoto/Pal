#include "HttpBlueprintFunctionLibrary.h"

UHttpBlueprintFunctionLibrary::UHttpBlueprintFunctionLibrary() {
}

bool UHttpBlueprintFunctionLibrary::RemoveHeader(FHttpHeader& HeaderObject, const FString& HeaderToRemove) {
    return false;
}

void UHttpBlueprintFunctionLibrary::MakeRequestHeader(const TMap<FString, FString>& Headers, FHttpHeader& OutHeader) {
}

bool UHttpBlueprintFunctionLibrary::GetHeaderValue(const FHttpHeader& HeaderObject, const FString& HeaderName, FString& OutHeaderValue) {
    return false;
}

TMap<FString, FString> UHttpBlueprintFunctionLibrary::GetAllHeaders_Map(const FHttpHeader& HeaderObject) {
    return TMap<FString, FString>();
}

TArray<FString> UHttpBlueprintFunctionLibrary::GetAllHeaders(const FHttpHeader& HeaderObject) {
    return TArray<FString>();
}

void UHttpBlueprintFunctionLibrary::AddHeader(FHttpHeader& HeaderObject, const FString& NewHeader, const FString& NewHeaderValue) {
}


