#include "LensComponent.h"
#include "Templates/SubclassOf.h"

ULensComponent::ULensComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EvaluationMode = EFIZEvaluationMode::UseLiveLink;
    this->DistortionStateSource = EDistortionSource::LensFile;
    this->bApplyDistortion = false;
    this->LensModel = NULL;
    this->bScaleOverscan = false;
    this->OverscanMultiplier = 1.00f;
    this->FilmbackOverride = EFilmbackOverrideSource::DoNotOverride;
    this->bApplyNodalOffsetOnTick = true;
    this->bIsDistortionSetup = false;
    this->OriginalFocalLength = 35.00f;
    this->LastDistortionMID = NULL;
    this->LastCameraComponent = NULL;
}

bool ULensComponent::WasNodalOffsetAppliedThisTick() const {
    return false;
}

bool ULensComponent::WasDistortionEvaluated() const {
    return false;
}

bool ULensComponent::ShouldApplyNodalOffsetOnTick() const {
    return false;
}

bool ULensComponent::ShouldApplyDistortion() const {
    return false;
}

void ULensComponent::SetOverscanMultiplier(float Multiplier) {
}

void ULensComponent::SetLensModel(TSubclassOf<ULensModel> Model) {
}

void ULensComponent::SetLensFilePicker(FLensFilePicker LensFile) {
}

void ULensComponent::SetLensFile(ULensFile* LensFile) {
}

void ULensComponent::SetFIZEvaluationMode(EFIZEvaluationMode Mode) {
}

void ULensComponent::SetFilmbackOverrideSetting(EFilmbackOverrideSource Setting) {
}

void ULensComponent::SetDistortionState(FLensDistortionState State) {
}

void ULensComponent::SetDistortionSource(EDistortionSource Source) {
}

void ULensComponent::SetCroppedFilmback(FCameraFilmbackSettings Filmback) {
}

void ULensComponent::SetApplyNodalOffsetOnTick(bool bApplyNodalOffset) {
}

void ULensComponent::SetApplyDistortion(bool bApply) {
}

float ULensComponent::GetOverscanMultiplier() const {
    return 0.0f;
}

float ULensComponent::GetOriginalFocalLength() const {
    return 0.0f;
}

TSubclassOf<ULensModel> ULensComponent::GetLensModel() const {
    return NULL;
}

FLensFilePicker ULensComponent::GetLensFilePicker() const {
    return FLensFilePicker{};
}

FLensFileEvaluationInputs ULensComponent::GetLensFileEvaluationInputs() const {
    return FLensFileEvaluationInputs{};
}

ULensFile* ULensComponent::GetLensFile() const {
    return NULL;
}

EFIZEvaluationMode ULensComponent::GetFIZEvaluationMode() const {
    return EFIZEvaluationMode::UseLiveLink;
}

EFilmbackOverrideSource ULensComponent::GetFilmbackOverrideSetting() const {
    return EFilmbackOverrideSource::LensFile;
}

FLensDistortionState ULensComponent::GetDistortionState() const {
    return FLensDistortionState{};
}

EDistortionSource ULensComponent::GetDistortionSource() const {
    return EDistortionSource::LensFile;
}

FCameraFilmbackSettings ULensComponent::GetCroppedFilmback() const {
    return FCameraFilmbackSettings{};
}

void ULensComponent::ClearDistortionState() {
}

void ULensComponent::ApplyNodalOffset(USceneComponent* ComponentToOffset, bool bUseManualInputs, float ManualFocusInput, float ManualZoomInput) {
}


