#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveTool -FallbackName=InteractiveTool
#include "VolumeToMeshTool.generated.h"

class AVolume;
class UCreateMeshObjectTypeProperties;
class ULineSetComponent;
class UPreviewMesh;
class UVolumeToMeshToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UVolumeToMeshTool : public UInteractiveTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UVolumeToMeshToolProperties* Settings;
    
    UPROPERTY()
    UCreateMeshObjectTypeProperties* OutputTypeProperties;
    
    UPROPERTY()
    UPreviewMesh* PreviewMesh;
    
    UPROPERTY()
    TLazyObjectPtr<AVolume> TargetVolume;
    
    UPROPERTY(Instanced)
    ULineSetComponent* VolumeEdgesSet;
    
public:
    UVolumeToMeshTool();

};

