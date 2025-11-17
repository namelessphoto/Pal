#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EOccludedAction.h"
#include "EOcclusionCalculationUIMode.h"
#include "EOcclusionTriangleSamplingUIMode.h"
#include "RemoveOccludedTrianglesToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API URemoveOccludedTrianglesToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EOcclusionCalculationUIMode OcclusionTestMethod;
    
    UPROPERTY(EditAnywhere)
    EOcclusionTriangleSamplingUIMode TriangleSampling;
    
    UPROPERTY(EditAnywhere)
    double WindingIsoValue;
    
    UPROPERTY(EditAnywhere)
    int32 AddRandomRays;
    
    UPROPERTY(EditAnywhere)
    int32 AddTriangleSamples;
    
    UPROPERTY(EditAnywhere)
    bool bOnlySelfOcclude;
    
    UPROPERTY(EditAnywhere)
    int32 ShrinkRemoval;
    
    UPROPERTY(EditAnywhere)
    double MinAreaIsland;
    
    UPROPERTY(EditAnywhere)
    int32 MinTriCountIsland;
    
    UPROPERTY(EditAnywhere)
    EOccludedAction action;
    
    URemoveOccludedTrianglesToolProperties();

};

