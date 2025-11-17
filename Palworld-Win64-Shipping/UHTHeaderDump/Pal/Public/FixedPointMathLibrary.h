#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "FixedPoint.h"
#include "FixedPointMathLibrary.generated.h"

UCLASS(BlueprintType)
class UFixedPointMathLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFixedPointMathLibrary();

    UFUNCTION(BlueprintPure)
    static FFixedPoint Subtract_FixedPointInteger(FFixedPoint A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static FFixedPoint Subtract_FixedPointFloat(FFixedPoint A, float B);
    
    UFUNCTION(BlueprintPure)
    static FFixedPoint Subtract_FixedPointFixedPoint(FFixedPoint A, FFixedPoint B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_FixedPointInteger(FFixedPoint A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_FixedPointFloat(FFixedPoint A, float B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_FixedPointFixedPoint(FFixedPoint A, FFixedPoint B);
    
    UFUNCTION(BlueprintPure)
    static FFixedPoint Multiply_FixedPointInteger(FFixedPoint A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static FFixedPoint Multiply_FixedPointFloat(FFixedPoint A, float B);
    
    UFUNCTION(BlueprintPure)
    static FFixedPoint Multiply_FixedPointFixedPoint(FFixedPoint A, FFixedPoint B);
    
    UFUNCTION(BlueprintPure)
    static bool LessEqual_FixedPointInteger(FFixedPoint A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool LessEqual_FixedPointFloat(FFixedPoint A, float B);
    
    UFUNCTION(BlueprintPure)
    static bool LessEqual_FixedPointFixedPoint(FFixedPoint A, FFixedPoint B);
    
    UFUNCTION(BlueprintPure)
    static bool Less_FixedPointInteger(FFixedPoint A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool Less_FixedPointFloat(FFixedPoint A, float B);
    
    UFUNCTION(BlueprintPure)
    static bool Less_FixedPointFixedPoint(FFixedPoint A, FFixedPoint B);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterEqual_FixedPointInteger(FFixedPoint A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterEqual_FixedPointFloat(FFixedPoint A, float B);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterEqual_FixedPointFixedPoint(FFixedPoint A, FFixedPoint B);
    
    UFUNCTION(BlueprintPure)
    static bool Greater_FixedPointInteger(FFixedPoint A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool Greater_FixedPointFloat(FFixedPoint A, float B);
    
    UFUNCTION(BlueprintPure)
    static bool Greater_FixedPointFixedPoint(FFixedPoint A, FFixedPoint B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_FixedPointInteger(FFixedPoint A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_FixedPointFloat(FFixedPoint A, float B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_FixedPointFixedPoint(FFixedPoint A, FFixedPoint B);
    
    UFUNCTION(BlueprintPure)
    static FFixedPoint Divide_FixedPointInteger(FFixedPoint A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static FFixedPoint Divide_FixedPointFloat(FFixedPoint A, float B);
    
    UFUNCTION(BlueprintPure)
    static FFixedPoint Divide_FixedPointFixedPoint(FFixedPoint A, FFixedPoint B);
    
    UFUNCTION(BlueprintPure)
    static FFixedPoint Convert_IntToFixedPoint(int32 Value);
    
    UFUNCTION(BlueprintPure)
    static FFixedPoint Convert_FloatToFixedPoint(float Value);
    
    UFUNCTION(BlueprintPure)
    static int32 Convert_FixedPointToInt(FFixedPoint Value);
    
    UFUNCTION(BlueprintPure)
    static float Convert_FixedPointToFloat(FFixedPoint Value);
    
    UFUNCTION(BlueprintPure)
    static FFixedPoint Add_FixedPointInteger(FFixedPoint A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static FFixedPoint Add_FixedPointFloat(FFixedPoint A, float B);
    
    UFUNCTION(BlueprintPure)
    static FFixedPoint Add_FixedPointFixedPoint(FFixedPoint A, FFixedPoint B);
    
};

