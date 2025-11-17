#include "AddBoxPrimitiveTool.h"
#include "ProceduralBoxToolProperties.h"

UAddBoxPrimitiveTool::UAddBoxPrimitiveTool(.SetDefaultSubobjectClass<UProceduralBoxToolProperties>(TEXT("ShapeSettings"))) {
    this->AssetName = TEXT("Box");
}


