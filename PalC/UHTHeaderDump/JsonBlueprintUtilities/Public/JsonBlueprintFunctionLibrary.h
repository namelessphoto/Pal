#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FilePath -FallbackName=FilePath
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=JsonUtilities -ObjectName=JsonObjectWrapper -FallbackName=JsonObjectWrapper
#include "JsonBlueprintFunctionLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class JSONBLUEPRINTUTILITIES_API UJsonBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UJsonBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool ToString(const FJsonObjectWrapper& JsonObject, FString& OutJsonString);
    
    UFUNCTION(BlueprintCallable)
    static bool ToFile(const FJsonObjectWrapper& JsonObject, const FFilePath& File);
    
    UFUNCTION(BlueprintCallable)
    static bool StructToJsonString(const int32& Struct, FString& OutJsonString);
    
    UFUNCTION(BlueprintCallable)
    static bool SetField(const FJsonObjectWrapper& JsonObject, const FString& FieldName, const int32& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool HasField(const FJsonObjectWrapper& JsonObject, const FString& FieldName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetFieldNames(const FJsonObjectWrapper& JsonObject, TArray<FString>& FieldNames);
    
    UFUNCTION(BlueprintCallable)
    static bool GetField(const FJsonObjectWrapper& JsonObject, const FString& FieldName, int32& OutValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool FromString(UObject* WorldContextObject, const FString& JsonString, FJsonObjectWrapper& OutJsonObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool FromFile(UObject* WorldContextObject, const FFilePath& File, FJsonObjectWrapper& OutJsonObject);
    
};

