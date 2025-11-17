#pragma once
#include "CoreMinimal.h"
#include "HoudiniCurveOutputProperties.h"
#include "HoudiniDataLayer.h"
#include "HoudiniHLODLayer.h"
#include "HoudiniLevelInstanceParams.h"
#include "HoudiniOutputObject.generated.h"

class AActor;
class UFoliageType;
class UObject;
class UWorld;

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniOutputObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UObject* OutputObject;
    
    UPROPERTY()
    TArray<UObject*> OutputComponents;
    
    UPROPERTY()
    TArray<TSoftObjectPtr<AActor>> OutputActors;
    
    UPROPERTY()
    UObject* OutputComponent;
    
    UPROPERTY()
    UObject* ProxyObject;
    
    UPROPERTY()
    UObject* ProxyComponent;
    
    UPROPERTY()
    bool bProxyIsCurrent;
    
    UPROPERTY()
    bool bIsImplicit;
    
    UPROPERTY()
    bool bIsInvisibleCollisionMesh;
    
    UPROPERTY()
    bool bIsGeometryCollectionPiece;
    
    UPROPERTY()
    FString GeometryCollectionPieceName;
    
    UPROPERTY()
    FString BakeName;
    
    UPROPERTY()
    FHoudiniCurveOutputProperties CurveOutputProperty;
    
    UPROPERTY()
    TMap<FString, FString> CachedAttributes;
    
    UPROPERTY()
    TMap<FString, FString> CachedTokens;
    
    UPROPERTY()
    UObject* UserFoliageType;
    
    UPROPERTY()
    UFoliageType* FoliageType;
    
    UPROPERTY()
    UWorld* World;
    
    UPROPERTY()
    TArray<FHoudiniDataLayer> DataLayers;
    
    UPROPERTY()
    TArray<FHoudiniHLODLayer> HLODLayers;
    
    UPROPERTY()
    FHoudiniLevelInstanceParams LevelInstanceParams;
    
    FHoudiniOutputObject();
};

