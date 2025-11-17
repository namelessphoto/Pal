#include "CreateMeshObjectResult.h"

FCreateMeshObjectResult::FCreateMeshObjectResult() {
    this->ResultCode = ECreateModelingObjectResult::Ok;
    this->NewActor = NULL;
    this->NewComponent = NULL;
    this->NewAsset = NULL;
}

