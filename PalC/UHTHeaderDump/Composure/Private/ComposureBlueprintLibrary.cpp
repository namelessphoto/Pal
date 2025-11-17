#include "ComposureBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

UComposureBlueprintLibrary::UComposureBlueprintLibrary() {
}

void UComposureBlueprintLibrary::SetUVMapSettingsToMaterialParameters(const FComposureUVMapSettings& UVMapSettings, UMaterialInstanceDynamic* Material) {
}

void UComposureBlueprintLibrary::RequestRedrawComposureViewport() {
}

bool UComposureBlueprintLibrary::RenameComposureElement(const FName OriginalElementName, const FName NewElementName) {
    return false;
}

void UComposureBlueprintLibrary::RefreshComposureElementList() {
}

bool UComposureBlueprintLibrary::IsComposureElementDrawing(ACompositingElement* CompElement) {
    return false;
}

void UComposureBlueprintLibrary::InvertUVDisplacementMapEncodingParameters(const FVector2D& In, FVector2D& Out) {
}

void UComposureBlueprintLibrary::GetRedGreenUVFactorsFromChromaticAberration(float ChromaticAberrationAmount, FVector2D& RedGreenUVFactors) {
}

void UComposureBlueprintLibrary::GetProjectionMatrixFromPostMoveSettings(const FComposurePostMoveSettings& PostMoveSettings, float HorizontalFOVAngle, float AspectRatio, FMatrix& ProjectionMatrix) {
}

void UComposureBlueprintLibrary::GetPlayerDisplayGamma(const APlayerCameraManager* PlayerCameraManager, float& DisplayGamma) {
}

void UComposureBlueprintLibrary::GetCroppingUVTransformationMatrixFromPostMoveSettings(const FComposurePostMoveSettings& PostMoveSettings, float AspectRatio, FMatrix& CropingUVTransformationMatrix, FMatrix& UncropingUVTransformationMatrix) {
}

ACompositingElement* UComposureBlueprintLibrary::GetComposureElement(const FName ElementName) {
    return NULL;
}

void UComposureBlueprintLibrary::DeleteComposureElementAndChildren(const FName ElementToDelete) {
}

UComposurePlayerCompositingTarget* UComposureBlueprintLibrary::CreatePlayerCompositingTarget(UObject* WorldContextObject) {
    return NULL;
}

ACompositingElement* UComposureBlueprintLibrary::CreateComposureElement(const FName ElementName, TSubclassOf<ACompositingElement> ClassType, AActor* LevelContext) {
    return NULL;
}

void UComposureBlueprintLibrary::CopyCameraSettingsToSceneCapture(UCameraComponent* SrcCamera, USceneCaptureComponent2D* DstCaptureComponent, float OriginalFocalLength, float OverscanFactor) {
}

bool UComposureBlueprintLibrary::AttachComposureElement(const FName ParentName, const FName ChildName) {
    return false;
}


