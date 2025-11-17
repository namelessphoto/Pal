#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ComposurePostMoveSettings.h"
#include "ComposureUVMapSettings.h"
#include "Templates/SubclassOf.h"
#include "ComposureBlueprintLibrary.generated.h"

class AActor;
class ACompositingElement;
class APlayerCameraManager;
class UCameraComponent;
class UComposurePlayerCompositingTarget;
class UMaterialInstanceDynamic;
class UObject;
class USceneCaptureComponent2D;

UCLASS(BlueprintType)
class COMPOSURE_API UComposureBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UComposureBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetUVMapSettingsToMaterialParameters(const FComposureUVMapSettings& UVMapSettings, UMaterialInstanceDynamic* Material);
    
    UFUNCTION(BlueprintCallable)
    static void RequestRedrawComposureViewport();
    
    UFUNCTION(BlueprintCallable)
    static bool RenameComposureElement(const FName OriginalElementName, const FName NewElementName);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshComposureElementList();
    
    UFUNCTION(BlueprintPure)
    static bool IsComposureElementDrawing(ACompositingElement* CompElement);
    
    UFUNCTION(BlueprintPure)
    static void InvertUVDisplacementMapEncodingParameters(const FVector2D& In, FVector2D& Out);
    
    UFUNCTION(BlueprintPure)
    static void GetRedGreenUVFactorsFromChromaticAberration(float ChromaticAberrationAmount, FVector2D& RedGreenUVFactors);
    
    UFUNCTION(BlueprintPure)
    static void GetProjectionMatrixFromPostMoveSettings(const FComposurePostMoveSettings& PostMoveSettings, float HorizontalFOVAngle, float AspectRatio, FMatrix& ProjectionMatrix);
    
    UFUNCTION(BlueprintPure)
    static void GetPlayerDisplayGamma(const APlayerCameraManager* PlayerCameraManager, float& DisplayGamma);
    
    UFUNCTION(BlueprintPure)
    static void GetCroppingUVTransformationMatrixFromPostMoveSettings(const FComposurePostMoveSettings& PostMoveSettings, float AspectRatio, FMatrix& CropingUVTransformationMatrix, FMatrix& UncropingUVTransformationMatrix);
    
    UFUNCTION(BlueprintPure)
    static ACompositingElement* GetComposureElement(const FName ElementName);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteComposureElementAndChildren(const FName ElementToDelete);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UComposurePlayerCompositingTarget* CreatePlayerCompositingTarget(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static ACompositingElement* CreateComposureElement(const FName ElementName, TSubclassOf<ACompositingElement> ClassType, AActor* LevelContext);
    
    UFUNCTION(BlueprintCallable)
    static void CopyCameraSettingsToSceneCapture(UCameraComponent* SrcCamera, USceneCaptureComponent2D* DstCaptureComponent, float OriginalFocalLength, float OverscanFactor);
    
    UFUNCTION(BlueprintCallable)
    static bool AttachComposureElement(const FName ParentName, const FName ChildName);
    
};

