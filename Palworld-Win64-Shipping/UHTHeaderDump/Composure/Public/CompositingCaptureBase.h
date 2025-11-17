#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
#include "CompositingElement.h"
#include "CompositingCaptureBase.generated.h"

class UMaterialInstanceDynamic;
class USceneCaptureComponent2D;

UCLASS()
class COMPOSURE_API ACompositingCaptureBase : public ACompositingElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USceneCaptureComponent2D* SceneCaptureComponent2D;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bApplyDistortion;
    
    UPROPERTY(EditInstanceOnly)
    FComponentReference LensComponentPicker;
    
    UPROPERTY(BlueprintReadOnly)
    float OverscanFactor;
    
    UPROPERTY(BlueprintReadOnly)
    float OriginalFocalLength;
    
    UPROPERTY()
    UMaterialInstanceDynamic* LastDistortionMID;
    
public:
    ACompositingCaptureBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateDistortion();
    
};

