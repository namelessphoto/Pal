#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "MeshStatisticsProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UMeshStatisticsProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString Mesh;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    FString UV;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    FString Attributes;
    
    UMeshStatisticsProperties();

};

