#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "WebBrowser.generated.h"

UCLASS()
class WEBBROWSERWIDGET_API UWebBrowser : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUrlChanged, const FText&, Text);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnConsoleMessage, const FString&, Message, const FString&, Source, int32, Line);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBeforePopup, const FString&, URL, const FString&, Frame);
    
    UPROPERTY(BlueprintAssignable)
    FOnUrlChanged OnUrlChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnBeforePopup OnBeforePopup;
    
    UPROPERTY(BlueprintAssignable)
    FOnConsoleMessage OnConsoleMessage;
    
protected:
    UPROPERTY(EditAnywhere)
    FString InitialURL;
    
    UPROPERTY(EditAnywhere)
    bool bSupportsTransparency;
    
public:
    UWebBrowser();

    UFUNCTION(BlueprintCallable)
    void LoadURL(const FString& NewURL);
    
    UFUNCTION(BlueprintCallable)
    void LoadString(const FString& Contents, const FString& DummyURL);
    
    UFUNCTION(BlueprintPure)
    FString GetUrl() const;
    
    UFUNCTION(BlueprintPure)
    FText GetTitleText() const;
    
    UFUNCTION(BlueprintCallable)
    void ExecuteJavascript(const FString& ScriptText);
    
};

