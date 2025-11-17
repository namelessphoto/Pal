#include "DatasmithSkyLightComponentTemplate.h"

UDatasmithSkyLightComponentTemplate::UDatasmithSkyLightComponentTemplate() {
    this->SourceType = ESkyLightSourceType::SLS_CapturedScene;
    this->CubemapResolution = 0;
    this->Cubemap = NULL;
}


