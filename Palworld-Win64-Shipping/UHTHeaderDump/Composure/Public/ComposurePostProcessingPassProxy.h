#pragma once
#include "CoreMinimal.h"
#include "ComposurePostProcessPass.h"
#include "ComposurePostProcessingPassProxy.generated.h"

class UComposurePostProcessPassPolicy;
class UMaterialInstanceDynamic;
class UTexture;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class COMPOSURE_API UComposurePostProcessingPassProxy : public UComposurePostProcessPass {
    GENERATED_BODY()
public:
private:
    UPROPERTY(DuplicateTransient, SkipSerialization, Transient)
    UMaterialInstanceDynamic* SetupMID;
    
public:
    UComposurePostProcessingPassProxy(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Execute(UTexture* PrePassInput, UComposurePostProcessPassPolicy* PostProcessPass);
    
};

