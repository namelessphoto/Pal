#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "FixedPlaneBrushProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UFixedPlaneBrushProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bPropertySetEnabled;
    
    UPROPERTY(EditAnywhere)
    bool bShowGizmo;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FVector Position;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FQuat Rotation;
    
    UFixedPlaneBrushProperties();

};

