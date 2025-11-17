#include "SelectiveTessellationProperties.h"

USelectiveTessellationProperties::USelectiveTessellationProperties() {
    this->SelectionType = EDisplaceMeshToolTriangleSelectionType::None;
}

TArray<FString> USelectiveTessellationProperties::GetMaterialIDsFunc() {
    return TArray<FString>();
}


