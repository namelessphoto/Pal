#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "CommonUISettings.generated.h"

class UCommonUIRichTextData;
class UMaterialInterface;

UCLASS(DefaultConfig, Config=Game)
class COMMONUI_API UCommonUISettings : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config, EditAnywhere)
    bool bAutoLoadData;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UObject> DefaultImageResourceObject;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> DefaultThrobberMaterial;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UCommonUIRichTextData> DefaultRichTextDataClass;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FGameplayTag> PlatformTraits;
    
    UPROPERTY(Transient)
    UObject* DefaultImageResourceObjectInstance;
    
    UPROPERTY(Transient)
    UMaterialInterface* DefaultThrobberMaterialInstance;
    
    UPROPERTY(Transient)
    FSlateBrush DefaultThrobberBrush;
    
    UPROPERTY(Transient)
    UCommonUIRichTextData* RichTextDataInstance;
    
public:
    UCommonUISettings();

};

