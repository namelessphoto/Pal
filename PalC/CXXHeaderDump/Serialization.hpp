#ifndef UE4SS_SDK_Serialization_HPP
#define UE4SS_SDK_Serialization_HPP

struct FOrientedBoxFloat
{
    FVector3f Center;
    FVector3f AxisX;
    FVector3f AxisY;
    FVector3f AxisZ;
    float ExtentX;
    float ExtentY;
    float ExtentZ;

};

struct FStructSerializerArrayTestStruct
{
    TArray<int32> Int32Array;
    TArray<uint8> ByteArray;
    int32 StaticSingleElement;
    int32 StaticInt32Array;
    float StaticFloatArray;
    TArray<FVector> VectorArray;
    TArray<FStructSerializerBuiltinTestStruct> StructArray;

};

struct FStructSerializerBooleanTestStruct
{
    bool BoolFalse;
    bool BoolTrue;
    uint8 Bitfield0;
    uint8 Bitfield1;
    uint8 Bitfield2Set;
    uint8 Bitfield3;
    uint8 Bitfield4Set;
    uint8 Bitfield5Set;
    uint8 Bitfield6;
    uint8 Bitfield7Set;

};

struct FStructSerializerBuiltinTestStruct
{
    FGuid Guid;
    FName Name;
    FString String;
    FText Text;
    FVector Vector;
    FVector4 Vector4;
    FRotator Rotator;
    FQuat Quat;
    FColor Color;

};

struct FStructSerializerByteArray
{
    int32 Dummy1;
    TArray<uint8> ByteArray;
    int32 Dummy2;
    TArray<int8> Int8Array;
    int32 Dummy3;

};

struct FStructSerializerLWCTypesTest
{
    FVector Vector;
    FVector2D Vector2D;
    FVector4 Vector4;
    FMatrix Matrix;
    FPlane Plane;
    FQuat Quat;
    FRotator Rotator;
    FTransform Transform;
    FBox Box;
    FBox2D Box2D;
    FBoxSphereBounds BoxSphereBounds;
    FOrientedBox OrientedBox;
    float float;
    double Double;
    TArray<FVector> VectorArray;
    TMap<class FString, class FVector> StrToVec;
    TSet<FVector> VectorSet;

};

struct FStructSerializerMapTestStruct
{
    TMap<int32, FString> IntToStr;
    TMap<class FString, class FString> StrToStr;
    TMap<class FString, class FVector> StrToVec;
    TMap<class FString, class FStructSerializerBuiltinTestStruct> StrToStruct;

};

struct FStructSerializerNonLWCTypesTest
{
    FVector3f Vector;
    FVector2f Vector2D;
    FVector4f Vector4;
    FMatrix44f Matrix;
    FPlane4f Plane;
    FQuat4f Quat;
    FRotator3f Rotator;
    FTransform3f Transform;
    FBox3f Box;
    FBox2f Box2D;
    FBoxSphereBounds3f BoxSphereBounds;
    FOrientedBoxFloat OrientedBox;
    float float;
    double Double;
    TArray<FVector3f> VectorArray;
    TMap<class FString, class FVector3f> StrToVec;
    TSet<FVector3f> VectorSet;

};

struct FStructSerializerNumericTestStruct
{
    int8 Int8;
    int16 Int16;
    int32 int32;
    int64 Int64;
    uint8 uint8;
    uint16 uint16;
    uint32 uint32;
    uint64 UInt64;
    float float;
    double Double;

};

struct FStructSerializerObjectTestStruct
{
    UClass* RawClass;
    UClass* WrappedClass;
    TSubclassOf<class UMetaData> SubClass;
    TSoftClassPtr<UMetaData> SoftClass;
    class UObject* RawObject;
    class UObject* WrappedObject;
    TWeakObjectPtr<class UMetaData> WeakObject;
    TSoftObjectPtr<UMetaData> SoftObject;
    FSoftClassPath ClassPath;
    FSoftObjectPath ObjectPath;

};

struct FStructSerializerSetTestStruct
{
    TSet<FString> StrSet;
    TSet<int32> IntSet;
    TSet<FName> NameSet;
    TSet<FStructSerializerBuiltinTestStruct> StructSet;

};

struct FStructSerializerTestStruct
{
    FStructSerializerNumericTestStruct Numerics;
    FStructSerializerBooleanTestStruct Booleans;
    FStructSerializerObjectTestStruct Objects;
    FStructSerializerBuiltinTestStruct Builtins;
    FStructSerializerArrayTestStruct Arrays;
    FStructSerializerMapTestStruct Maps;
    FStructSerializerSetTestStruct Sets;
    FStructSerializerLWCTypesTest LWCTypes;

};

#endif
