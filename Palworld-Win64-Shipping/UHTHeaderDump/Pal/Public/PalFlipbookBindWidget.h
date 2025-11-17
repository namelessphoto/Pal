#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "PalFlipbookBindWidget.generated.h"

class UImage;
class UPaperFlipbook;
class UTexture2D;

UCLASS(Abstract, EditInlineNew)
class PAL_API UPalFlipbookBindWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPaperFlipbook* SourceFlipbook;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* TargetImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayRate;
    
private:
    UPROPERTY(Transient)
    float CurrentPlayTime;
    
    UPROPERTY(Transient)
    UTexture2D* CurrentTexture;
    
public:
    UPalFlipbookBindWidget();

    UFUNCTION(BlueprintCallable)
    void SeuPause(bool bNewPauseFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayRate(float NewPlayRate);
    
};

