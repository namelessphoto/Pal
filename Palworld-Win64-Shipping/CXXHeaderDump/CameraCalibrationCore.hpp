#ifndef UE4SS_SDK_CameraCalibrationCore_HPP
#define UE4SS_SDK_CameraCalibrationCore_HPP

#include "CameraCalibrationCore_enums.hpp"

struct FBaseFocusPoint
{
};

struct FBaseLensTable
{
    TWeakObjectPtr<class ULensFile> LensFile;

};

struct FCalibratedMapFormat
{
    ECalibratedMapPixelOrigin PixelOrigin;
    ECalibratedMapChannels UndistortionChannels;
    ECalibratedMapChannels DistortionChannels;

};

struct FDataTablePointInfoBase
{
    float Focus;
    float Zoom;

};

struct FDerivedDistortionData
{
    FDistortionData DistortionData;
    class UTextureRenderTarget2D* UndistortionDisplacementMap;
    class UTextureRenderTarget2D* DistortionDisplacementMap;

};

struct FDistortionData
{
    TArray<FVector2D> DistortedUVs;
    float OverscanFactor;

};

struct FDistortionFocusPoint : public FBaseFocusPoint
{
    float Focus;
    FRichCurve MapBlendingCurve;
    TArray<FDistortionZoomPoint> ZoomPoints;

};

struct FDistortionHandlerPicker
{
    class UCineCameraComponent* TargetCameraComponent;
    FGuid DistortionProducerID;
    FString HandlerDisplayName;

};

struct FDistortionInfo
{
    TArray<float> Parameters;

};

struct FDistortionPointInfo : public FDataTablePointInfoBase
{
    FDistortionInfo DistortionInfo;

};

struct FDistortionTable : public FBaseLensTable
{
    TArray<FDistortionFocusPoint> FocusPoints;

};

struct FDistortionZoomPoint
{
    float Zoom;
    FDistortionInfo DistortionInfo;

};

struct FEncodersTable
{
    FRichCurve Focus;
    FRichCurve Iris;

};

struct FFocalLengthFocusPoint : public FBaseFocusPoint
{
    float Focus;
    FRichCurve Fx;
    FRichCurve Fy;
    TArray<FFocalLengthZoomPoint> ZoomPoints;

};

struct FFocalLengthInfo
{
    FVector2D FxFy;

};

struct FFocalLengthPointInfo : public FDataTablePointInfoBase
{
    FFocalLengthInfo FocalLengthInfo;

};

struct FFocalLengthTable : public FBaseLensTable
{
    TArray<FFocalLengthFocusPoint> FocusPoints;

};

struct FFocalLengthZoomPoint
{
    float Zoom;
    FFocalLengthInfo FocalLengthInfo;
    bool bIsCalibrationPoint;

};

struct FImageCenterFocusPoint : public FBaseFocusPoint
{
    float Focus;
    FRichCurve Cx;
    FRichCurve Cy;

};

struct FImageCenterInfo
{
    FVector2D PrincipalPoint;

};

struct FImageCenterPointInfo : public FDataTablePointInfoBase
{
    FImageCenterInfo ImageCenterInfo;

};

struct FImageCenterTable : public FBaseLensTable
{
    TArray<FImageCenterFocusPoint> FocusPoints;

};

struct FLensDataCategoryEditorColor
{
    FColor Focus;
    FColor Iris;
    FColor Zoom;
    FColor Distortion;
    FColor ImageCenter;
    FColor STMap;
    FColor NodalOffset;

};

struct FLensDistortionState
{
    FDistortionInfo DistortionInfo;
    FFocalLengthInfo FocalLengthInfo;
    FImageCenterInfo ImageCenter;

};

struct FLensFileEvaluationInputs
{
    float Focus;
    float Iris;
    float Zoom;
    FCameraFilmbackSettings Filmback;
    bool bIsValid;

};

struct FLensFilePicker
{
    bool bUseDefaultLensFile;
    class ULensFile* LensFile;

};

struct FLensInfo
{
    FString LensModelName;
    FString LensSerialNumber;
    TSubclassOf<class ULensModel> LensModel;
    FVector2D SensorDimensions;
    FIntPoint ImageDimensions;

};

struct FNodalOffsetFocusPoint : public FBaseFocusPoint
{
    float Focus;
    FRichCurve LocationOffset;
    FRichCurve RotationOffset;

};

struct FNodalOffsetPointInfo : public FDataTablePointInfoBase
{
    FNodalPointOffset NodalPointOffset;

};

struct FNodalOffsetTable : public FBaseLensTable
{
    TArray<FNodalOffsetFocusPoint> FocusPoints;

};

struct FNodalPointOffset
{
    FVector LocationOffset;
    FQuat RotationOffset;

};

struct FSTMapFocusPoint : public FBaseFocusPoint
{
    float Focus;
    FRichCurve MapBlendingCurve;
    TArray<FSTMapZoomPoint> ZoomPoints;

};

struct FSTMapInfo
{
    class UTexture* DistortionMap;
    FCalibratedMapFormat MapFormat;

};

struct FSTMapPointInfo : public FDataTablePointInfoBase
{
    FSTMapInfo STMapInfo;

};

struct FSTMapTable : public FBaseLensTable
{
    TArray<FSTMapFocusPoint> FocusPoints;

};

struct FSTMapZoomPoint
{
    float Zoom;
    FSTMapInfo STMapInfo;
    FDerivedDistortionData DerivedDistortionData;
    bool bIsCalibrationPoint;

};

struct FSphericalDistortionParameters
{
    float K1;
    float K2;
    float K3;
    float P1;
    float P2;

};

class ACameraCalibrationCheckerboard : public AActor
{
    class USceneComponent* Root;
    class UCalibrationPointComponent* TopLeft;
    class UCalibrationPointComponent* TopRight;
    class UCalibrationPointComponent* BottomLeft;
    class UCalibrationPointComponent* BottomRight;
    class UCalibrationPointComponent* Center;
    int32 NumCornerRows;
    int32 NumCornerCols;
    float SquareSideLength;
    float Thickness;
    class UStaticMesh* CubeMesh;
    class UMaterialInterface* OddCubeMaterial;
    class UMaterialInterface* EvenCubeMaterial;

    void Rebuild();
};

class UCalibrationPointComponent : public UProceduralMeshComponent
{
    TMap<class FString, class FVector> SubPoints;
    bool bVisualizePointsInEditor;
    float PointVisualizationScale;
    TEnumAsByte<ECalibrationPointVisualization> VisualizationShape;

    void RebuildVertices();
    bool NamespacedSubpointName(FString InSubpointName, FString& OutNamespacedName);
    bool GetWorldLocation(FString InPointName, FVector& OutLocation);
    void GetNamespacedPointNames(TArray<FString>& OutNamespacedNames);
};

class UCameraCalibrationEditorSettings : public UDeveloperSettings
{
};

class UCameraCalibrationSettings : public UDeveloperSettings
{
    TSoftObjectPtr<ULensFile> StartupLensFile;
    FIntPoint DisplacementMapResolution;
    float CalibrationInputTolerance;
    TMap<class TSubclassOf<ULensDistortionModelHandlerBase>, class TSoftObjectPtr<UMaterialInterface>> DefaultUndistortionDisplacementMaterials;
    TMap<class TSubclassOf<ULensDistortionModelHandlerBase>, class TSoftObjectPtr<UMaterialInterface>> DefaultDistortionDisplacementMaterials;
    TMap<class TSubclassOf<ULensDistortionModelHandlerBase>, class TSoftObjectPtr<UMaterialInterface>> DefaultDistortionMaterials;
    bool bEnableCalibrationDatasetImportExport;

};

class UCameraCalibrationStep : public UObject
{
};

class UCameraCalibrationSubsystem : public UEngineSubsystem
{
    class ULensFile* DefaultLensFile;
    TMap<class FName, class TSubclassOf<ULensModel>> LensModelMap;
    TMap<class FName, class TSubclassOf<UCameraNodalOffsetAlgo>> CameraNodalOffsetAlgosMap;
    TMap<class FName, class TSubclassOf<UCameraImageCenterAlgo>> CameraImageCenterAlgosMap;
    TMap<class FName, class TSubclassOf<UCameraCalibrationStep>> CameraCalibrationStepsMap;

    void UnregisterDistortionModelHandler(class UCineCameraComponent* Component, class ULensDistortionModelHandlerBase* Handler);
    void SetDefaultLensFile(class ULensFile* NewDefaultLensFile);
    TSubclassOf<class ULensModel> GetRegisteredLensModel(FName ModelName);
    TArray<FName> GetOverlayMaterialNames();
    class UMaterialInterface* GetOverlayMaterial(const FName& OverlayName);
    class ULensFile* GetLensFile(const FLensFilePicker& Picker);
    TArray<class ULensDistortionModelHandlerBase*> GetDistortionModelHandlers(class UCineCameraComponent* Component);
    class ULensFile* GetDefaultLensFile();
    TArray<FName> GetCameraNodalOffsetAlgos();
    TSubclassOf<class UCameraNodalOffsetAlgo> GetCameraNodalOffsetAlgo(FName Name);
    TArray<FName> GetCameraImageCenterAlgos();
    TSubclassOf<class UCameraImageCenterAlgo> GetCameraImageCenterAlgo(FName Name);
    TArray<FName> GetCameraCalibrationSteps();
    TSubclassOf<class UCameraCalibrationStep> GetCameraCalibrationStep(FName Name);
    class ULensDistortionModelHandlerBase* FindOrCreateDistortionModelHandler(FDistortionHandlerPicker& DistortionHandlerPicker, const TSubclassOf<class ULensModel> LensModelClass);
    class ULensDistortionModelHandlerBase* FindDistortionModelHandler(FDistortionHandlerPicker& DistortionHandlerPicker, bool bUpdatePicker);
};

class UCameraImageCenterAlgo : public UObject
{
};

class UCameraLensDistortionAlgo : public UObject
{
};

class UCameraNodalOffsetAlgo : public UObject
{
};

class ULensComponent : public UActorComponent
{
    FLensFilePicker LensFilePicker;
    EFIZEvaluationMode EvaluationMode;
    FComponentReference TargetCameraComponent;
    FLensFileEvaluationInputs EvalInputs;
    EDistortionSource DistortionStateSource;
    bool bApplyDistortion;
    TSubclassOf<class ULensModel> LensModel;
    FLensDistortionState DistortionState;
    bool bScaleOverscan;
    float OverscanMultiplier;
    EFilmbackOverrideSource FilmbackOverride;
    FCameraFilmbackSettings CroppedFilmback;
    bool bApplyNodalOffsetOnTick;
    FTransform OriginalTrackedComponentTransform;
    bool bIsDistortionSetup;
    float OriginalFocalLength;
    class UMaterialInstanceDynamic* LastDistortionMID;
    class UCineCameraComponent* LastCameraComponent;
    TMap<class TSubclassOf<ULensModel>, class ULensDistortionModelHandlerBase*> LensDistortionHandlerMap;
    TWeakObjectPtr<class USceneComponent> TrackedComponent;
    FString TrackedComponentName;

    bool WasNodalOffsetAppliedThisTick();
    bool WasDistortionEvaluated();
    bool ShouldApplyNodalOffsetOnTick();
    bool ShouldApplyDistortion();
    void SetOverscanMultiplier(float Multiplier);
    void SetLensModel(TSubclassOf<class ULensModel> Model);
    void SetLensFilePicker(FLensFilePicker LensFile);
    void SetLensFile(class ULensFile* LensFile);
    void SetFIZEvaluationMode(EFIZEvaluationMode Mode);
    void SetFilmbackOverrideSetting(EFilmbackOverrideSource Setting);
    void SetDistortionState(FLensDistortionState State);
    void SetDistortionSource(EDistortionSource Source);
    void SetCroppedFilmback(FCameraFilmbackSettings Filmback);
    void SetApplyNodalOffsetOnTick(bool bApplyNodalOffset);
    void SetApplyDistortion(bool bApply);
    float GetOverscanMultiplier();
    float GetOriginalFocalLength();
    TSubclassOf<class ULensModel> GetLensModel();
    FLensFilePicker GetLensFilePicker();
    FLensFileEvaluationInputs GetLensFileEvaluationInputs();
    class ULensFile* GetLensFile();
    EFIZEvaluationMode GetFIZEvaluationMode();
    EFilmbackOverrideSource GetFilmbackOverrideSetting();
    FLensDistortionState GetDistortionState();
    EDistortionSource GetDistortionSource();
    FCameraFilmbackSettings GetCroppedFilmback();
    void ClearDistortionState();
    void ApplyNodalOffset(class USceneComponent* ComponentToOffset, bool bUseManualInputs, float ManualFocusInput, float ManualZoomInput);
};

class ULensDistortionModelHandlerBase : public UObject
{
    TSubclassOf<class ULensModel> LensModelClass;
    class UMaterialInstanceDynamic* DistortionPostProcessMID;
    FLensDistortionState CurrentState;
    FString DisplayName;
    float OverscanFactor;
    class UMaterialInstanceDynamic* UndistortionDisplacementMapMID;
    class UMaterialInstanceDynamic* DistortionDisplacementMapMID;
    class UTextureRenderTarget2D* UndistortionDisplacementMapRT;
    class UTextureRenderTarget2D* DistortionDisplacementMapRT;
    FGuid DistortionProducerID;

    void SetDistortionState(const FLensDistortionState& InNewState);
    bool IsModelSupported(const TSubclassOf<class ULensModel>& ModelToSupport);
    class UTextureRenderTarget2D* GetUndistortionDisplacementMap();
    class UTextureRenderTarget2D* GetDistortionDisplacementMap();
};

class ULensFile : public UObject
{
    FLensInfo LensInfo;
    ELensDataMode DataMode;
    TMap<class FString, class FString> UserMetadata;
    FEncodersTable EncodersTable;
    FDistortionTable DistortionTable;
    FFocalLengthTable FocalLengthTable;
    FImageCenterTable ImageCenterTable;
    FNodalOffsetTable NodalOffsetTable;
    FSTMapTable STMapTable;
    TArray<class UTextureRenderTarget2D*> UndistortionDisplacementMapHolders;
    TArray<class UTextureRenderTarget2D*> DistortionDisplacementMapHolders;

    void RemoveZoomPoint(ELensDataCategory InDataCategory, float InFocus, float InZoom);
    void RemoveFocusPoint(ELensDataCategory InDataCategory, float InFocus);
    bool HasSamples(ELensDataCategory InDataCategory);
    bool HasIrisEncoderMapping();
    bool HasFocusEncoderMapping();
    int32 GetTotalPointNum(ELensDataCategory InDataCategory);
    TArray<FSTMapPointInfo> GetSTMapPoints();
    bool GetSTMapPoint(float InFocus, float InZoom, FSTMapInfo& OutSTMapInfo);
    TArray<FNodalOffsetPointInfo> GetNodalOffsetPoints();
    bool GetNodalOffsetPoint(float InFocus, float InZoom, FNodalPointOffset& OutNodalPointOffset);
    TArray<FImageCenterPointInfo> GetImageCenterPoints();
    bool GetImageCenterPoint(float InFocus, float InZoom, FImageCenterInfo& OutImageCenterInfo);
    TArray<FFocalLengthPointInfo> GetFocalLengthPoints();
    bool GetFocalLengthPoint(float InFocus, float InZoom, FFocalLengthInfo& OutFocalLengthInfo);
    TArray<FDistortionPointInfo> GetDistortionPoints();
    bool GetDistortionPoint(float InFocus, float InZoom, FDistortionInfo& OutDistortionInfo);
    float EvaluateNormalizedIris(float InNormalizedValue);
    float EvaluateNormalizedFocus(float InNormalizedValue);
    bool EvaluateNodalPointOffset(float InFocus, float InZoom, FNodalPointOffset& OutEvaluatedValue);
    bool EvaluateImageCenterParameters(float InFocus, float InZoom, FImageCenterInfo& OutEvaluatedValue);
    bool EvaluateFocalLength(float InFocus, float InZoom, FFocalLengthInfo& OutEvaluatedValue);
    bool EvaluateDistortionParameters(float InFocus, float InZoom, FDistortionInfo& OutEvaluatedValue);
    bool EvaluateDistortionData(float InFocus, float InZoom, FVector2D InFilmback, class ULensDistortionModelHandlerBase* InLensHandler);
    void ClearData(ELensDataCategory InDataCategory);
    void ClearAll();
    void AddSTMapPoint(float NewFocus, float NewZoom, const FSTMapInfo& NewPoint);
    void AddNodalOffsetPoint(float NewFocus, float NewZoom, const FNodalPointOffset& NewPoint);
    void AddImageCenterPoint(float NewFocus, float NewZoom, const FImageCenterInfo& NewPoint);
    void AddFocalLengthPoint(float NewFocus, float NewZoom, const FFocalLengthInfo& NewFocalLength);
    void AddDistortionPoint(float NewFocus, float NewZoom, const FDistortionInfo& NewPoint, const FFocalLengthInfo& NewFocalLength);
};

class ULensModel : public UObject
{
};

class USphericalLensDistortionModelHandler : public ULensDistortionModelHandlerBase
{
};

class USphericalLensModel : public ULensModel
{
};

#endif
