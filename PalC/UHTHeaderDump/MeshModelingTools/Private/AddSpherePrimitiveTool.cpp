#include "AddSpherePrimitiveTool.h"
#include "ProceduralSphereToolProperties.h"

UAddSpherePrimitiveTool::UAddSpherePrimitiveTool(.SetDefaultSubobjectClass<UProceduralSphereToolProperties>(TEXT("ShapeSettings"))) {
    this->AssetName = TEXT("Sphere");
}


