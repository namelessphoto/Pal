#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EStructUtilsResult.h"
#include "InstancedStruct.h"
#include "StructUtilsFunctionLibrary.generated.h"

class UScriptStruct;

UCLASS(BlueprintType)
class STRUCTUTILS_API UStructUtilsFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStructUtilsFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetInstancedStructValue(UPARAM(Ref) FInstancedStruct& InstancedStruct, const int32& Value);
    
    UFUNCTION(BlueprintCallable)
    static void Reset(UPARAM(Ref) FInstancedStruct& InstancedStruct, const UScriptStruct* StructType);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_InstancedStruct(const FInstancedStruct& A, const FInstancedStruct& B);
    
    UFUNCTION(BlueprintCallable)
    static FInstancedStruct MakeInstancedStruct(const int32& Value);
    
    UFUNCTION(BlueprintPure)
    static bool IsValid_InstancedStruct(const FInstancedStruct& InstancedStruct);
    
    UFUNCTION(BlueprintCallable)
    static EStructUtilsResult IsInstancedStructValid(const FInstancedStruct& InstancedStruct);
    
    UFUNCTION(BlueprintCallable)
    static void GetInstancedStructValue(EStructUtilsResult& ExecResult, const FInstancedStruct& InstancedStruct, int32& Value);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_InstancedStruct(const FInstancedStruct& A, const FInstancedStruct& B);
    
};

