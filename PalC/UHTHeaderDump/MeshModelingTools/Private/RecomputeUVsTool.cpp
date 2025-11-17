#include "RecomputeUVsTool.h"

URecomputeUVsTool::URecomputeUVsTool() {
    this->UVChannelProperties = NULL;
    this->Settings = NULL;
    this->PolygroupLayerProperties = NULL;
    this->MaterialSettings = NULL;
    this->bCreateUVLayoutViewOnSetup = true;
    this->UVLayoutView = NULL;
    this->RecomputeUVsOpFactory = NULL;
    this->Preview = NULL;
}


