#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box2D -FallbackName=Box2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=OrientedBox -FallbackName=OrientedBox
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Plane -FallbackName=Plane
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "StructSerializerLWCTypesTest.generated.h"

USTRUCT()
struct FStructSerializerLWCTypesTest {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Vector;
    
    UPROPERTY()
    FVector2D Vector2D;
    
    UPROPERTY()
    FVector4 Vector4;
    
    UPROPERTY()
    FMatrix Matrix;
    
    UPROPERTY()
    FPlane Plane;
    
    UPROPERTY()
    FQuat Quat;
    
    UPROPERTY()
    FRotator Rotator;
    
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY()
    FBox Box;
    
    UPROPERTY()
    FBox2D Box2D;
    
    UPROPERTY()
    FBoxSphereBounds BoxSphereBounds;
    
    UPROPERTY()
    FOrientedBox OrientedBox;
    
    UPROPERTY()
    float float;
    
    UPROPERTY()
    double Double;
    
    UPROPERTY()
    TArray<FVector> VectorArray;
    
    UPROPERTY()
    TMap<FString, FVector> StrToVec;
    
    UPROPERTY()
    TSet<FVector> VectorSet;
    
    SERIALIZATION_API FStructSerializerLWCTypesTest();
};

