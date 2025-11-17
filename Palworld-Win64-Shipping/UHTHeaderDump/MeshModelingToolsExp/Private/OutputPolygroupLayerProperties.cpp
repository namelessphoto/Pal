#include "OutputPolygroupLayerProperties.h"

UOutputPolygroupLayerProperties::UOutputPolygroupLayerProperties() {
    this->GroupLayer = TEXT("Default");
    this->bShowNewLayerName = false;
    this->NewLayerName = TEXT("polygroups");
}

TArray<FString> UOutputPolygroupLayerProperties::GetGroupOptionsList() {
    return TArray<FString>();
}


