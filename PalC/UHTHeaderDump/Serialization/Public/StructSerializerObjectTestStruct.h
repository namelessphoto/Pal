#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "Templates/SubclassOf.h"
#include "StructSerializerObjectTestStruct.generated.h"

class UMetaData;
class UObject;

USTRUCT()
struct FStructSerializerObjectTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY()
    UClass* RawClass;
    
    UPROPERTY()
    UClass* WrappedClass;
    
    UPROPERTY()
    TSubclassOf<UMetaData> SubClass;
    
    UPROPERTY()
    TSoftClassPtr<UMetaData> SoftClass;
    
    UPROPERTY()
    UObject* RawObject;
    
    UPROPERTY()
    UObject* WrappedObject;
    
    UPROPERTY()
    TWeakObjectPtr<UMetaData> WeakObject;
    
    UPROPERTY()
    TSoftObjectPtr<UMetaData> SoftObject;
    
    UPROPERTY()
    FSoftClassPath ClassPath;
    
    UPROPERTY()
    FSoftObjectPath ObjectPath;
    
    SERIALIZATION_API FStructSerializerObjectTestStruct();
};

