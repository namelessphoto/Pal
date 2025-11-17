#ifndef UE4SS_SDK_StructUtils_HPP
#define UE4SS_SDK_StructUtils_HPP

#include "StructUtils_enums.hpp"

struct FChunkedStructBuffer
{
};

struct FConstSharedStruct
{
};

struct FDefault__PropertyBag
{
};

struct FInstancedPropertyBag
{
    FInstancedStruct Value;

};

struct FInstancedStruct
{
};

struct FInstancedStructArray
{
};

struct FInstancedStructStream
{
};

struct FPropertyBagMissingStruct
{
};

struct FPropertyBagPropertyDesc
{
    class UObject* ValueTypeObject;
    FGuid ID;
    FName Name;
    EPropertyBagPropertyType ValueType;
    EPropertyBagContainerType ContainerType;

};

struct FPropertyBagPropertyDescMetaData
{
    FName Key;
    FString Value;

};

struct FSharedStruct : public FConstSharedStruct
{
};

class UPropertyBag : public UScriptStruct
{
    TArray<FPropertyBagPropertyDesc> PropertyDescs;

};

class UPropertyBagMissingObject : public UObject
{
};

class UStructUtilsFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetInstancedStructValue(FInstancedStruct& InstancedStruct, const int32& Value);
    void Reset(FInstancedStruct& InstancedStruct, const class UScriptStruct* StructType);
    bool NotEqual_InstancedStruct(const FInstancedStruct& A, const FInstancedStruct& B);
    FInstancedStruct MakeInstancedStruct(const int32& Value);
    bool IsValid_InstancedStruct(const FInstancedStruct& InstancedStruct);
    EStructUtilsResult IsInstancedStructValid(const FInstancedStruct& InstancedStruct);
    void GetInstancedStructValue(EStructUtilsResult& ExecResult, const FInstancedStruct& InstancedStruct, int32& Value);
    bool EqualEqual_InstancedStruct(const FInstancedStruct& A, const FInstancedStruct& B);
};

#endif
