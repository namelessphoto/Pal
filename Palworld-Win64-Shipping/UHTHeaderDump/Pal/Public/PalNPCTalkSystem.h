#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "FlagContainer.h"
#include "PalNPCTalkSystemCustomFunctionInterface.h"
#include "PalNPCTalkSystem.generated.h"

class UPalNPCTalkDynamicParameter;
class UPalNPCTalkSystem;
class UPalTalkWindowWidgetBase;

UCLASS(BlueprintType)
class PAL_API UPalNPCTalkSystem : public UObject, public IPalNPCTalkSystemCustomFunctionInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndText, UPalNPCTalkSystem*, SelfTalkSystem);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FConfirmChoice, UPalNPCTalkSystem*, SelfTalkSystem, const FName&, ChoiceMsgID, const int32, ChoiceIndex);
    
    UPROPERTY(BlueprintAssignable)
    FEndText OnEndTextDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FConfirmChoice OnConfirmChoiceDelegate;
    
private:
    UPROPERTY(Instanced)
    UPalTalkWindowWidgetBase* TalkWidget;
    
    UPROPERTY()
    FFlagContainer TalkWidgetVisibleFlag;
    
    UPROPERTY()
    TMap<FName, FString> TextArgumentMap;
    
    UPROPERTY()
    TMap<FName, UPalNPCTalkDynamicParameter*> DynamicParameters;
    
public:
    UPalNPCTalkSystem();

    UFUNCTION(BlueprintCallable)
    void SetVisibleTalkHUD(const FName& FlagKey, bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicParameters(const FName& ParameterName, UPalNPCTalkDynamicParameter* InParameter);
    
protected:
    UFUNCTION()
    void OnEndText(UPalTalkWindowWidgetBase* SelfTalkWidget);
    
    UFUNCTION()
    void OnConfirmChoice(UPalTalkWindowWidgetBase* SelfTalkWidget, const FName& ChoiceMsgID, const int32 ChoiceIndex);
    
public:
    UFUNCTION(BlueprintPure)
    UPalNPCTalkDynamicParameter* GetDynamicParameters(const FName& ParameterName);
    
    UFUNCTION(BlueprintCallable)
    void AddCustomTextTagArgument(const FName& TagName, const FString& ArgumentString);
    

    // Fix for true pure virtual functions not being implemented
};

