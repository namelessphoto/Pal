#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EGroupEdgeInsertionMode.h"
#include "GroupEdgeInsertionProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UGroupEdgeInsertionProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EGroupEdgeInsertionMode InsertionMode;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    double VertexTolerance;
    
    UGroupEdgeInsertionProperties();

};

