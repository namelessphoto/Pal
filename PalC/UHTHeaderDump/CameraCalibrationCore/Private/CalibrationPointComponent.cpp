#include "CalibrationPointComponent.h"

UCalibrationPointComponent::UCalibrationPointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bVisualizePointsInEditor = false;
    this->PointVisualizationScale = 1.00f;
    this->VisualizationShape = ECalibrationPointVisualization::CalibrationPointVisualizationCube;
}

void UCalibrationPointComponent::RebuildVertices() {
}

bool UCalibrationPointComponent::NamespacedSubpointName(const FString& InSubpointName, FString& OutNamespacedName) const {
    return false;
}

bool UCalibrationPointComponent::GetWorldLocation(const FString& InPointName, FVector& OutLocation) const {
    return false;
}

void UCalibrationPointComponent::GetNamespacedPointNames(TArray<FString>& OutNamespacedNames) const {
}


