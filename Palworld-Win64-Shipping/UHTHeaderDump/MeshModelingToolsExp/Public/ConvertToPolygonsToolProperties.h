#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EConvertToPolygonsMode.h"
#include "ConvertToPolygonsToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UConvertToPolygonsToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EConvertToPolygonsMode ConversionMode;
    
    UPROPERTY(EditAnywhere)
    float AngleTolerance;
    
    UPROPERTY(EditAnywhere)
    int32 NumPoints;
    
    UPROPERTY(EditAnywhere)
    bool bSplitExisting;
    
    UPROPERTY(EditAnywhere)
    bool bNormalWeighted;
    
    UPROPERTY(EditAnywhere)
    float NormalWeighting;
    
    UPROPERTY(EditAnywhere)
    float QuadAdjacencyWeight;
    
    UPROPERTY(EditAnywhere)
    float QuadMetricClamp;
    
    UPROPERTY(EditAnywhere)
    int32 QuadSearchRounds;
    
    UPROPERTY(EditAnywhere)
    bool bRespectUVSeams;
    
    UPROPERTY(EditAnywhere)
    bool bRespectHardNormals;
    
    UPROPERTY(EditAnywhere)
    int32 MinGroupSize;
    
    UPROPERTY(EditAnywhere)
    bool bCalculateNormals;
    
    UPROPERTY(EditAnywhere)
    bool bShowGroupColors;
    
    UConvertToPolygonsToolProperties();

};

