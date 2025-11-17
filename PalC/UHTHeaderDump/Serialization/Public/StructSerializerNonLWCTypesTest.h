#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box2f -FallbackName=Box2f
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box3f -FallbackName=Box3f
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds3f -FallbackName=BoxSphereBounds3f
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix44f -FallbackName=Matrix44f
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Plane4f -FallbackName=Plane4f
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat4f -FallbackName=Quat4f
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator3f -FallbackName=Rotator3f
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform3f -FallbackName=Transform3f
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2f -FallbackName=Vector2f
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3f -FallbackName=Vector3f
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4f -FallbackName=Vector4f
#include "OrientedBoxFloat.h"
#include "StructSerializerNonLWCTypesTest.generated.h"

USTRUCT()
struct FStructSerializerNonLWCTypesTest {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector3f Vector;
    
    UPROPERTY()
    FVector2f Vector2D;
    
    UPROPERTY()
    FVector4f Vector4;
    
    UPROPERTY()
    FMatrix44f Matrix;
    
    UPROPERTY()
    FPlane4f Plane;
    
    UPROPERTY()
    FQuat4f Quat;
    
    UPROPERTY()
    FRotator3f Rotator;
    
    UPROPERTY()
    FTransform3f Transform;
    
    UPROPERTY()
    FBox3f Box;
    
    UPROPERTY()
    FBox2f Box2D;
    
    UPROPERTY()
    FBoxSphereBounds3f BoxSphereBounds;
    
    UPROPERTY()
    FOrientedBoxFloat OrientedBox;
    
    UPROPERTY()
    float float;
    
    UPROPERTY()
    double Double;
    
    UPROPERTY()
    TArray<FVector3f> VectorArray;
    
    UPROPERTY()
    TMap<FString, FVector3f> StrToVec;
    
    UPROPERTY()
    TSet<FVector3f> VectorSet;
    
    SERIALIZATION_API FStructSerializerNonLWCTypesTest();
};

