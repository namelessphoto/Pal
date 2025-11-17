#ifndef UE4SS_SDK_HttpBlueprint_HPP
#define UE4SS_SDK_HttpBlueprint_HPP

#include "HttpBlueprint_enums.hpp"

struct FHttpHeader
{
    TMap<class FString, class FString> Headers;

};

class UHttpBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool RemoveHeader(FHttpHeader& HeaderObject, FString HeaderToRemove);
    void MakeRequestHeader(const TMap<class FString, class FString>& Headers, FHttpHeader& OutHeader);
    bool GetHeaderValue(const FHttpHeader& HeaderObject, FString HeaderName, FString& OutHeaderValue);
    TMap<class FString, class FString> GetAllHeaders_Map(const FHttpHeader& HeaderObject);
    TArray<FString> GetAllHeaders(const FHttpHeader& HeaderObject);
    void AddHeader(FHttpHeader& HeaderObject, FString NewHeader, FString NewHeaderValue);
};

#endif
