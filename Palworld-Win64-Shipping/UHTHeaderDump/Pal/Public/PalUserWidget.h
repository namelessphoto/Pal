#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EInputEvent -FallbackName=EInputEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=OnInputAction__DelegateSignature -FallbackName=OnInputActionDelegate
#include "PalActivatableWidget.h"
#include "PalUIActionBindData.h"
#include "Templates/SubclassOf.h"
#include "PalUserWidget.generated.h"

class UAkAudioEvent;
class UPalHUDDispatchParameterBase;
class UPalUserWidgetOverlayUI;
class UUserWidget;

UCLASS(Abstract, EditInlineNew)
class UPalUserWidget : public UPalActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSyncPlayerInventory;
    
protected:
    UPROPERTY(Transient)
    UPalHUDDispatchParameterBase* Param;
    
    UPROPERTY()
    TArray<FPalUIActionBindData> BindedActionHandles;
    
public:
    UPalUserWidget();

    UFUNCTION()
    void VisibilityOverride(ESlateVisibility changedVisibility);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterActionBinding(UPARAM(Ref) FPalUIActionBindData& BindingData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RequestInventorySync(bool bOpen) const;
    
    UFUNCTION(BlueprintCallable)
    FPalUIActionBindData RegisterActionBinding_NotConcume(const FName& ActionName, bool IsDisplayActionBar, TEnumAsByte<EInputEvent> InputType, FOnInputAction Callback);
    
    UFUNCTION(BlueprintCallable)
    FPalUIActionBindData RegisterActionBinding(const FName& ActionName, bool IsDisplayActionBar, TEnumAsByte<EInputEvent> InputType, FOnInputAction Callback);
    
protected:
    UFUNCTION(BlueprintCallable)
    FGuid Push(TSubclassOf<UPalUserWidgetOverlayUI> WidgetClass, UPalHUDDispatchParameterBase* Parameter);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayAkSound(UAkAudioEvent* AkEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup_AfterCreatedPlayer();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClosed();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSameWidget(const FGuid& checkID);
    
protected:
    UFUNCTION(BlueprintPure)
    UPalHUDDispatchParameterBase* GetParam() const;
    
public:
    UFUNCTION(BlueprintPure)
    UUserWidget* FindParentWidget(TSubclassOf<UUserWidget> Class);
    
};

