#pragma once
#include "CoreMinimal.h"
#include "MeshSculptToolBase.h"
#include "MeshVertexSculptTool.generated.h"

class AInternalToolFrameworkActor;
class UDynamicMeshComponent;
class UMeshSymmetryProperties;
class UTexture2D;
class UVertexBrushAlphaProperties;
class UVertexBrushSculptProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UMeshVertexSculptTool : public UMeshSculptToolBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    UVertexBrushSculptProperties* SculptProperties;
    
    UPROPERTY()
    UVertexBrushAlphaProperties* AlphaProperties;
    
    UPROPERTY()
    UTexture2D* BrushAlpha;
    
    UPROPERTY()
    UMeshSymmetryProperties* SymmetryProperties;
    
protected:
    UPROPERTY()
    AInternalToolFrameworkActor* PreviewMeshActor;
    
    UPROPERTY(Instanced)
    UDynamicMeshComponent* DynamicMeshComponent;
    
public:
    UMeshVertexSculptTool();

};

