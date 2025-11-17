#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETextureRenderTargetFormat -FallbackName=ETextureRenderTargetFormat
#include "CompImageColorPickerInterface.h"
#include "CompositingMaterial.h"
#include "ComposurePipelineBaseActor.h"
#include "DynamicOnFinalPassRenderedDelegate.h"
#include "DynamicOnTransformPassRenderedDelegate.h"
#include "ECompPassConstructionType.h"
#include "EInheritedSourceType.h"
#include "ESceneCameraLinkType.h"
#include "ETargetUsageFlags.h"
#include "Templates/SubclassOf.h"
#include "CompositingElement.generated.h"

class ACameraActor;
class ACompositingElement;
class UAlphaTransformPass;
class UCompositingElementInput;
class UCompositingElementOutput;
class UCompositingElementPass;
class UCompositingElementTransform;
class UComposureCompositingTargetComponent;
class UComposurePostProcessingPassProxy;
class UTexture;
class UTextureRenderTarget2D;

UCLASS()
class COMPOSURE_API ACompositingElement : public AComposurePipelineBaseActor, public ICompImageColorPickerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UComposureCompositingTargetComponent* CompositingTarget;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UComposurePostProcessingPassProxy* PostProcessProxy;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    TArray<UCompositingElementInput*> Inputs;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    TArray<UCompositingElementTransform*> TransformPasses;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    TArray<UCompositingElementOutput*> Outputs;
    
public:
    UPROPERTY(EditAnywhere)
    ESceneCameraLinkType CameraSource;
    
    UPROPERTY(EditInstanceOnly)
    TLazyObjectPtr<ACameraActor> TargetCameraActor;
    
    UPROPERTY(EditAnywhere)
    EInheritedSourceType ResolutionSource;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIntPoint RenderResolution;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETextureRenderTargetFormat> RenderFormat;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool bUseSharedTargetPool;
    
private:
    UPROPERTY()
    int32 FreezeFrameMask;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FDynamicOnTransformPassRendered OnTransformPassRendered_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FDynamicOnFinalPassRendered OnFinalPassRendered_BP;
    
private:
    UPROPERTY()
    FName CompShotIdName;
    
    UPROPERTY()
    ACompositingElement* Parent;
    
    UPROPERTY()
    TArray<ACompositingElement*> ChildLayers;
    
    UPROPERTY()
    float OutputOpacity;
    
    UPROPERTY()
    TMap<UCompositingElementInput*, ECompPassConstructionType> UserConstructedInputs;
    
    UPROPERTY()
    TMap<UCompositingElementTransform*, ECompPassConstructionType> UserConstructedTransforms;
    
    UPROPERTY()
    TMap<UCompositingElementOutput*, ECompPassConstructionType> UserConstructedOutputs;
    
    UPROPERTY(DuplicateTransient, Instanced, SkipSerialization, Transient)
    TArray<UCompositingElementInput*> InternalInputs;
    
    UPROPERTY(DuplicateTransient, Instanced, SkipSerialization, Transient)
    TArray<UCompositingElementTransform*> InternalTransformPasses;
    
    UPROPERTY(DuplicateTransient, Instanced, SkipSerialization, Transient)
    TArray<UCompositingElementOutput*> InternalOutputs;
    
    UPROPERTY(Transient)
    UAlphaTransformPass* InternalAlphaPass;
    
public:
    ACompositingElement(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTargetCamera(ACameraActor* NewCameraActor);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderResolution(FIntPoint NewResolution);
    
    UFUNCTION(BlueprintCallable)
    void SetOpacity(const float NewOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetElementName(const FName NewName);
    
    UFUNCTION(BlueprintCallable)
    void SetEditorColorPickingTarget(UTextureRenderTarget2D* PickingTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetEditorColorPickerDisplayImage(UTexture* PickerDisplayImage);
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* RequestNamedRenderTarget(const FName ReferenceName, const float RenderPercentage, ETargetUsageFlags UsageTag);
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* RenderCompositingMaterialToTarget(UPARAM(Ref) FCompositingMaterial& CompMaterial, UTextureRenderTarget2D* RenderTarget, FName ResultLookupName);
    
    UFUNCTION(BlueprintCallable)
    UTexture* RenderCompositingMaterial(UPARAM(Ref) FCompositingMaterial& CompMaterial, float RenderScale, FName ResultLookupName, ETargetUsageFlags UsageTag);
    
    UFUNCTION(BlueprintNativeEvent)
    UTexture* RenderCompElement(bool bCameraCutThisFrame);
    
    UFUNCTION(BlueprintCallable)
    bool ReleaseOwnedTarget(UTextureRenderTarget2D* OwnedTarget);
    
    UFUNCTION(BlueprintCallable)
    void RegisterPassResult(FName ReferenceName, UTexture* PassResult, bool bSetAsLatestRenderResult);
    
    UFUNCTION(BlueprintPure)
    bool IsSubElement() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UCompositingElementTransform*> GetTransformsList() const;
    
    UFUNCTION(BlueprintPure)
    FIntPoint GetRenderResolution() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRenderPriority() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UCompositingElementOutput*> GetOutputsList() const;
    
    UFUNCTION(BlueprintPure)
    float GetOpacity() const;
    
    UFUNCTION(BlueprintPure)
    UTexture* GetLatestRenderResult() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UCompositingElementInput*> GetInputsList() const;
    
    UFUNCTION(BlueprintPure)
    ACompositingElement* GetElementParent() const;
    
    UFUNCTION(BlueprintPure)
    FName GetCompElementName() const;
    
    UFUNCTION(BlueprintPure)
    TArray<ACompositingElement*> GetChildElements() const;
    
    UFUNCTION(BlueprintCallable)
    UCompositingElementTransform* FindTransformPass(TSubclassOf<UCompositingElementTransform> TransformType, UTexture*& PassResult, FName OptionalPassName);
    
    UFUNCTION(BlueprintPure)
    ACameraActor* FindTargetCamera() const;
    
    UFUNCTION(BlueprintCallable)
    UCompositingElementOutput* FindOutputPass(TSubclassOf<UCompositingElementOutput> OutputType, FName OptionalPassName);
    
    UFUNCTION(BlueprintCallable)
    UTexture* FindNamedRenderResult(FName PassName, bool bSearchSubElements);
    
    UFUNCTION(BlueprintCallable)
    UCompositingElementInput* FindInputPass(TSubclassOf<UCompositingElementInput> InputType, UTexture*& PassResult, FName OptionalPassName);
    
    UFUNCTION(BlueprintCallable)
    bool DeletePass(UCompositingElementPass* PassToDelete);
    
    UFUNCTION(BlueprintCallable)
    UCompositingElementTransform* CreateNewTransformPass(FName PassName, TSubclassOf<UCompositingElementTransform> TransformType);
    
    UFUNCTION(BlueprintCallable)
    UCompositingElementOutput* CreateNewOutputPass(FName PassName, TSubclassOf<UCompositingElementOutput> OutputType);
    
    UFUNCTION(BlueprintCallable)
    UCompositingElementInput* CreateNewInputPass(FName PassName, TSubclassOf<UCompositingElementInput> InputType);
    
protected:
    UFUNCTION(BlueprintCallable)
    UCompositingElementTransform* AddNewTransformPass(FName PassName, TSubclassOf<UCompositingElementTransform> TransformType);
    
    UFUNCTION(BlueprintCallable)
    UCompositingElementOutput* AddNewOutputPass(FName PassName, TSubclassOf<UCompositingElementOutput> OutputType);
    
    UFUNCTION(BlueprintCallable)
    UCompositingElementInput* AddNewInputPass(FName PassName, TSubclassOf<UCompositingElementInput> InputType);
    

    // Fix for true pure virtual functions not being implemented
};

