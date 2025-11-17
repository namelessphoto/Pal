#ifndef UE4SS_SDK_GeometryCollectionNodes_HPP
#define UE4SS_SDK_GeometryCollectionNodes_HPP

#include "GeometryCollectionNodes_enums.hpp"

struct FBoolToStringDataflowNode : public FDataflowNode
{
    bool bool;
    FString String;

};

struct FBoundingBoxDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;
    FBox BoundingBox;

};

struct FCloseGeometryOnCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;

};

struct FCreateNonOverlappingConvexHullsDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;
    float CanRemoveFraction;
    float CanExceedFraction;
    float SimplificationDistanceThreshold;

};

struct FDegreesToRadiansDataflowNode : public FDataflowNode
{
    float Degrees;
    float Radians;

};

struct FExampleCollectionEditDataflowNode : public FDataflowNode
{
    float Scale;
    FManagedArrayCollection Collection;

};

struct FExpandBoundingBoxDataflowNode : public FDataflowNode
{
    FBox BoundingBox;
    FVector Min;
    FVector Max;
    FVector Center;
    FVector HalfExtents;
    float Volume;

};

struct FExpandVectorDataflowNode : public FDataflowNode
{
    FVector Vector;
    float X;
    float Y;
    float Z;

};

struct FExplodedViewDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;
    float UniformScale;
    FVector Scale;

};

struct FFloatToIntDataflowNode : public FDataflowNode
{
    EFloatToIntFunctionEnum Function;
    float float;
    int32 Int;

};

struct FFloatToStringDataflowNode : public FDataflowNode
{
    float float;
    FString String;

};

struct FGenerateTetrahedralCollectionDataflowNodes : public FDataflowNode
{
    FManagedArrayCollection Collection;

};

struct FGetCollectionAssetDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Output;

};

struct FHashStringDataflowNode : public FDataflowNode
{
    FString String;
    int32 Hash;

};

struct FHashVectorDataflowNode : public FDataflowNode
{
    FVector Vector;
    int32 Hash;

};

struct FIntToFloatDataflowNode : public FDataflowNode
{
    int32 Int;
    float float;

};

struct FIntToStringDataflowNode : public FDataflowNode
{
    int32 Int;
    FString String;

};

struct FLogStringDataflowNode : public FDataflowNode
{
    bool PrintToLog;
    FString String;

};

struct FMakeBoxDataflowNode : public FDataflowNode
{
    EMakeBoxDataTypeEnum DataType;
    FVector Min;
    FVector Max;
    FVector Center;
    FVector Size;
    FBox Box;

};

struct FMakeLiteralBoolDataflowNode : public FDataflowNode
{
    bool Value;
    bool bool;

};

struct FMakeLiteralFloatDataflowNode : public FDataflowNode
{
    float Value;
    float float;

};

struct FMakeLiteralIntDataflowNode : public FDataflowNode
{
    int32 Value;
    int32 Int;

};

struct FMakeLiteralStringDataflowNode : public FDataflowNode
{
    FString Value;
    FString String;

};

struct FMakeLiteralVectorDataflowNode : public FDataflowNode
{
    FVector Value;
    FVector Vector;

};

struct FMakePointsDataflowNode : public FDataflowNode
{
    TArray<FVector> Point;
    TArray<FVector> Points;

};

struct FMathConstantsDataflowNode : public FDataflowNode
{
    EMathConstantsEnum Constant;
    float float;

};

struct FPlaneCutterDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;
    FBox BoundingBox;
    int32 NumPlanes;
    float RandomSeed;
    float Grout;
    float Amplitude;
    float Frequency;
    float Persistence;
    float Lacunarity;
    int32 OctaveNumber;
    float PointSpacing;
    bool AddSamplesForCollision;
    float CollisionSampleSpacing;

};

struct FPrintStringDataflowNode : public FDataflowNode
{
    bool PrintToScreen;
    bool PrintToLog;
    FColor Color;
    float Duration;
    FString String;

};

struct FRadialScatterPointsDataflowNode : public FDataflowNode
{
    FVector Center;
    FVector Normal;
    float Radius;
    int32 AngularSteps;
    int32 RadialSteps;
    float AngleOffset;
    float Variability;
    float RandomSeed;
    TArray<FVector> Points;

};

struct FRadiansToDegreesDataflowNode : public FDataflowNode
{
    float Radians;
    float Degrees;

};

struct FRandomFloatDataflowNode : public FDataflowNode
{
    bool Deterministic;
    float RandomSeed;
    float float;

};

struct FRandomFloatInRangeDataflowNode : public FDataflowNode
{
    bool Deterministic;
    float RandomSeed;
    float Min;
    float Max;
    float float;

};

struct FRandomUnitVectorDataflowNode : public FDataflowNode
{
    bool Deterministic;
    float RandomSeed;
    FVector Vector;

};

struct FRandomUnitVectorInConeDataflowNode : public FDataflowNode
{
    bool Deterministic;
    float RandomSeed;
    FVector ConeDirection;
    float ConeHalfAngle;
    FVector Vector;

};

struct FResetGeometryCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;

};

struct FSetCollectionAssetDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;

};

struct FSkeletalMeshToCollectionDataflowNode : public FDataflowNode
{
    class USkeletalMesh* SkeletalMesh;
    FManagedArrayCollection Collection;

};

struct FStringAppendDataflowNode : public FDataflowNode
{
    FString String1;
    FString String2;
    FString String;

};

struct FUniformScatterPointsDataflowNode : public FDataflowNode
{
    int32 MinNumberOfPoints;
    int32 MaxNumberOfPoints;
    float RandomSeed;
    FBox BoundingBox;
    TArray<FVector> Points;

};

struct FVectorToStringDataflowNode : public FDataflowNode
{
    FVector Vector;
    FString String;

};

struct FVoronoiFractureDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;
    TArray<FVector> Points;
    float RandomSeed;
    float ChanceToFracture;
    bool GroupFracture;
    float Grout;
    float Amplitude;
    float Frequency;
    float Persistence;
    float Lacunarity;
    int32 OctaveNumber;
    float PointSpacing;
    bool AddSamplesForCollision;
    float CollisionSampleSpacing;

};

#endif
