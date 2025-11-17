#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "ECollisionGeometryMode.h"
#include "ECollisionGeometryType.h"
#include "EProjectedHullAxis.h"
#include "ESetCollisionGeometryInputMode.h"
#include "SetCollisionGeometryToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API USetCollisionGeometryToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECollisionGeometryType GeometryType;
    
    UPROPERTY(EditAnywhere)
    ESetCollisionGeometryInputMode InputMode;
    
    UPROPERTY(EditAnywhere)
    bool bUseWorldSpace;
    
    UPROPERTY(EditAnywhere)
    bool bRemoveContained;
    
    UPROPERTY(EditAnywhere)
    bool bEnableMaxCount;
    
    UPROPERTY(EditAnywhere)
    int32 MaxCount;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float MinThickness;
    
    UPROPERTY(EditAnywhere)
    bool bDetectBoxes;
    
    UPROPERTY(EditAnywhere)
    bool bDetectSpheres;
    
    UPROPERTY(EditAnywhere)
    bool bDetectCapsules;
    
    UPROPERTY(EditAnywhere)
    bool bSimplifyHulls;
    
    UPROPERTY(EditAnywhere)
    int32 HullTargetFaceCount;
    
    UPROPERTY(EditAnywhere)
    int32 MaxHullsPerMesh;
    
    UPROPERTY(EditAnywhere)
    float ConvexDecompositionSearchFactor;
    
    UPROPERTY(EditAnywhere)
    float AddHullsErrorTolerance;
    
    UPROPERTY(EditAnywhere)
    float MinPartThickness;
    
    UPROPERTY(EditAnywhere)
    bool bSimplifyPolygons;
    
    UPROPERTY(EditAnywhere)
    float HullTolerance;
    
    UPROPERTY(EditAnywhere)
    EProjectedHullAxis SweepAxis;
    
    UPROPERTY(EditAnywhere)
    int32 LevelSetResolution;
    
    UPROPERTY(EditAnywhere)
    bool bAppendToExisting;
    
    UPROPERTY(EditAnywhere)
    ECollisionGeometryMode SetCollisionType;
    
    USetCollisionGeometryToolProperties();

};

