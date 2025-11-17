#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CommonUIEditorSettings.generated.h"

class UCommonBorderStyle;
class UCommonButtonStyle;
class UCommonTextStyle;

UCLASS(DefaultConfig, Config=Editor)
class COMMONUI_API UCommonUIEditorSettings : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UCommonTextStyle> TemplateTextStyle;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UCommonButtonStyle> TemplateButtonStyle;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UCommonBorderStyle> TemplateBorderStyle;
    
public:
    UCommonUIEditorSettings();

};

