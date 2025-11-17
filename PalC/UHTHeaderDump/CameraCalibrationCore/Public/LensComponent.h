#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CameraFilmbackSettings -FallbackName=CameraFilmbackSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
#include "EDistortionSource.h"
#include "EFIZEvaluationMode.h"
#include "EFilmbackOverrideSource.h"
#include "LensDistortionState.h"
#include "LensFileEvaluationInputs.h"
#include "LensFilePicker.h"
#include "Templates/SubclassOf.h"
#include "LensComponent.generated.h"

class UCineCameraComponent;
class ULensDistortionModelHandlerBase;
class ULensFile;
class ULensModel;
class UMaterialInstanceDynamic;
class USceneComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CAMERACALIBRATIONCORE_API ULensComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FLensFilePicker LensFilePicker;
    
    UPROPERTY(EditAnywhere)
    EFIZEvaluationMode EvaluationMode;
    
    UPROPERTY(AdvancedDisplay, EditInstanceOnly)
    FComponentReference TargetCameraComponent;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    FLensFileEvaluationInputs EvalInputs;
    
    UPROPERTY(EditAnywhere)
    EDistortionSource DistortionStateSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bApplyDistortion;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ULensModel> LensModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLensDistortionState DistortionState;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite)
    bool bScaleOverscan;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float OverscanMultiplier;
    
    UPROPERTY(EditAnywhere)
    EFilmbackOverrideSource FilmbackOverride;
    
    UPROPERTY(EditAnywhere)
    FCameraFilmbackSettings CroppedFilmback;
    
    UPROPERTY(EditAnywhere)
    bool bApplyNodalOffsetOnTick;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Interp, VisibleAnywhere)
    FTransform OriginalTrackedComponentTransform;
    
    UPROPERTY()
    bool bIsDistortionSetup;
    
    UPROPERTY()
    float OriginalFocalLength;
    
    UPROPERTY()
    UMaterialInstanceDynamic* LastDistortionMID;
    
    UPROPERTY(Instanced)
    UCineCameraComponent* LastCameraComponent;
    
    UPROPERTY(Transient)
    TMap<TSubclassOf<ULensModel>, ULensDistortionModelHandlerBase*> LensDistortionHandlerMap;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<USceneComponent> TrackedComponent;
    
    UPROPERTY()
    FString TrackedComponentName;
    
public:
    ULensComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool WasNodalOffsetAppliedThisTick() const;
    
    UFUNCTION(BlueprintPure)
    bool WasDistortionEvaluated() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldApplyNodalOffsetOnTick() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldApplyDistortion() const;
    
    UFUNCTION(BlueprintCallable)
    void SetOverscanMultiplier(float Multiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetLensModel(TSubclassOf<ULensModel> Model);
    
    UFUNCTION(BlueprintCallable)
    void SetLensFilePicker(FLensFilePicker LensFile);
    
    UFUNCTION(BlueprintCallable)
    void SetLensFile(ULensFile* LensFile);
    
    UFUNCTION(BlueprintCallable)
    void SetFIZEvaluationMode(EFIZEvaluationMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetFilmbackOverrideSetting(EFilmbackOverrideSource Setting);
    
    UFUNCTION(BlueprintCallable)
    void SetDistortionState(FLensDistortionState State);
    
    UFUNCTION(BlueprintCallable)
    void SetDistortionSource(EDistortionSource Source);
    
    UFUNCTION(BlueprintCallable)
    void SetCroppedFilmback(FCameraFilmbackSettings Filmback);
    
    UFUNCTION(BlueprintCallable)
    void SetApplyNodalOffsetOnTick(bool bApplyNodalOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetApplyDistortion(bool bApply);
    
    UFUNCTION(BlueprintPure)
    float GetOverscanMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetOriginalFocalLength() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<ULensModel> GetLensModel() const;
    
    UFUNCTION(BlueprintPure)
    FLensFilePicker GetLensFilePicker() const;
    
    UFUNCTION(BlueprintPure)
    FLensFileEvaluationInputs GetLensFileEvaluationInputs() const;
    
    UFUNCTION(BlueprintPure)
    ULensFile* GetLensFile() const;
    
    UFUNCTION(BlueprintPure)
    EFIZEvaluationMode GetFIZEvaluationMode() const;
    
    UFUNCTION(BlueprintPure)
    EFilmbackOverrideSource GetFilmbackOverrideSetting() const;
    
    UFUNCTION(BlueprintPure)
    FLensDistortionState GetDistortionState() const;
    
    UFUNCTION(BlueprintPure)
    EDistortionSource GetDistortionSource() const;
    
    UFUNCTION(BlueprintPure)
    FCameraFilmbackSettings GetCroppedFilmback() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearDistortionState();
    
    UFUNCTION(BlueprintCallable)
    void ApplyNodalOffset(USceneComponent* ComponentToOffset, bool bUseManualInputs, float ManualFocusInput, float ManualZoomInput);
    
};

