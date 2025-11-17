#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EDisplaceMeshToolTriangleSelectionType.h"
#include "SelectiveTessellationProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API USelectiveTessellationProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EDisplaceMeshToolTriangleSelectionType SelectionType;
    
    UPROPERTY(EditAnywhere)
    FName ActiveMaterial;
    
    UPROPERTY()
    TArray<FString> MaterialIDList;
    
    USelectiveTessellationProperties();

    UFUNCTION()
    TArray<FString> GetMaterialIDsFunc();
    
};

