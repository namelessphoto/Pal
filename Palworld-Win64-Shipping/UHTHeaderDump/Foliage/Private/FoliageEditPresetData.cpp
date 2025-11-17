#include "FoliageEditPresetData.h"

UFoliageEditPresetData::UFoliageEditPresetData() {
    this->BrushSize = 100.00f;
    this->PaintDensity = 0.30f;
    this->EraseDensity = 0.00f;
    this->bFilterLandscape = false;
    this->bFilterStaticMeshes = false;
    this->bFilterBSP = false;
    this->bFilterFoliage = false;
    this->bFilterTranslucent = false;
}


