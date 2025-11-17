#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ComposurePlayerCompositingInterface.h"
#include "ComposurePlayerCompositingTarget.generated.h"

class APlayerCameraManager;
class UComposurePlayerCompositingCameraModifier;
class UMaterialInstanceDynamic;
class UTextureRenderTarget2D;

UCLASS(BlueprintType)
class COMPOSURE_API UComposurePlayerCompositingTarget : public UObject, public IComposurePlayerCompositingInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    APlayerCameraManager* PlayerCameraManager;
    
    UPROPERTY(Transient)
    UComposurePlayerCompositingCameraModifier* PlayerCameraModifier;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* ReplaceTonemapperMID;
    
public:
    UComposurePlayerCompositingTarget();

    UFUNCTION(BlueprintCallable)
    void SetRenderTarget(UTextureRenderTarget2D* RenderTarget);
    
    UFUNCTION(BlueprintCallable)
    APlayerCameraManager* SetPlayerCameraManager(APlayerCameraManager* NewPlayerCameraManager);
    
    UFUNCTION(BlueprintPure)
    APlayerCameraManager* GetPlayerCameraManager() const;
    

    // Fix for true pure virtual functions not being implemented
};

