#include "AddArrowPrimitiveTool.h"
#include "ProceduralArrowToolProperties.h"

UAddArrowPrimitiveTool::UAddArrowPrimitiveTool(.SetDefaultSubobjectClass<UProceduralArrowToolProperties>(TEXT("ShapeSettings"))) {
    this->AssetName = TEXT("Arrow");
}


