#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HoudiniExtents.h"
#include "HoudiniGenericAttribute.h"
#include "HoudiniLandscapeTargetLayerOutput.generated.h"

class ALandscape;
class ALandscapeProxy;
class ULandscapeLayerInfoObject;
class UMaterialInterface;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniLandscapeTargetLayerOutput : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    ALandscape* Landscape;
    
    UPROPERTY()
    ALandscapeProxy* LandscapeProxy;
    
    UPROPERTY()
    FString BakedEditLayer;
    
    UPROPERTY()
    FString CookedEditLayer;
    
    UPROPERTY()
    FString TargetLayer;
    
    UPROPERTY()
    FHoudiniExtents Extents;
    
    UPROPERTY()
    bool bClearLayer;
    
    UPROPERTY()
    bool bCreatedLandscape;
    
    UPROPERTY()
    bool bCookedLayerRequiresBaking;
    
    UPROPERTY()
    FString BakedLandscapeName;
    
    UPROPERTY()
    TArray<ULandscapeLayerInfoObject*> LayerInfoObjects;
    
    UPROPERTY()
    FString BakeFolder;
    
    UPROPERTY()
    UMaterialInterface* MaterialInstance;
    
    UPROPERTY()
    bool bWriteLockedLayers;
    
    UPROPERTY()
    bool bLockLayer;
    
    UPROPERTY()
    TArray<FHoudiniGenericAttribute> PropertyAttributes;
    
    UHoudiniLandscapeTargetLayerOutput();

};

