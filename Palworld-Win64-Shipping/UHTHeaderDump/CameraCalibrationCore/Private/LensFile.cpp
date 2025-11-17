#include "LensFile.h"

ULensFile::ULensFile() {
    this->DataMode = ELensDataMode::Parameters;
    this->UndistortionDisplacementMapHolders.AddDefaulted(4);
    this->DistortionDisplacementMapHolders.AddDefaulted(4);
}

void ULensFile::RemoveZoomPoint(ELensDataCategory InDataCategory, float InFocus, float InZoom) {
}

void ULensFile::RemoveFocusPoint(ELensDataCategory InDataCategory, float InFocus) {
}

bool ULensFile::HasSamples(ELensDataCategory InDataCategory) const {
    return false;
}

bool ULensFile::HasIrisEncoderMapping() const {
    return false;
}

bool ULensFile::HasFocusEncoderMapping() const {
    return false;
}

int32 ULensFile::GetTotalPointNum(ELensDataCategory InDataCategory) const {
    return 0;
}

TArray<FSTMapPointInfo> ULensFile::GetSTMapPoints() const {
    return TArray<FSTMapPointInfo>();
}

bool ULensFile::GetSTMapPoint(float InFocus, float InZoom, FSTMapInfo& OutSTMapInfo) const {
    return false;
}

TArray<FNodalOffsetPointInfo> ULensFile::GetNodalOffsetPoints() const {
    return TArray<FNodalOffsetPointInfo>();
}

bool ULensFile::GetNodalOffsetPoint(float InFocus, float InZoom, FNodalPointOffset& OutNodalPointOffset) const {
    return false;
}

TArray<FImageCenterPointInfo> ULensFile::GetImageCenterPoints() const {
    return TArray<FImageCenterPointInfo>();
}

bool ULensFile::GetImageCenterPoint(float InFocus, float InZoom, FImageCenterInfo& OutImageCenterInfo) const {
    return false;
}

TArray<FFocalLengthPointInfo> ULensFile::GetFocalLengthPoints() const {
    return TArray<FFocalLengthPointInfo>();
}

bool ULensFile::GetFocalLengthPoint(float InFocus, float InZoom, FFocalLengthInfo& OutFocalLengthInfo) const {
    return false;
}

TArray<FDistortionPointInfo> ULensFile::GetDistortionPoints() const {
    return TArray<FDistortionPointInfo>();
}

bool ULensFile::GetDistortionPoint(float InFocus, float InZoom, FDistortionInfo& OutDistortionInfo) const {
    return false;
}

float ULensFile::EvaluateNormalizedIris(float InNormalizedValue) const {
    return 0.0f;
}

float ULensFile::EvaluateNormalizedFocus(float InNormalizedValue) const {
    return 0.0f;
}

bool ULensFile::EvaluateNodalPointOffset(float InFocus, float InZoom, FNodalPointOffset& OutEvaluatedValue) const {
    return false;
}

bool ULensFile::EvaluateImageCenterParameters(float InFocus, float InZoom, FImageCenterInfo& OutEvaluatedValue) const {
    return false;
}

bool ULensFile::EvaluateFocalLength(float InFocus, float InZoom, FFocalLengthInfo& OutEvaluatedValue) const {
    return false;
}

bool ULensFile::EvaluateDistortionParameters(float InFocus, float InZoom, FDistortionInfo& OutEvaluatedValue) const {
    return false;
}

bool ULensFile::EvaluateDistortionData(float InFocus, float InZoom, FVector2D InFilmback, ULensDistortionModelHandlerBase* InLensHandler) const {
    return false;
}

void ULensFile::ClearData(ELensDataCategory InDataCategory) {
}

void ULensFile::ClearAll() {
}

void ULensFile::AddSTMapPoint(float NewFocus, float NewZoom, const FSTMapInfo& NewPoint) {
}

void ULensFile::AddNodalOffsetPoint(float NewFocus, float NewZoom, const FNodalPointOffset& NewPoint) {
}

void ULensFile::AddImageCenterPoint(float NewFocus, float NewZoom, const FImageCenterInfo& NewPoint) {
}

void ULensFile::AddFocalLengthPoint(float NewFocus, float NewZoom, const FFocalLengthInfo& NewFocalLength) {
}

void ULensFile::AddDistortionPoint(float NewFocus, float NewZoom, const FDistortionInfo& NewPoint, const FFocalLengthInfo& NewFocalLength) {
}


