#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MeshOpPreviewWithBackgroundCompute.generated.h"

class UMaterialInterface;
class UPreviewMesh;
class UWorld;

UCLASS(Transient)
class MODELINGCOMPONENTS_API UMeshOpPreviewWithBackgroundCompute : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UPreviewMesh* PreviewMesh;
    
    UPROPERTY()
    TArray<UMaterialInterface*> StandardMaterials;
    
    UPROPERTY()
    UMaterialInterface* OverrideMaterial;
    
    UPROPERTY()
    UMaterialInterface* WorkingMaterial;
    
    UPROPERTY()
    UMaterialInterface* SecondaryMaterial;
    
    UPROPERTY()
    TWeakObjectPtr<UWorld> PreviewWorld;
    
    UMeshOpPreviewWithBackgroundCompute();

};

