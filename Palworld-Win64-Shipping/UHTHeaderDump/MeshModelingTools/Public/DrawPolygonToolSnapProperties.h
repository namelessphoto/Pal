#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "DrawPolygonToolSnapProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UDrawPolygonToolSnapProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, NonTransactional)
    bool bEnableSnapping;
    
    UPROPERTY()
    bool bSnapToWorldGrid;
    
    UPROPERTY(EditAnywhere, NonTransactional)
    bool bSnapToVertices;
    
    UPROPERTY(EditAnywhere, NonTransactional)
    bool bSnapToEdges;
    
    UPROPERTY(EditAnywhere, NonTransactional)
    bool bSnapToAxes;
    
    UPROPERTY(EditAnywhere, NonTransactional)
    bool bSnapToLengths;
    
    UPROPERTY(EditAnywhere, NonTransactional)
    bool bSnapToSurfaces;
    
    UPROPERTY(EditAnywhere, NonTransactional)
    float SnapToSurfacesOffset;
    
    UDrawPolygonToolSnapProperties();

};

