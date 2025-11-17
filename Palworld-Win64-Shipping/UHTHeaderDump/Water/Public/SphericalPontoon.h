#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SphericalPontoon.generated.h"

class UWaterBodyComponent;

USTRUCT(BlueprintType)
struct FSphericalPontoon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName CenterSocket;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector RelativeLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bFXEnabled;
    
    UPROPERTY(BlueprintReadOnly)
    FVector LocalForce;
    
    UPROPERTY(BlueprintReadOnly)
    FVector CenterLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FQuat SocketRotation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Offset;
    
    UPROPERTY(BlueprintReadOnly)
    float WaterHeight;
    
    UPROPERTY(BlueprintReadOnly)
    float WaterDepth;
    
    UPROPERTY(BlueprintReadOnly)
    float ImmersionDepth;
    
    UPROPERTY(BlueprintReadOnly)
    FVector WaterPlaneLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector WaterPlaneNormal;
    
    UPROPERTY(BlueprintReadOnly)
    FVector WaterSurfacePosition;
    
    UPROPERTY(BlueprintReadOnly)
    FVector WaterVelocity;
    
    UPROPERTY(BlueprintReadOnly)
    int32 WaterBodyIndex;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsInWater;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UWaterBodyComponent* CurrentWaterBodyComponent;
    
    WATER_API FSphericalPontoon();
};

