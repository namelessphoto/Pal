#include "AddConePrimitiveTool.h"
#include "ProceduralConeToolProperties.h"

UAddConePrimitiveTool::UAddConePrimitiveTool(.SetDefaultSubobjectClass<UProceduralConeToolProperties>(TEXT("ShapeSettings"))) {
    this->AssetName = TEXT("Cone");
}


