#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ComposurePipelineBaseActor.generated.h"

UCLASS()
class COMPOSURE_API AComposurePipelineBaseActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoRun;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoRunChildElementsAndSelf;
    
public:
    AComposurePipelineBaseActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAutoRunChildrenAndSelf(bool bAutoRunChildAndSelf);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoRun(bool bNewAutoRunVal);
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsActivelyRunning() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void EnqueueRendering(bool bCameraCutThisFrame);
    
    UFUNCTION(BlueprintPure)
    bool AreChildrenAndSelfAutoRun() const;
    
};

