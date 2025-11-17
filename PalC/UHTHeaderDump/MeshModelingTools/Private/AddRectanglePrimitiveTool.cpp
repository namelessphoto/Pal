#include "AddRectanglePrimitiveTool.h"
#include "ProceduralRectangleToolProperties.h"

UAddRectanglePrimitiveTool::UAddRectanglePrimitiveTool(.SetDefaultSubobjectClass<UProceduralRectangleToolProperties>(TEXT("ShapeSettings"))) {
    this->AssetName = TEXT("Rectangle");
}


