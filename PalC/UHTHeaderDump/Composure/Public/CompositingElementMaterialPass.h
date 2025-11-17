#pragma once
#include "CoreMinimal.h"
#include "CompositingMaterial.h"
#include "CompositingPostProcessPass.h"
#include "CompositingElementMaterialPass.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(EditInlineNew)
class COMPOSURE_API UCompositingElementMaterialPass : public UCompositingPostProcessPass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCompositingMaterial Material;
    
    UCompositingElementMaterialPass();

    UFUNCTION(BlueprintCallable)
    bool SetParameterMapping(FName TextureParamName, FName ComposureLayerName);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialInterface(UMaterialInterface* NewMaterial);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ApplyMaterialParams(UMaterialInstanceDynamic* Mid);
    
};

