#include "SphericalLensDistortionModelHandler.h"
#include "SphericalLensModel.h"

USphericalLensDistortionModelHandler::USphericalLensDistortionModelHandler() {
    this->LensModelClass = USphericalLensModel::StaticClass();
}


