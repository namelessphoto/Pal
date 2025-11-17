#pragma once
#include "CoreMinimal.h"
#include "ContentWidget.h"
#include "SizeBox.generated.h"

UCLASS()
class UMG_API USizeBox : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WidthOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeightOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinDesiredWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinDesiredHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDesiredWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDesiredHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinAspectRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAspectRatio;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_WidthOverride: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_HeightOverride: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_MinDesiredWidth: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_MinDesiredHeight: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_MaxDesiredWidth: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_MaxDesiredHeight: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_MinAspectRatio: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_MaxAspectRatio: 1;
    
    USizeBox();

    UFUNCTION(BlueprintCallable)
    void SetWidthOverride(float InWidthOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetMinDesiredWidth(float InMinDesiredWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetMinDesiredHeight(float InMinDesiredHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetMinAspectRatio(float InMinAspectRatio);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxDesiredWidth(float InMaxDesiredWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxDesiredHeight(float InMaxDesiredHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxAspectRatio(float InMaxAspectRatio);
    
    UFUNCTION(BlueprintCallable)
    void SetHeightOverride(float InHeightOverride);
    
    UFUNCTION(BlueprintCallable)
    void ClearWidthOverride();
    
    UFUNCTION(BlueprintCallable)
    void ClearMinDesiredWidth();
    
    UFUNCTION(BlueprintCallable)
    void ClearMinDesiredHeight();
    
    UFUNCTION(BlueprintCallable)
    void ClearMinAspectRatio();
    
    UFUNCTION(BlueprintCallable)
    void ClearMaxDesiredWidth();
    
    UFUNCTION(BlueprintCallable)
    void ClearMaxDesiredHeight();
    
    UFUNCTION(BlueprintCallable)
    void ClearMaxAspectRatio();
    
    UFUNCTION(BlueprintCallable)
    void ClearHeightOverride();
    
};

