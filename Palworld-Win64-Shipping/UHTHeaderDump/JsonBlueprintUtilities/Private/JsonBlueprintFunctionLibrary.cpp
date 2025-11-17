#include "JsonBlueprintFunctionLibrary.h"

UJsonBlueprintFunctionLibrary::UJsonBlueprintFunctionLibrary() {
}

bool UJsonBlueprintFunctionLibrary::ToString(const FJsonObjectWrapper& JsonObject, FString& OutJsonString) {
    return false;
}

bool UJsonBlueprintFunctionLibrary::ToFile(const FJsonObjectWrapper& JsonObject, const FFilePath& File) {
    return false;
}

bool UJsonBlueprintFunctionLibrary::StructToJsonString(const int32& Struct, FString& OutJsonString) {
    return false;
}

bool UJsonBlueprintFunctionLibrary::SetField(const FJsonObjectWrapper& JsonObject, const FString& FieldName, const int32& Value) {
    return false;
}

bool UJsonBlueprintFunctionLibrary::HasField(const FJsonObjectWrapper& JsonObject, const FString& FieldName) {
    return false;
}

bool UJsonBlueprintFunctionLibrary::GetFieldNames(const FJsonObjectWrapper& JsonObject, TArray<FString>& FieldNames) {
    return false;
}

bool UJsonBlueprintFunctionLibrary::GetField(const FJsonObjectWrapper& JsonObject, const FString& FieldName, int32& OutValue) {
    return false;
}

bool UJsonBlueprintFunctionLibrary::FromString(UObject* WorldContextObject, const FString& JsonString, FJsonObjectWrapper& OutJsonObject) {
    return false;
}

bool UJsonBlueprintFunctionLibrary::FromFile(UObject* WorldContextObject, const FFilePath& File, FJsonObjectWrapper& OutJsonObject) {
    return false;
}


