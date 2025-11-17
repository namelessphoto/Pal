#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalWorldMapCapture.generated.h"

class USceneCaptureComponent2D;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS()
class PAL_API APalWorldMapCapture : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USceneCaptureComponent2D* SceneCaptureComponent;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere)
    UTexture2D* worldMapTexture;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere)
    UTextureRenderTarget2D* worldMapDetailRenderTexture;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere)
    UTexture2D* worldMapHeightTexture;
    
public:
    APalWorldMapCapture(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UTexture2D* GetWorldMapHeightMap();
    
    UFUNCTION(BlueprintPure)
    UTextureRenderTarget2D* GetRenderedWorldMapTexture();
    
    UFUNCTION(BlueprintCallable)
    bool CreateWorldMapTexture();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CaptureWorldMapTexture_Perspective();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CaptureWorldMapTexture_Ortho();
    
};

