#ifndef UE4SS_SDK_Composure_HPP
#define UE4SS_SDK_Composure_HPP

#include "Composure_enums.hpp"

struct FCompositingMaterial : public FCompositingParamPayload
{
    class UMaterialInterface* Material;
    TMap<class FName, class FName> ParamPassMappings;
    TMap<class FName, class FNamedCompMaterialParam> RequiredMaterialParams;
    class UMaterialInstanceDynamic* CachedMID;

};

struct FCompositingParamPayload
{
    TMap<FName, float> ScalarParamOverrides;
    TMap<class FName, class FLinearColor> VectorParamOverrides;
    TMap<class FName, class UTexture*> TextureParamOverrides;

};

struct FComposurePostMoveSettings
{
    FVector2D Pivot;
    FVector2D Translation;
    float RotationAngle;
    float Scale;

};

struct FComposureUVMapSettings
{
    FMatrix PreUVDisplacementMatrix;
    FMatrix PostUVDisplacementMatrix;
    FVector2D DisplacementDecodeParameters;
    class UTexture* DisplacementTexture;
    uint8 bUseDisplacementBlueAndAlphaChannels;

};

struct FMovieSceneComposureExportPass
{
    FName TransformPassName;
    bool bRenamePass;
    FName ExportedAs;

};

struct FMovieSceneComposureExportSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneComposureExportPass Pass;

};

struct FMovieSceneComposurePostMoveSettingsSectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneFloatChannel Pivot;
    FMovieSceneFloatChannel Translation;
    FMovieSceneFloatChannel RotationAngle;
    FMovieSceneFloatChannel Scale;
    EMovieSceneBlendType BlendType;

};

struct FNamedCompMaterialParam
{
    FName ParamName;

};

class ACompositingCaptureBase : public ACompositingElement
{
    class USceneCaptureComponent2D* SceneCaptureComponent2D;
    bool bApplyDistortion;
    FComponentReference LensComponentPicker;
    float OverscanFactor;
    float OriginalFocalLength;
    class UMaterialInstanceDynamic* LastDistortionMID;

    void UpdateDistortion();
};

class ACompositingElement : public AComposurePipelineBaseActor
{
    class UComposureCompositingTargetComponent* CompositingTarget;
    class UComposurePostProcessingPassProxy* PostProcessProxy;
    TArray<class UCompositingElementInput*> Inputs;
    TArray<class UCompositingElementTransform*> TransformPasses;
    TArray<class UCompositingElementOutput*> Outputs;
    ESceneCameraLinkType CameraSource;
    TLazyObjectPtr<class ACameraActor> TargetCameraActor;
    EInheritedSourceType ResolutionSource;
    FIntPoint RenderResolution;
    TEnumAsByte<ETextureRenderTargetFormat> RenderFormat;
    bool bUseSharedTargetPool;
    int32 FreezeFrameMask;
    FCompositingElementOnTransformPassRendered_BP OnTransformPassRendered_BP;
    void DynamicOnTransformPassRendered(class ACompositingElement* CompElement, class UTexture* Texture, FName PassName);
    FCompositingElementOnFinalPassRendered_BP OnFinalPassRendered_BP;
    void DynamicOnFinalPassRendered(class ACompositingElement* CompElement, class UTexture* Texture);
    FName CompShotIdName;
    class ACompositingElement* Parent;
    TArray<class ACompositingElement*> ChildLayers;
    float OutputOpacity;
    TMap<class UCompositingElementInput*, class ECompPassConstructionType> UserConstructedInputs;
    TMap<class UCompositingElementTransform*, class ECompPassConstructionType> UserConstructedTransforms;
    TMap<class UCompositingElementOutput*, class ECompPassConstructionType> UserConstructedOutputs;
    TArray<class UCompositingElementInput*> InternalInputs;
    TArray<class UCompositingElementTransform*> InternalTransformPasses;
    TArray<class UCompositingElementOutput*> InternalOutputs;
    class UAlphaTransformPass* InternalAlphaPass;

    void SetTargetCamera(class ACameraActor* NewCameraActor);
    void SetRenderResolution(FIntPoint NewResolution);
    void SetOpacity(const float NewOpacity);
    void SetElementName(const FName NewName);
    void SetEditorColorPickingTarget(class UTextureRenderTarget2D* PickingTarget);
    void SetEditorColorPickerDisplayImage(class UTexture* PickerDisplayImage);
    class UTextureRenderTarget2D* RequestNamedRenderTarget(const FName ReferenceName, const float RenderPercentage, ETargetUsageFlags UsageTag);
    class UTextureRenderTarget2D* RenderCompositingMaterialToTarget(FCompositingMaterial& CompMaterial, class UTextureRenderTarget2D* RenderTarget, FName ResultLookupName);
    class UTexture* RenderCompositingMaterial(FCompositingMaterial& CompMaterial, float RenderScale, FName ResultLookupName, ETargetUsageFlags UsageTag);
    class UTexture* RenderCompElement(bool bCameraCutThisFrame);
    bool ReleaseOwnedTarget(class UTextureRenderTarget2D* OwnedTarget);
    void RegisterPassResult(FName ReferenceName, class UTexture* PassResult, bool bSetAsLatestRenderResult);
    bool IsSubElement();
    TArray<class UCompositingElementTransform*> GetTransformsList();
    FIntPoint GetRenderResolution();
    int32 GetRenderPriority();
    TArray<class UCompositingElementOutput*> GetOutputsList();
    float GetOpacity();
    class UTexture* GetLatestRenderResult();
    TArray<class UCompositingElementInput*> GetInputsList();
    class ACompositingElement* GetElementParent();
    FName GetCompElementName();
    TArray<class ACompositingElement*> GetChildElements();
    class UCompositingElementTransform* FindTransformPass(TSubclassOf<class UCompositingElementTransform> TransformType, class UTexture*& PassResult, FName OptionalPassName);
    class ACameraActor* FindTargetCamera();
    class UCompositingElementOutput* FindOutputPass(TSubclassOf<class UCompositingElementOutput> OutputType, FName OptionalPassName);
    class UTexture* FindNamedRenderResult(FName PassName, bool bSearchSubElements);
    class UCompositingElementInput* FindInputPass(TSubclassOf<class UCompositingElementInput> InputType, class UTexture*& PassResult, FName OptionalPassName);
    bool DeletePass(class UCompositingElementPass* PassToDelete);
    class UCompositingElementTransform* CreateNewTransformPass(FName PassName, TSubclassOf<class UCompositingElementTransform> TransformType);
    class UCompositingElementOutput* CreateNewOutputPass(FName PassName, TSubclassOf<class UCompositingElementOutput> OutputType);
    class UCompositingElementInput* CreateNewInputPass(FName PassName, TSubclassOf<class UCompositingElementInput> InputType);
    class UCompositingElementTransform* AddNewTransformPass(FName PassName, TSubclassOf<class UCompositingElementTransform> TransformType);
    class UCompositingElementOutput* AddNewOutputPass(FName PassName, TSubclassOf<class UCompositingElementOutput> OutputType);
    class UCompositingElementInput* AddNewInputPass(FName PassName, TSubclassOf<class UCompositingElementInput> InputType);
};

class AComposurePipelineBaseActor : public AActor
{
    bool bAutoRun;
    bool bAutoRunChildElementsAndSelf;

    void SetAutoRunChildrenAndSelf(bool bAutoRunChildAndSelf);
    void SetAutoRun(bool bNewAutoRunVal);
    bool IsActivelyRunning();
    void EnqueueRendering(bool bCameraCutThisFrame);
    bool AreChildrenAndSelfAutoRun();
};

class ICompEditorImagePreviewInterface : public IInterface
{
};

class ICompImageColorPickerInterface : public ICompEditorImagePreviewInterface
{
};

class ICompositingInputInterface : public IInterface
{

    void OnFrameEnd(class UCompositingInputInterfaceProxy* Proxy);
    void OnFrameBegin(class UCompositingInputInterfaceProxy* Proxy, bool bCameraCutThisFrame);
    class UTexture* GenerateInput(class UCompositingInputInterfaceProxy* Proxy);
};

class ICompositingTextureLookupTable : public IInterface
{

    bool FindNamedPassResult(FName LookupName, class UTexture*& OutTexture);
};

class IComposurePlayerCompositingInterface : public IInterface
{
};

class IMovieSceneComposureExportClient : public IInterface
{

    void InitializeForExport(class UMovieSceneComposureExportInitializer* ExportInitializer);
};

class UAlphaTransformPass : public UCompositingElementTransform
{
    float AlphaScale;
    class UMaterialInterface* DefaultMaterial;
    class UMaterialInstanceDynamic* AlphaTransformMID;

};

class UColorConverterOutputPass : public UCompositingElementOutput
{
    class UCompositingElementTransform* ColorConverter;
    TSubclassOf<class UCompositingElementTransform> DefaultConverterClass;

};

class UCompositingElementInput : public UCompositingElementPass
{
    bool bIntermediate;

    class UTexture* GenerateInput();
};

class UCompositingElementMaterialPass : public UCompositingPostProcessPass
{
    FCompositingMaterial Material;

    bool SetParameterMapping(FName TextureParamName, FName ComposureLayerName);
    void SetMaterialInterface(class UMaterialInterface* NewMaterial);
    void ApplyMaterialParams(class UMaterialInstanceDynamic* Mid);
};

class UCompositingElementOutput : public UCompositingElementPass
{

    void RelayOutput(class UTexture* FinalResult, class UComposurePostProcessingPassProxy* PostProcessProxy);
};

class UCompositingElementPass : public UObject
{
    bool bEnabled;
    FName PassName;

    void SetPassEnabled(bool bSetEnabledTo);
    void Reset();
    class UTextureRenderTarget2D* RequestRenderTarget(FIntPoint Dimensions, TEnumAsByte<ETextureRenderTargetFormat> Format);
    class UTextureRenderTarget2D* RequestNativelyFormattedTarget(float RenderScale);
    bool ReleaseRenderTarget(class UTextureRenderTarget2D* AssignedTarget);
    void OnFrameEnd();
    void OnFrameBegin(bool bCameraCutThisFrame);
    void OnEnabled();
    void OnDisabled();
    bool IsPassEnabled();
};

class UCompositingElementTransform : public UCompositingElementPass
{
    bool bIntermediate;

    class UTexture* FindNamedPrePassResult(FName PassLookupName);
    class UTexture* ApplyTransform(class UTexture* Input, class UComposurePostProcessingPassProxy* PostProcessProxy, class ACameraActor* TargetCamera);
};

class UCompositingInputInterfaceProxy : public UCompositingElementInput
{
    TScriptInterface<class ICompositingInputInterface> CompositingInput;

};

class UCompositingMediaCaptureOutput : public UColorConverterOutputPass
{
    class UMediaOutput* CaptureOutput;
    class UMediaCapture* ActiveCapture;

};

class UCompositingMediaInput : public UCompositingElementInput
{
    FCompositingMaterial MediaTransformMaterial;
    class UMaterialInterface* DefaultMaterial;
    class UMaterialInterface* DefaultTestPlateMaterial;
    class UMaterialInstanceDynamic* FallbackMID;

};

class UCompositingOpenColorIOPass : public UCompositingElementTransform
{
    FOpenColorIOColorConversionSettings ColorConversionSettings;

};

class UCompositingPickerAsyncTask : public UBlueprintAsyncActionBase
{
    FCompositingPickerAsyncTaskOnPick OnPick;
    void OnPixelPicked(const FVector2D& PickedUV, const FLinearColor& SampledColor);
    FCompositingPickerAsyncTaskOnCancel OnCancel;
    void OnPixelPicked(const FVector2D& PickedUV, const FLinearColor& SampledColor);
    FCompositingPickerAsyncTaskOnAccept OnAccept;
    void OnPixelPicked(const FVector2D& PickedUV, const FLinearColor& SampledColor);
    class UTextureRenderTarget2D* PickerTarget;
    class UTexture* PickerDisplayImage;

    class UCompositingPickerAsyncTask* OpenCompositingPicker(class UTextureRenderTarget2D* PickerTarget, class UTexture* DisplayImage, FText WindowTitle, const bool bAverageColorOnDrag, const bool bUseImplicitGamma);
};

class UCompositingPostProcessPass : public UCompositingElementTransform
{
    float RenderScale;
    TArray<class UComposurePostProcessPassPolicy*> PostProcessPasses;

};

class UCompositingTonemapPass : public UCompositingElementTransform
{
    FColorGradingSettings ColorGradingSettings;
    FFilmStockSettings FilmStockSettings;
    float ChromaticAberration;
    class UComposureTonemapperPassPolicy* TonemapPolicy;

};

class UComposureBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void SetUVMapSettingsToMaterialParameters(const FComposureUVMapSettings& UVMapSettings, class UMaterialInstanceDynamic* Material);
    void RequestRedrawComposureViewport();
    bool RenameComposureElement(const FName OriginalElementName, const FName NewElementName);
    void RefreshComposureElementList();
    bool IsComposureElementDrawing(class ACompositingElement* CompElement);
    void InvertUVDisplacementMapEncodingParameters(const FVector2D& In, FVector2D& Out);
    void GetRedGreenUVFactorsFromChromaticAberration(float ChromaticAberrationAmount, FVector2D& RedGreenUVFactors);
    void GetProjectionMatrixFromPostMoveSettings(const FComposurePostMoveSettings& PostMoveSettings, float HorizontalFOVAngle, float AspectRatio, FMatrix& ProjectionMatrix);
    void GetPlayerDisplayGamma(const class APlayerCameraManager* PlayerCameraManager, float& DisplayGamma);
    void GetCroppingUVTransformationMatrixFromPostMoveSettings(const FComposurePostMoveSettings& PostMoveSettings, float AspectRatio, FMatrix& CropingUVTransformationMatrix, FMatrix& UncropingUVTransformationMatrix);
    class ACompositingElement* GetComposureElement(const FName ElementName);
    void DeleteComposureElementAndChildren(const FName ElementToDelete);
    class UComposurePlayerCompositingTarget* CreatePlayerCompositingTarget(class UObject* WorldContextObject);
    class ACompositingElement* CreateComposureElement(const FName ElementName, TSubclassOf<class ACompositingElement> ClassType, class AActor* LevelContext);
    void CopyCameraSettingsToSceneCapture(class UCameraComponent* SrcCamera, class USceneCaptureComponent2D* DstCaptureComponent, float OriginalFocalLength, float OverscanFactor);
    bool AttachComposureElement(const FName ParentName, const FName ChildName);
};

class UComposureCompositingTargetComponent : public UActorComponent
{
    class UTexture* DisplayTexture;

    void SetDisplayTexture(class UTexture* DisplayTexture);
    class UTexture* GetDisplayTexture();
};

class UComposureGameSettings : public UObject
{
    FSoftObjectPath StaticVideoPlateDebugImage;
    bool bSceneCapWarnOfMissingCam;
    FSoftObjectPath FallbackCompositingTexture;
    class UTexture* FallbackCompositingTextureObj;

};

class UComposureLensBloomPass : public UComposurePostProcessPass
{
    FLensBloomSettings Settings;
    class UMaterialInstanceDynamic* TonemapperReplacingMID;

    void SetTonemapperReplacingMaterial(class UMaterialInstanceDynamic* Material);
    void BloomToRenderTarget();
};

class UComposureLensBloomPassPolicy : public UComposurePostProcessPassPolicy
{
    FLensBloomSettings Settings;
    class UMaterialInterface* ReplacementMaterial;
    FName BloomIntensityParamName;
    class UMaterialInstanceDynamic* TonemapperReplacmentMID;

};

class UComposurePlayerCompositingCameraModifier : public UCameraModifier
{
    TScriptInterface<class IComposurePlayerCompositingInterface> Target;

};

class UComposurePlayerCompositingTarget : public UObject
{
    class APlayerCameraManager* PlayerCameraManager;
    class UComposurePlayerCompositingCameraModifier* PlayerCameraModifier;
    class UMaterialInstanceDynamic* ReplaceTonemapperMID;

    void SetRenderTarget(class UTextureRenderTarget2D* RenderTarget);
    class APlayerCameraManager* SetPlayerCameraManager(class APlayerCameraManager* PlayerCameraManager);
    class APlayerCameraManager* GetPlayerCameraManager();
};

class UComposurePostProcessBlendable : public UObject
{
    class UComposurePostProcessPass* Target;

};

class UComposurePostProcessPass : public USceneComponent
{
    class USceneCaptureComponent2D* SceneCapture;
    class UComposurePostProcessBlendable* BlendableInterface;
    class UMaterialInterface* SetupMaterial;
    class UMaterialInterface* TonemapperReplacement;

    void SetSetupMaterial(class UMaterialInterface* Material);
    void SetOutputRenderTarget(class UTextureRenderTarget2D* RenderTarget);
    class UMaterialInterface* GetSetupMaterial();
    class UTextureRenderTarget2D* GetOutputRenderTarget();
};

class UComposurePostProcessPassPolicy : public UObject
{

    void SetupPostProcess(class USceneCaptureComponent2D* SceneCapture, class UMaterialInterface*& TonemapperOverride);
};

class UComposurePostProcessingPassProxy : public UComposurePostProcessPass
{
    class UMaterialInstanceDynamic* SetupMID;

    void Execute(class UTexture* PrePassInput, class UComposurePostProcessPassPolicy* PostProcessPass);
};

class UComposureTonemapperPass : public UComposurePostProcessPass
{
    FColorGradingSettings ColorGradingSettings;
    FFilmStockSettings FilmStockSettings;
    float ChromaticAberration;

    void TonemapToRenderTarget();
};

class UComposureTonemapperPassPolicy : public UComposurePostProcessPassPolicy
{
    FColorGradingSettings ColorGradingSettings;
    FFilmStockSettings FilmStockSettings;
    float ChromaticAberration;

};

class UEXRFileCompositingOutput : public UCompositingElementOutput
{
    FDirectoryPath OutputDirectiory;
    FString FilenameFormat;
    FFrameRate OutputFrameRate;
    EExrCompressionOptions Compression;

};

class UMediaTextureCompositingInput : public UCompositingMediaInput
{
    class UMediaTexture* MediaSource;

};

class UMovieSceneComposureExportInitializer : public UObject
{

    void ExportSceneCaptureBuffers(class ACompositingElement* CompShotElement, class USceneCaptureComponent2D* SceneCapture, const TArray<FString>& BuffersToExport);
};

class UMovieSceneComposureExportSection : public UMovieSceneSection
{
};

class UMovieSceneComposureExportTrack : public UMovieSceneTrack
{
    FMovieSceneComposureExportPass Pass;
    TArray<class UMovieSceneSection*> Sections;

};

class UMovieSceneComposurePostMoveSettingsSection : public UMovieSceneSection
{
    FMovieSceneFloatChannel Pivot;
    FMovieSceneFloatChannel Translation;
    FMovieSceneFloatChannel RotationAngle;
    FMovieSceneFloatChannel Scale;

};

class UMovieSceneComposurePostMoveSettingsTrack : public UMovieScenePropertyTrack
{
};

class UMultiPassChromaKeyer : public UCompositingElementTransform
{
    TArray<FLinearColor> KeyColors;
    FCompositingMaterial KeyerMaterial;
    class UTexture* DefaultWhiteTexture;

};

class UMultiPassDespill : public UCompositingElementTransform
{
    TArray<FLinearColor> KeyColors;
    FCompositingMaterial KeyerMaterial;
    class UTexture* DefaultWhiteTexture;

};

class UPlayerCompOutputCameraModifier : public UCameraModifier
{
    class UPlayerViewportCompositingOutput* Owner;

};

class UPlayerViewportCompositingOutput : public UColorConverterOutputPass
{
    int32 PlayerIndex;
    bool ApplyToneCurve;
    class UPlayerCompOutputCameraModifier* ActiveCamModifier;
    class UMaterialInterface* TonemapperBaseMat;
    class UMaterialInterface* PreTonemapBaseMat;
    class UMaterialInstanceDynamic* ViewportOverrideMID;

};

class URenderTargetCompositingOutput : public UCompositingElementOutput
{
    class UTextureRenderTarget2D* RenderTarget;

};

#endif
