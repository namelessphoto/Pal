#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "HoudiniBakedOutputObject.generated.h"

class UFoliageType;

USTRUCT()
struct HOUDINIENGINERUNTIME_API FHoudiniBakedOutputObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Actor;
    
    UPROPERTY()
    FString Blueprint;
    
    UPROPERTY()
    FName ActorBakeName;
    
    UPROPERTY()
    FString BakedObject;
    
    UPROPERTY()
    FString BakedComponent;
    
    UPROPERTY()
    TArray<FString> InstancedActors;
    
    UPROPERTY()
    TArray<FString> InstancedComponents;
    
    UPROPERTY()
    TMap<FName, FString> LandscapeLayers;
    
    UPROPERTY()
    TArray<FVector> FoliageInstancePositions;
    
    UPROPERTY()
    UFoliageType* FoliageType;
    
    UPROPERTY()
    TArray<FString> LevelInstanceActors;
    
    UPROPERTY()
    FString Landscape;
    
    UPROPERTY()
    FString BakedSkeleton;
    
    FHoudiniBakedOutputObject();
};

