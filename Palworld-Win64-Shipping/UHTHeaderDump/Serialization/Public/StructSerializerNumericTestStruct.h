#pragma once
#include "CoreMinimal.h"
#include "StructSerializerNumericTestStruct.generated.h"

USTRUCT()
struct FStructSerializerNumericTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY()
    int8 Int8;
    
    UPROPERTY()
    int16 Int16;
    
    UPROPERTY()
    int32 int32;
    
    UPROPERTY()
    int64 Int64;
    
    UPROPERTY()
    uint8 uint8;
    
    UPROPERTY()
    uint16 uint16;
    
    UPROPERTY()
    uint32 uint32;
    
    UPROPERTY()
    uint64 UInt64;
    
    UPROPERTY()
    float float;
    
    UPROPERTY()
    double Double;
    
    SERIALIZATION_API FStructSerializerNumericTestStruct();
};

