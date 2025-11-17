#ifndef UE4SS_SDK_PlacementTools_HPP
#define UE4SS_SDK_PlacementTools_HPP

#include "PlacementTools_enums.hpp"

struct FDirections
{
    bool xDown;
    bool xUp;
    bool yDown;
    bool yUp;
    bool zDown;
    bool zUp;

};

struct FLinearDistribution
{
    TArray<FVector2D> CurvePoints;

};

struct FPlacementItem
{
    TEnumAsByte<EItemType> ItemType;
    TSubclassOf<class AActor> Actor;
    class UStaticMesh* Mesh;
    float Weight;

};

class ABoxPlacement : public APlacementToolBase
{
    FVector BoxExtent;
    class UBoxComponent* BoxBrush;
    FDirections FadeDirection;
    TEnumAsByte<ECollisionChannel> TraceChannel;
    TArray<FName> NotPlaceOnActorTags;

};

class APlacementToolBase : public AActor
{
    bool isInEditor;
    class USceneComponent* SceneComponent;
    class UBillboardComponent* EasySelectBillboard;
    FRandomStream RandomStream;
    FLinearDistribution DistributionCurve;
    TEnumAsByte<EPlacementMode> PlacementMode;
    TEnumAsByte<EPlacementStyle> PlacementStyle;
    TArray<FPlacementItem> PlacementItems;
    FDirections SurfaceDirection;
    int32 Amount;
    int32 Seed;
    FTransform Offset;
    bool bRandomizeRotation;
    FRotator RotationMin;
    FRotator RotationMax;
    bool bRandomizeScale;
    bool bUniformScale;
    FVector ScaleMin;
    FVector ScaleMax;
    bool bRotateToSurface;
    bool bAdjustToSurface;
    bool bAvoidOverlapBounds;
    bool bDeleteChildrenWhenDeleted;
    bool bHideBrush;

    void RandomizeSeed();
    void Generate();
};

class ASpherePlacement : public APlacementToolBase
{
    float Radius;
    class USphereComponent* SphereBrush;
    TEnumAsByte<EFadeAxis> FadeDirection;
    TEnumAsByte<ECollisionChannel> TraceChannel;
    TArray<FName> NotPlaceOnActorTags;

};

#endif
