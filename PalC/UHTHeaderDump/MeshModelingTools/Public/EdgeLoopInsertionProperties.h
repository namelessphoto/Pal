#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EEdgeLoopInsertionMode.h"
#include "EEdgeLoopPositioningMode.h"
#include "EdgeLoopInsertionProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UEdgeLoopInsertionProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EEdgeLoopPositioningMode PositionMode;
    
    UPROPERTY(EditAnywhere)
    EEdgeLoopInsertionMode InsertionMode;
    
    UPROPERTY(EditAnywhere)
    int32 NumLoops;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    double ProportionOffset;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    double DistanceOffset;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bInteractive;
    
    UPROPERTY(EditAnywhere)
    bool bFlipOffsetDirection;
    
    UPROPERTY(EditAnywhere)
    bool bHighlightProblemGroups;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    double VertexTolerance;
    
    UEdgeLoopInsertionProperties();

};

