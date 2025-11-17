#include "PreviewGeometry.h"

UPreviewGeometry::UPreviewGeometry() {
    this->ParentActor = NULL;
}

bool UPreviewGeometry::SetPointSetVisibility(const FString& PointSetIdentifier, bool bVisible) {
    return false;
}

bool UPreviewGeometry::SetPointSetMaterial(const FString& PointSetIdentifier, UMaterialInterface* NewMaterial) {
    return false;
}

bool UPreviewGeometry::SetLineSetVisibility(const FString& LineSetIdentifier, bool bVisible) {
    return false;
}

bool UPreviewGeometry::SetLineSetMaterial(const FString& LineSetIdentifier, UMaterialInterface* NewMaterial) {
    return false;
}

void UPreviewGeometry::SetAllPointSetsMaterial(UMaterialInterface* Material) {
}

void UPreviewGeometry::SetAllLineSetsMaterial(UMaterialInterface* Material) {
}

bool UPreviewGeometry::RemovePointSet(const FString& PointSetIdentifier, bool bDestroy) {
    return false;
}

bool UPreviewGeometry::RemoveLineSet(const FString& LineSetIdentifier, bool bDestroy) {
    return false;
}

void UPreviewGeometry::RemoveAllPointSets(bool bDestroy) {
}

void UPreviewGeometry::RemoveAllLineSets(bool bDestroy) {
}

APreviewGeometryActor* UPreviewGeometry::GetActor() const {
    return NULL;
}

UPointSetComponent* UPreviewGeometry::FindPointSet(const FString& PointSetIdentifier) {
    return NULL;
}

ULineSetComponent* UPreviewGeometry::FindLineSet(const FString& LineSetIdentifier) {
    return NULL;
}

void UPreviewGeometry::Disconnect() {
}

void UPreviewGeometry::CreateInWorld(UWorld* World, const FTransform& WithTransform) {
}

UPointSetComponent* UPreviewGeometry::AddPointSet(const FString& PointSetIdentifier) {
    return NULL;
}

ULineSetComponent* UPreviewGeometry::AddLineSet(const FString& LineSetIdentifier) {
    return NULL;
}


