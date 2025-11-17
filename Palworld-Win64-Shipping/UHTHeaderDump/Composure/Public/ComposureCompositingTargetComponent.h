#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CompEditorImagePreviewInterface.h"
#include "ComposureCompositingTargetComponent.generated.h"

class UTexture;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class COMPOSURE_API UComposureCompositingTargetComponent : public UActorComponent, public ICompEditorImagePreviewInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTexture* DisplayTexture;
    
public:
    UComposureCompositingTargetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDisplayTexture(UTexture* NewDisplayTexture);
    
    UFUNCTION(BlueprintPure)
    UTexture* GetDisplayTexture() const;
    

    // Fix for true pure virtual functions not being implemented
};

