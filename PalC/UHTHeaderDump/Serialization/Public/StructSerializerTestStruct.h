#pragma once
#include "CoreMinimal.h"
#include "StructSerializerArrayTestStruct.h"
#include "StructSerializerBooleanTestStruct.h"
#include "StructSerializerBuiltinTestStruct.h"
#include "StructSerializerLWCTypesTest.h"
#include "StructSerializerMapTestStruct.h"
#include "StructSerializerNumericTestStruct.h"
#include "StructSerializerObjectTestStruct.h"
#include "StructSerializerSetTestStruct.h"
#include "StructSerializerTestStruct.generated.h"

USTRUCT()
struct FStructSerializerTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY()
    FStructSerializerNumericTestStruct Numerics;
    
    UPROPERTY()
    FStructSerializerBooleanTestStruct Booleans;
    
    UPROPERTY()
    FStructSerializerObjectTestStruct Objects;
    
    UPROPERTY()
    FStructSerializerBuiltinTestStruct Builtins;
    
    UPROPERTY()
    FStructSerializerArrayTestStruct Arrays;
    
    UPROPERTY()
    FStructSerializerMapTestStruct Maps;
    
    UPROPERTY()
    FStructSerializerSetTestStruct Sets;
    
    UPROPERTY()
    FStructSerializerLWCTypesTest LWCTypes;
    
    SERIALIZATION_API FStructSerializerTestStruct();
};

