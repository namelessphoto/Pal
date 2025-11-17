#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LensBloomSettings -FallbackName=LensBloomSettings
#include "ComposurePostProcessPass.h"
#include "ComposureLensBloomPass.generated.h"

class UMaterialInstanceDynamic;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class COMPOSURE_API UComposureLensBloomPass : public UComposurePostProcessPass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLensBloomSettings Settings;
    
private:
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* TonemapperReplacingMID;
    
public:
    UComposureLensBloomPass(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTonemapperReplacingMaterial(UMaterialInstanceDynamic* Material);
    
    UFUNCTION(BlueprintCallable)
    void BloomToRenderTarget();
    
};

