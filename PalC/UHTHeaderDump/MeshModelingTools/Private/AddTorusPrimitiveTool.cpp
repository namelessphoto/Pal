#include "AddTorusPrimitiveTool.h"
#include "ProceduralTorusToolProperties.h"

UAddTorusPrimitiveTool::UAddTorusPrimitiveTool(.SetDefaultSubobjectClass<UProceduralTorusToolProperties>(TEXT("ShapeSettings"))) {
    this->AssetName = TEXT("Torus");
}


