#include "AddStairsPrimitiveTool.h"
#include "ProceduralStairsToolProperties.h"

UAddStairsPrimitiveTool::UAddStairsPrimitiveTool(.SetDefaultSubobjectClass<UProceduralStairsToolProperties>(TEXT("ShapeSettings"))) {
    this->AssetName = TEXT("Stairs");
}


