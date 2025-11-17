#pragma once
#include "CoreMinimal.h"
#include "GLTFExporter.h"
#include "GLTFMaterialExporter.generated.h"

class UStaticMesh;

UCLASS(NonTransient)
class GLTFEXPORTER_API UGLTFMaterialExporter : public UGLTFExporter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(DuplicateTransient, Transient)
    UStaticMesh* DefaultPreviewMesh;
    
public:
    UGLTFMaterialExporter();

};

