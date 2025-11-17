#include "BakeMeshAttributeVertexToolProperties.h"

UBakeMeshAttributeVertexToolProperties::UBakeMeshAttributeVertexToolProperties() {
    this->OutputMode = EBakeVertexOutput::RGBA;
    this->OutputType = 1;
    this->OutputTypeR = 0;
    this->OutputTypeG = 0;
    this->OutputTypeB = 0;
    this->OutputTypeA = 0;
    this->PreviewMode = EBakeVertexChannel::RGBA;
    this->bSplitAtNormalSeams = false;
    this->bSplitAtUVSeams = false;
}


