#include "CameraCalibrationSubsystem.h"
#include "Templates/SubclassOf.h"

UCameraCalibrationSubsystem::UCameraCalibrationSubsystem() {
    this->DefaultLensFile = NULL;
}

void UCameraCalibrationSubsystem::UnregisterDistortionModelHandler(UCineCameraComponent* Component, ULensDistortionModelHandlerBase* Handler) {
}

void UCameraCalibrationSubsystem::SetDefaultLensFile(ULensFile* NewDefaultLensFile) {
}

TSubclassOf<ULensModel> UCameraCalibrationSubsystem::GetRegisteredLensModel(FName ModelName) const {
    return NULL;
}

TArray<FName> UCameraCalibrationSubsystem::GetOverlayMaterialNames() const {
    return TArray<FName>();
}

UMaterialInterface* UCameraCalibrationSubsystem::GetOverlayMaterial(const FName& OverlayName) const {
    return NULL;
}

ULensFile* UCameraCalibrationSubsystem::GetLensFile(const FLensFilePicker& Picker) const {
    return NULL;
}

TArray<ULensDistortionModelHandlerBase*> UCameraCalibrationSubsystem::GetDistortionModelHandlers(UCineCameraComponent* Component) {
    return TArray<ULensDistortionModelHandlerBase*>();
}

ULensFile* UCameraCalibrationSubsystem::GetDefaultLensFile() const {
    return NULL;
}

TArray<FName> UCameraCalibrationSubsystem::GetCameraNodalOffsetAlgos() const {
    return TArray<FName>();
}

TSubclassOf<UCameraNodalOffsetAlgo> UCameraCalibrationSubsystem::GetCameraNodalOffsetAlgo(FName Name) const {
    return NULL;
}

TArray<FName> UCameraCalibrationSubsystem::GetCameraImageCenterAlgos() const {
    return TArray<FName>();
}

TSubclassOf<UCameraImageCenterAlgo> UCameraCalibrationSubsystem::GetCameraImageCenterAlgo(FName Name) const {
    return NULL;
}

TArray<FName> UCameraCalibrationSubsystem::GetCameraCalibrationSteps() const {
    return TArray<FName>();
}

TSubclassOf<UCameraCalibrationStep> UCameraCalibrationSubsystem::GetCameraCalibrationStep(FName Name) const {
    return NULL;
}

ULensDistortionModelHandlerBase* UCameraCalibrationSubsystem::FindOrCreateDistortionModelHandler(FDistortionHandlerPicker& DistortionHandlerPicker, const TSubclassOf<ULensModel> LensModelClass) {
    return NULL;
}

ULensDistortionModelHandlerBase* UCameraCalibrationSubsystem::FindDistortionModelHandler(FDistortionHandlerPicker& DistortionHandlerPicker, bool bUpdatePicker) const {
    return NULL;
}


