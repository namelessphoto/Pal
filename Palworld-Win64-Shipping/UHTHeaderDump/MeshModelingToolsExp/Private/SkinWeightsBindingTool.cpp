#include "SkinWeightsBindingTool.h"
#include "SkinWeightsBindingToolProperties.h"

USkinWeightsBindingTool::USkinWeightsBindingTool() {
    this->Properties = CreateDefaultSubobject<USkinWeightsBindingToolProperties>(TEXT("SkinWeightsBindingProperties"));
    this->Preview = NULL;
}


