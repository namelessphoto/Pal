#include "AddCylinderPrimitiveTool.h"
#include "ProceduralCylinderToolProperties.h"

UAddCylinderPrimitiveTool::UAddCylinderPrimitiveTool(.SetDefaultSubobjectClass<UProceduralCylinderToolProperties>(TEXT("ShapeSettings"))) {
    this->AssetName = TEXT("Cylinder");
}


