#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EHorizontalAlignment -FallbackName=EHorizontalAlignment
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ContentWidget -FallbackName=ContentWidget
#include "OnLoadGuardStateChangedDynamicDelegate.h"
#include "Templates/SubclassOf.h"
#include "CommonLoadGuard.generated.h"

class UCommonTextStyle;
class UObject;

UCLASS(DefaultConfig, Config=Game)
class COMMONUI_API UCommonLoadGuard : public UContentWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAssetLoaded, UObject*, Object);
    
private:
    UPROPERTY(EditAnywhere)
    FSlateBrush LoadingBackgroundBrush;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> ThrobberAlignment;
    
    UPROPERTY(EditAnywhere)
    FMargin ThrobberPadding;
    
    UPROPERTY(EditAnywhere)
    FText LoadingText;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCommonTextStyle> TextStyle;
    
    UPROPERTY(BlueprintAssignable)
    FOnLoadGuardStateChangedDynamic BP_OnLoadingStateChanged;
    
    UPROPERTY(Config)
    FSoftObjectPath SpinnerMaterialPath;
    
public:
    UCommonLoadGuard();

    UFUNCTION(BlueprintCallable)
    void SetLoadingText(const FText& InLoadingText);
    
    UFUNCTION(BlueprintCallable)
    void SetIsLoading(bool bInIsLoading);
    
    UFUNCTION(BlueprintPure)
    bool IsLoading() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void BP_GuardAndLoadAsset(const TSoftObjectPtr<UObject>& InLazyAsset, const UCommonLoadGuard::FOnAssetLoaded& OnAssetLoaded);
    
};

