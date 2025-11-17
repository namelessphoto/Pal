#pragma once
#include "CoreMinimal.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalTalkWindowWidgetBase.generated.h"

class UPalNPCTalkSystem;
class UPalTalkWindowWidgetBase;

UCLASS(EditInlineNew)
class PAL_API UPalTalkWindowWidgetBase : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndText, UPalTalkWindowWidgetBase*, SelfWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FConfirmChoice, UPalTalkWindowWidgetBase*, SelfWidget, const FName&, ChoiceMsgID, const int32, ChoiceIndex);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FEndText OnEndTextDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FConfirmChoice OnConfirmChoiceDelegate;
    
private:
    UPROPERTY()
    TWeakObjectPtr<UPalNPCTalkSystem> WeakTalkSystem;
    
public:
    UPalTalkWindowWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowChoice(const TArray<FName>& ChoiceMsgIDList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextList(const TArray<FName>& InMsgIDList);
    
    UFUNCTION()
    void OnEndTalk();
    
protected:
    UFUNCTION(BlueprintPure)
    UPalNPCTalkSystem* GetTalkSystem() const;
    
    UFUNCTION(BlueprintCallable)
    FText FormatByCustomTagArgument(const FText& OriginalText);
    
};

