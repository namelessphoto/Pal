#include "AddDiscPrimitiveTool.h"
#include "ProceduralDiscToolProperties.h"

UAddDiscPrimitiveTool::UAddDiscPrimitiveTool(.SetDefaultSubobjectClass<UProceduralDiscToolProperties>(TEXT("ShapeSettings"))) {
    this->AssetName = TEXT("Disc");
}


