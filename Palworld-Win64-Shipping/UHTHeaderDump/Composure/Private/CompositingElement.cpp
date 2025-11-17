#include "CompositingElement.h"
#include "ComposureCompositingTargetComponent.h"
#include "ComposurePostProcessingPassProxy.h"
#include "Templates/SubclassOf.h"

ACompositingElement::ACompositingElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UComposurePostProcessingPassProxy>(TEXT("PostProcessProxy"));
    this->CompositingTarget = CreateDefaultSubobject<UComposureCompositingTargetComponent>(TEXT("CompositingTarget"));
    this->PostProcessProxy = (UComposurePostProcessingPassProxy*)RootComponent;
    this->CameraSource = ESceneCameraLinkType::Unused;
    this->ResolutionSource = EInheritedSourceType::Inherited;
    this->RenderFormat = ETextureRenderTargetFormat::RTF_RGBA16f;
    this->bUseSharedTargetPool = true;
    this->FreezeFrameMask = 0;
    this->CompShotIdName = TEXT("Default__CompositingElement");
    this->Parent = NULL;
    this->OutputOpacity = 1.00f;
    this->InternalAlphaPass = NULL;
}

void ACompositingElement::SetTargetCamera(ACameraActor* NewCameraActor) {
}

void ACompositingElement::SetRenderResolution(FIntPoint NewResolution) {
}

void ACompositingElement::SetOpacity(const float NewOpacity) {
}

void ACompositingElement::SetElementName(const FName NewName) {
}

void ACompositingElement::SetEditorColorPickingTarget(UTextureRenderTarget2D* PickingTarget) {
}

void ACompositingElement::SetEditorColorPickerDisplayImage(UTexture* PickerDisplayImage) {
}

UTextureRenderTarget2D* ACompositingElement::RequestNamedRenderTarget(const FName ReferenceName, const float RenderPercentage, ETargetUsageFlags UsageTag) {
    return NULL;
}

UTextureRenderTarget2D* ACompositingElement::RenderCompositingMaterialToTarget(FCompositingMaterial& CompMaterial, UTextureRenderTarget2D* RenderTarget, FName ResultLookupName) {
    return NULL;
}

UTexture* ACompositingElement::RenderCompositingMaterial(FCompositingMaterial& CompMaterial, float RenderScale, FName ResultLookupName, ETargetUsageFlags UsageTag) {
    return NULL;
}

UTexture* ACompositingElement::RenderCompElement_Implementation(bool bCameraCutThisFrame) {
    return NULL;
}

bool ACompositingElement::ReleaseOwnedTarget(UTextureRenderTarget2D* OwnedTarget) {
    return false;
}

void ACompositingElement::RegisterPassResult(FName ReferenceName, UTexture* PassResult, bool bSetAsLatestRenderResult) {
}

bool ACompositingElement::IsSubElement() const {
    return false;
}

TArray<UCompositingElementTransform*> ACompositingElement::GetTransformsList() const {
    return TArray<UCompositingElementTransform*>();
}

FIntPoint ACompositingElement::GetRenderResolution() const {
    return FIntPoint{};
}

int32 ACompositingElement::GetRenderPriority() const {
    return 0;
}

TArray<UCompositingElementOutput*> ACompositingElement::GetOutputsList() const {
    return TArray<UCompositingElementOutput*>();
}

float ACompositingElement::GetOpacity() const {
    return 0.0f;
}

UTexture* ACompositingElement::GetLatestRenderResult() const {
    return NULL;
}

TArray<UCompositingElementInput*> ACompositingElement::GetInputsList() const {
    return TArray<UCompositingElementInput*>();
}

ACompositingElement* ACompositingElement::GetElementParent() const {
    return NULL;
}

FName ACompositingElement::GetCompElementName() const {
    return NAME_None;
}

TArray<ACompositingElement*> ACompositingElement::GetChildElements() const {
    return TArray<ACompositingElement*>();
}

UCompositingElementTransform* ACompositingElement::FindTransformPass(TSubclassOf<UCompositingElementTransform> TransformType, UTexture*& PassResult, FName OptionalPassName) {
    return NULL;
}

ACameraActor* ACompositingElement::FindTargetCamera() const {
    return NULL;
}

UCompositingElementOutput* ACompositingElement::FindOutputPass(TSubclassOf<UCompositingElementOutput> OutputType, FName OptionalPassName) {
    return NULL;
}

UTexture* ACompositingElement::FindNamedRenderResult(FName PassName, bool bSearchSubElements) {
    return NULL;
}

UCompositingElementInput* ACompositingElement::FindInputPass(TSubclassOf<UCompositingElementInput> InputType, UTexture*& PassResult, FName OptionalPassName) {
    return NULL;
}

bool ACompositingElement::DeletePass(UCompositingElementPass* PassToDelete) {
    return false;
}

UCompositingElementTransform* ACompositingElement::CreateNewTransformPass(FName PassName, TSubclassOf<UCompositingElementTransform> TransformType) {
    return NULL;
}

UCompositingElementOutput* ACompositingElement::CreateNewOutputPass(FName PassName, TSubclassOf<UCompositingElementOutput> OutputType) {
    return NULL;
}

UCompositingElementInput* ACompositingElement::CreateNewInputPass(FName PassName, TSubclassOf<UCompositingElementInput> InputType) {
    return NULL;
}

UCompositingElementTransform* ACompositingElement::AddNewTransformPass(FName PassName, TSubclassOf<UCompositingElementTransform> TransformType) {
    return NULL;
}

UCompositingElementOutput* ACompositingElement::AddNewOutputPass(FName PassName, TSubclassOf<UCompositingElementOutput> OutputType) {
    return NULL;
}

UCompositingElementInput* ACompositingElement::AddNewInputPass(FName PassName, TSubclassOf<UCompositingElementInput> InputType) {
    return NULL;
}


