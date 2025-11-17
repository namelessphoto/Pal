#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "DistortionHandlerPicker.h"
#include "LensFilePicker.h"
#include "Templates/SubclassOf.h"
#include "CameraCalibrationSubsystem.generated.h"

class UCameraCalibrationStep;
class UCameraImageCenterAlgo;
class UCameraNodalOffsetAlgo;
class UCineCameraComponent;
class ULensDistortionModelHandlerBase;
class ULensFile;
class ULensModel;
class UMaterialInterface;

UCLASS(BlueprintType)
class CAMERACALIBRATIONCORE_API UCameraCalibrationSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ULensFile* DefaultLensFile;
    
    UPROPERTY(Transient)
    TMap<FName, TSubclassOf<ULensModel>> LensModelMap;
    
    UPROPERTY(Transient)
    TMap<FName, TSubclassOf<UCameraNodalOffsetAlgo>> CameraNodalOffsetAlgosMap;
    
    UPROPERTY(Transient)
    TMap<FName, TSubclassOf<UCameraImageCenterAlgo>> CameraImageCenterAlgosMap;
    
    UPROPERTY(Transient)
    TMap<FName, TSubclassOf<UCameraCalibrationStep>> CameraCalibrationStepsMap;
    
public:
    UCameraCalibrationSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnregisterDistortionModelHandler(UCineCameraComponent* Component, ULensDistortionModelHandlerBase* Handler);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultLensFile(ULensFile* NewDefaultLensFile);
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<ULensModel> GetRegisteredLensModel(FName ModelName) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetOverlayMaterialNames() const;
    
    UFUNCTION(BlueprintPure)
    UMaterialInterface* GetOverlayMaterial(const FName& OverlayName) const;
    
    UFUNCTION(BlueprintPure)
    ULensFile* GetLensFile(const FLensFilePicker& Picker) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<ULensDistortionModelHandlerBase*> GetDistortionModelHandlers(UCineCameraComponent* Component);
    
    UFUNCTION(BlueprintPure)
    ULensFile* GetDefaultLensFile() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetCameraNodalOffsetAlgos() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UCameraNodalOffsetAlgo> GetCameraNodalOffsetAlgo(FName Name) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetCameraImageCenterAlgos() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UCameraImageCenterAlgo> GetCameraImageCenterAlgo(FName Name) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetCameraCalibrationSteps() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UCameraCalibrationStep> GetCameraCalibrationStep(FName Name) const;
    
    UFUNCTION(BlueprintCallable)
    ULensDistortionModelHandlerBase* FindOrCreateDistortionModelHandler(UPARAM(Ref) FDistortionHandlerPicker& DistortionHandlerPicker, const TSubclassOf<ULensModel> LensModelClass);
    
    UFUNCTION(BlueprintPure)
    ULensDistortionModelHandlerBase* FindDistortionModelHandler(UPARAM(Ref) FDistortionHandlerPicker& DistortionHandlerPicker, bool bUpdatePicker) const;
    
};

