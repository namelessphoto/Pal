#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ComposurePostProcessPass.generated.h"

class UComposurePostProcessBlendable;
class UMaterialInterface;
class USceneCaptureComponent2D;
class UTextureRenderTarget2D;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class COMPOSURE_API UComposurePostProcessPass : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, NonTransactional, Transient)
    USceneCaptureComponent2D* SceneCapture;
    
    UPROPERTY(NonTransactional, Transient)
    UComposurePostProcessBlendable* BlendableInterface;
    
    UPROPERTY(NonTransactional, Transient)
    UMaterialInterface* SetupMaterial;
    
    UPROPERTY(NonTransactional, Transient)
    UMaterialInterface* TonemapperReplacement;
    
public:
    UComposurePostProcessPass(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSetupMaterial(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetOutputRenderTarget(UTextureRenderTarget2D* RenderTarget);
    
    UFUNCTION(BlueprintPure)
    UMaterialInterface* GetSetupMaterial() const;
    
    UFUNCTION(BlueprintPure)
    UTextureRenderTarget2D* GetOutputRenderTarget() const;
    
};

