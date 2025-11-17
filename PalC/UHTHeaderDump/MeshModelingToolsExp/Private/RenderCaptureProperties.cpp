#include "RenderCaptureProperties.h"

URenderCaptureProperties::URenderCaptureProperties() {
    this->Resolution = EBakeTextureResolution::Resolution512;
    this->bBaseColorMap = false;
    this->bNormalMap = false;
    this->bPackedMRSMap = false;
    this->bMetallicMap = false;
    this->bRoughnessMap = false;
    this->bSpecularMap = false;
    this->bEmissiveMap = false;
    this->bAntiAliasing = false;
    this->CaptureFieldOfView = 30.00f;
    this->NearPlaneDist = 1.00f;
    this->bDeviceDepthMap = false;
}


