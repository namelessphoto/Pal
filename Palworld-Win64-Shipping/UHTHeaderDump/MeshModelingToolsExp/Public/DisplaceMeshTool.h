#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleSelectionMeshEditingTool -FallbackName=SingleSelectionMeshEditingTool
#include "DisplaceMeshTool.generated.h"

class AInternalToolFrameworkActor;
class UCurveFloat;
class UDisplaceMeshCommonProperties;
class UDisplaceMeshDirectionalFilterProperties;
class UDisplaceMeshPerlinNoiseProperties;
class UDisplaceMeshSineWaveProperties;
class UDisplaceMeshTextureMapProperties;
class UDynamicMeshComponent;
class USelectiveTessellationProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UDisplaceMeshTool : public USingleSelectionMeshEditingTool {
    GENERATED_BODY()
public:
    UPROPERTY()
    UDisplaceMeshCommonProperties* CommonProperties;
    
    UPROPERTY()
    UDisplaceMeshDirectionalFilterProperties* DirectionalFilterProperties;
    
    UPROPERTY()
    UDisplaceMeshTextureMapProperties* TextureMapProperties;
    
    UPROPERTY()
    UDisplaceMeshPerlinNoiseProperties* NoiseProperties;
    
    UPROPERTY()
    UDisplaceMeshSineWaveProperties* SineWaveProperties;
    
    UPROPERTY()
    USelectiveTessellationProperties* SelectiveTessellationProperties;
    
    UPROPERTY()
    UCurveFloat* ActiveContrastCurveTarget;
    
private:
    UPROPERTY()
    AInternalToolFrameworkActor* PreviewMeshActor;
    
    UPROPERTY(Instanced)
    UDynamicMeshComponent* DynamicMeshComponent;
    
public:
    UDisplaceMeshTool();

};

