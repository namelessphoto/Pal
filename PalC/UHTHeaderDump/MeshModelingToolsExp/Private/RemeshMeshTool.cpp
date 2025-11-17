#include "RemeshMeshTool.h"
#include "RemeshMeshToolProperties.h"

URemeshMeshTool::URemeshMeshTool() {
    this->BasicProperties = CreateDefaultSubobject<URemeshMeshToolProperties>(TEXT("RemeshProperties"));
    this->MeshStatisticsProperties = NULL;
    this->Preview = NULL;
    this->MeshElementsDisplay = NULL;
}


