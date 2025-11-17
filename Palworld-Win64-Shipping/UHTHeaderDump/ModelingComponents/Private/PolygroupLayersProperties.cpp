#include "PolygroupLayersProperties.h"

UPolygroupLayersProperties::UPolygroupLayersProperties() {
    this->ActiveGroupLayer = TEXT("Default");
}

TArray<FString> UPolygroupLayersProperties::GetGroupLayersFunc() {
    return TArray<FString>();
}


