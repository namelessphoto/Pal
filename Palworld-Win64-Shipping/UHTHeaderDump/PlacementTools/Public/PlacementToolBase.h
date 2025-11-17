#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Directions.h"
#include "EPlacementMode.h"
#include "EPlacementStyle.h"
#include "LinearDistribution.h"
#include "PlacementItem.h"
#include "PlacementToolBase.generated.h"

class UBillboardComponent;
class USceneComponent;

UCLASS(Abstract)
class PLACEMENTTOOLS_API APlacementToolBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool isInEditor;
    
protected:
    UPROPERTY(Instanced)
    USceneComponent* SceneComponent;
    
    UPROPERTY(Instanced)
    UBillboardComponent* EasySelectBillboard;
    
    UPROPERTY()
    FRandomStream RandomStream;
    
    UPROPERTY()
    FLinearDistribution DistributionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EPlacementMode> PlacementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EPlacementStyle> PlacementStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPlacementItem> PlacementItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDirections SurfaceDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRandomizeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator RotationMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator RotationMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRandomizeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUniformScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ScaleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ScaleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRotateToSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAdjustToSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAvoidOverlapBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDeleteChildrenWhenDeleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHideBrush;
    
public:
    APlacementToolBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void RandomizeSeed();
    
public:
    UFUNCTION(BlueprintCallable)
    void Generate();
    
};

