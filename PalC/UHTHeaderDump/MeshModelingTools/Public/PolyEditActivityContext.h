#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PolyEditActivityContext.generated.h"

class UMeshOpPreviewWithBackgroundCompute;
class UPolyEditCommonProperties;
class UPolygonSelectionMechanic;

UCLASS()
class MESHMODELINGTOOLS_API UPolyEditActivityContext : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UPolyEditCommonProperties* CommonProperties;
    
    UPROPERTY()
    UMeshOpPreviewWithBackgroundCompute* Preview;
    
    UPROPERTY()
    UPolygonSelectionMechanic* SelectionMechanic;
    
    UPolyEditActivityContext();

};

