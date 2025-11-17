#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETextureRenderTargetFormat -FallbackName=ETextureRenderTargetFormat
#include "CompositingElementPass.generated.h"

class UTextureRenderTarget2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class COMPOSURE_API UCompositingElementPass : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnabled;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PassName;
    
    UCompositingElementPass();

    UFUNCTION(BlueprintCallable)
    void SetPassEnabled(bool bSetEnabledTo);
    
    UFUNCTION(BlueprintNativeEvent)
    void Reset();
    
protected:
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* RequestRenderTarget(FIntPoint Dimensions, TEnumAsByte<ETextureRenderTargetFormat> Format);
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* RequestNativelyFormattedTarget(float RenderScale);
    
    UFUNCTION(BlueprintCallable)
    bool ReleaseRenderTarget(UTextureRenderTarget2D* AssignedTarget);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnFrameEnd();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnFrameBegin(bool bCameraCutThisFrame);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnEnabled();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnDisabled();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPassEnabled() const;
    
};

