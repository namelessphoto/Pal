#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "CompImageColorPickerInterface.h"
#include "OnPixelPickedDelegate.h"
#include "CompositingPickerAsyncTask.generated.h"

class UCompositingPickerAsyncTask;
class UTexture;
class UTextureRenderTarget2D;

UCLASS()
class UCompositingPickerAsyncTask : public UBlueprintAsyncActionBase, public ICompImageColorPickerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnPixelPicked OnPick;
    
    UPROPERTY(BlueprintAssignable)
    FOnPixelPicked OnCancel;
    
    UPROPERTY(BlueprintAssignable)
    FOnPixelPicked OnAccept;
    
private:
    UPROPERTY(Transient)
    UTextureRenderTarget2D* PickerTarget;
    
    UPROPERTY(Transient)
    UTexture* PickerDisplayImage;
    
public:
    UCompositingPickerAsyncTask();

    UFUNCTION(BlueprintCallable)
    static UCompositingPickerAsyncTask* OpenCompositingPicker(UTextureRenderTarget2D* NewPickerTarget, UTexture* DisplayImage, FText WindowTitle, const bool bAverageColorOnDrag, const bool bUseImplicitGamma);
    

    // Fix for true pure virtual functions not being implemented
};

