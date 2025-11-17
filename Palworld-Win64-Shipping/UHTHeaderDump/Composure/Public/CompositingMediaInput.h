#pragma once
#include "CoreMinimal.h"
#include "CompositingElementInput.h"
#include "CompositingMaterial.h"
#include "CompositingMediaInput.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(Abstract, EditInlineNew)
class COMPOSURE_API UCompositingMediaInput : public UCompositingElementInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCompositingMaterial MediaTransformMaterial;
    
private:
    UPROPERTY(Transient)
    UMaterialInterface* DefaultMaterial;
    
    UPROPERTY(Transient)
    UMaterialInterface* DefaultTestPlateMaterial;
    
    UPROPERTY(DuplicateTransient, SkipSerialization, Transient)
    UMaterialInstanceDynamic* FallbackMID;
    
public:
    UCompositingMediaInput();

};

