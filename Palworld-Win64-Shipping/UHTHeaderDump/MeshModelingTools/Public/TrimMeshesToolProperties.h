#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingOperators -ObjectName=ETrimOperation -FallbackName=ETrimOperation
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingOperators -ObjectName=ETrimSide -FallbackName=ETrimSide
#include "TrimMeshesToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UTrimMeshesToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETrimOperation WhichMesh;
    
    UPROPERTY(EditAnywhere)
    ETrimSide TrimSide;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float WindingThreshold;
    
    UPROPERTY(EditAnywhere)
    bool bShowTrimmingMesh;
    
    UPROPERTY(EditAnywhere)
    float OpacityOfTrimmingMesh;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FLinearColor ColorOfTrimmingMesh;
    
    UTrimMeshesToolProperties();

};

