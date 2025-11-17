#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "ESetMeshMaterialMode.h"
#include "ExistingMeshMaterialProperties.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UExistingMeshMaterialProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESetMeshMaterialMode MaterialMode;
    
    UPROPERTY(EditAnywhere)
    float CheckerDensity;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* OverrideMaterial;
    
    UPROPERTY(EditAnywhere)
    FString UVChannel;
    
    UPROPERTY()
    TArray<FString> UVChannelNamesList;
    
    UPROPERTY()
    UMaterialInstanceDynamic* CheckerMaterial;
    
    UExistingMeshMaterialProperties();

    UFUNCTION()
    TArray<FString> GetUVChannelNamesFunc() const;
    
};

