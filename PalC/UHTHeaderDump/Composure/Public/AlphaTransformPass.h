#pragma once
#include "CoreMinimal.h"
#include "CompositingElementTransform.h"
#include "AlphaTransformPass.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(HideDropdown, NotEditInlineNew)
class COMPOSURE_API UAlphaTransformPass : public UCompositingElementTransform {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float AlphaScale;
    
private:
    UPROPERTY(Transient)
    UMaterialInterface* DefaultMaterial;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* AlphaTransformMID;
    
public:
    UAlphaTransformPass();

};

