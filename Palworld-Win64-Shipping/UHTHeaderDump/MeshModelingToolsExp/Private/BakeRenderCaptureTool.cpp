#include "BakeRenderCaptureTool.h"

UBakeRenderCaptureTool::UBakeRenderCaptureTool() {
    this->Settings = NULL;
    this->RenderCaptureProperties = NULL;
    this->InputMeshSettings = NULL;
    this->ResultSettings = NULL;
    this->EmptyEmissiveMap = NULL;
    this->EmptyPackedMRSMap = NULL;
    this->EmptyRoughnessMap = NULL;
    this->EmptyMetallicMap = NULL;
    this->EmptySpecularMap = NULL;
    this->PreviewMaterialRC = NULL;
    this->PreviewMaterialPackedRC = NULL;
    this->ComputedRenderCaptureProperties = NULL;
}


