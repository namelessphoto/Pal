#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "CommonRegisteredTabInfo.h"
#include "CommonUserWidget.h"
#include "Templates/SubclassOf.h"
#include "CommonTabListWidgetBase.generated.h"

class UCommonAnimatedSwitcher;
class UCommonButtonBase;
class UCommonButtonGroupBase;
class UWidget;

UCLASS(Abstract, EditInlineNew)
class COMMONUI_API UCommonTabListWidgetBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTabSelected, FName, TabId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTabListRebuilt);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTabButtonRemoval, FName, TabId, UCommonButtonBase*, TabButton);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTabButtonCreation, FName, TabId, UCommonButtonBase*, TabButton);
    
    UPROPERTY(BlueprintAssignable)
    FOnTabSelected OnTabSelected;
    
    UPROPERTY(BlueprintAssignable)
    FOnTabButtonCreation OnTabButtonCreation;
    
    UPROPERTY(BlueprintAssignable)
    FOnTabButtonRemoval OnTabButtonRemoval;
    
    UPROPERTY(BlueprintAssignable)
    FOnTabListRebuilt OnTabListRebuilt;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle NextTabInputActionData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle PreviousTabInputActionData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAutoListenForInput;
    
    UPROPERTY(EditAnywhere)
    bool bDeferRebuildingTabList;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UCommonAnimatedSwitcher> LinkedSwitcher;
    
    UPROPERTY(Transient)
    UCommonButtonGroupBase* TabButtonGroup;
    
private:
    UPROPERTY(Transient)
    TMap<FName, FCommonRegisteredTabInfo> RegisteredTabsByID;
    
public:
    UCommonTabListWidgetBase();

    UFUNCTION(BlueprintCallable)
    void SetTabVisibility(FName TabNameID, ESlateVisibility NewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetTabInteractionEnabled(FName TabNameID, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetTabEnabled(FName TabNameID, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetListeningForInput(bool bShouldListen);
    
    UFUNCTION(BlueprintCallable)
    void SetLinkedSwitcher(UCommonAnimatedSwitcher* CommonSwitcher);
    
    UFUNCTION(BlueprintCallable)
    bool SelectTabByID(FName TabNameID, bool bSuppressClickFeedback);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveTab(FName TabNameID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllTabs();
    
    UFUNCTION(BlueprintCallable)
    bool RegisterTab(FName TabNameID, TSubclassOf<UCommonButtonBase> ButtonWidgetType, UWidget* ContentWidget, const int32 TabIndex);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void HandleTabRemoval(FName TabNameID, UCommonButtonBase* TabButton);
    
    UFUNCTION(BlueprintNativeEvent)
    void HandleTabCreation(FName TabNameID, UCommonButtonBase* TabButton);
    
    UFUNCTION()
    void HandleTabButtonSelected(UCommonButtonBase* SelectedTabButton, int32 ButtonIndex);
    
    UFUNCTION()
    void HandlePreviousTabInputAction(bool& bPassThrough);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandlePreLinkedSwitcherChanged_BP();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandlePostLinkedSwitcherChanged_BP();
    
    UFUNCTION()
    void HandleNextTabInputAction(bool& bPassThrough);
    
public:
    UFUNCTION(BlueprintPure)
    FName GetTabIdAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTabCount() const;
    
    UFUNCTION(BlueprintCallable)
    UCommonButtonBase* GetTabButtonBaseByID(FName TabNameID);
    
    UFUNCTION(BlueprintPure)
    FName GetSelectedTabId() const;
    
    UFUNCTION(BlueprintPure)
    UCommonAnimatedSwitcher* GetLinkedSwitcher() const;
    
    UFUNCTION(BlueprintPure)
    FName GetActiveTab() const;
    
    UFUNCTION(BlueprintCallable)
    void DisableTabWithReason(FName TabNameID, const FText& Reason);
    
};

