#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EOffsetMeshToolOffsetType.h"
#include "OffsetMeshToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UOffsetMeshToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EOffsetMeshToolOffsetType OffsetType;
    
    UPROPERTY(EditAnywhere)
    float Distance;
    
    UPROPERTY(EditAnywhere)
    bool bCreateShell;
    
    UOffsetMeshToolProperties();

};

