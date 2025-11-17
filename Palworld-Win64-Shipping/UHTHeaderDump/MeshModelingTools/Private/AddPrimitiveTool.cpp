#include "AddPrimitiveTool.h"
#include "ProceduralShapeToolProperties.h"

UAddPrimitiveTool::UAddPrimitiveTool() {
    this->OutputTypeProperties = NULL;
    this->ShapeSettings = CreateDefaultSubobject<UProceduralShapeToolProperties>(TEXT("ShapeSettings"));
    this->MaterialProperties = NULL;
    this->PreviewMesh = NULL;
    this->Gizmo = NULL;
    this->DragAlignmentMechanic = NULL;
    this->AssetName = TEXT("GeneratedAsset");
}


