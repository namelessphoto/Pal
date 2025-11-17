#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=EBaseCreateFromSelectedTargetType -FallbackName=EBaseCreateFromSelectedTargetType
#include "CombineMeshesToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UCombineMeshesToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bIsDuplicateMode;
    
    UPROPERTY(EditAnywhere)
    EBaseCreateFromSelectedTargetType OutputWriteTo;
    
    UPROPERTY(EditAnywhere)
    FString OutputNewName;
    
    UPROPERTY(VisibleAnywhere)
    FString OutputExistingName;
    
    UCombineMeshesToolProperties();

};

