#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonInput -ObjectName=ECommonInputMode -FallbackName=ECommonInputMode
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EPalHUDWidgetPriority.h"
#include "EPalItemTypeA.h"
#include "EPalItemTypeB.h"
#include "EPalWidgetBlueprintType.h"
#include "EPalWorldHUDWidgetBlueprintType.h"
#include "FlagContainer.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalHUDServiceProviderInterface.h"
#include "PalWorldHUDParameter.h"
#include "Templates/SubclassOf.h"
#include "PalHUDInGame.generated.h"

class UAkAudioEvent;
class UPalHUDDispatchParameterBase;
class UPalSoundPlayer;
class UPalUIHUDLayoutBase;
class UPalUIInputGuard;
class UPalUILiftSlotModel;
class UPalUserWidget;
class UPalUserWidgetStackableUI;
class UPalUserWidgetWorldHUD;
class UPalWorldHUDDisplayInfo;
class UUserWidget;

UCLASS(NonTransient)
class PAL_API APalHUDInGame : public AHUD, public IPalHUDServiceProviderInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalUIHUDLayoutBase> HUDLayoutClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalUIInputGuard> PlayerInputGuardClass;
    
    UPROPERTY(Instanced, Transient, VisibleInstanceOnly)
    UPalUIHUDLayoutBase* HUDLayout;
    
    UPROPERTY(Instanced, Transient, VisibleInstanceOnly)
    TMap<FGuid, UPalUserWidgetWorldHUD*> WorldHUDWidgetMap;
    
    UPROPERTY(Instanced, Transient, VisibleInstanceOnly)
    TArray<UPalUserWidget*> HUDWidgets;
    
    UPROPERTY(Instanced, Transient, VisibleInstanceOnly)
    TArray<UPalUserWidgetStackableUI*> StackableUIWidgets;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalUILiftSlotModel* LiftSlotModel;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UUserWidget* HoverWidget;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<UPalWorldHUDDisplayInfo*> WorldHUDDisplayInfos;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    TArray<UPalWorldHUDDisplayInfo*> ActiveWorldHUDDisplayInfos;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalWidgetBlueprintType, TSoftClassPtr<UPalUserWidgetStackableUI>> CommonUIClassMap;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalWorldHUDWidgetBlueprintType, TSoftClassPtr<UPalUserWidgetWorldHUD>> WorldHUDClassMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<EPalWidgetBlueprintType, TSubclassOf<UPalUserWidgetStackableUI>> LoadedCommonUIClassMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<EPalWorldHUDWidgetBlueprintType, TSubclassOf<UPalUserWidgetWorldHUD>> LoadedWorldHUDClassMap;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FPalDataTableRowName_ItemData, TSoftClassPtr<UPalUserWidgetStackableUI>> UseItemUIClassMap_Unique;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalItemTypeB, TSoftClassPtr<UPalUserWidgetStackableUI>> UseItemUIClassMap_ItemTypeB;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalItemTypeA, TSoftClassPtr<UPalUserWidgetStackableUI>> UseItemUIClassMap_ItemTypeA;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FPalDataTableRowName_ItemData, TSubclassOf<UPalUserWidgetStackableUI>> LoadedUseItemUIClassMap_Unique;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<EPalItemTypeB, TSubclassOf<UPalUserWidgetStackableUI>> LoadedUseItemUIClassMap_ItemTypeB;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<EPalItemTypeA, TSubclassOf<UPalUserWidgetStackableUI>> LoadedUseItemUIClassMap_ItemTypeA;
    
    UPROPERTY(Transient)
    UPalSoundPlayer* SoundPlayer;
    
private:
    UPROPERTY()
    TArray<FGameplayTag> GameMenuLayerTagOrder;
    
    UPROPERTY()
    TMap<FGameplayTag, FFlagContainer> LayerHideFlagMap;
    
public:
    APalHUDInGame(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TickWorldHUDs();
    
    UFUNCTION(BlueprintCallable)
    void ShowLiftIcon();
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveWorldHUDFromWidgetId(const FGuid& ID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWorldHUD(const FGuid& ID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveHUD(const FGuid& ID);
    
    UFUNCTION(BlueprintCallable)
    FGuid PushWidgetStackableUI(TSubclassOf<UPalUserWidgetStackableUI> WidgetClass, UPalHUDDispatchParameterBase* Parameter);
    
private:
    UFUNCTION()
    void OnApplicationActivationStateChanged(bool bIsFocused);
    
    UFUNCTION()
    void OnActiveInputModeChanged(ECommonInputMode InputMode);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsAnyOverlayUIActive();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Initialize();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HideLiftIcon();
    
private:
    UFUNCTION(BlueprintCallable)
    void Debug_DrawInteractPoints();
    
public:
    UFUNCTION(BlueprintCallable)
    UPalUserWidgetWorldHUD* CreateWorldHUDWidget(TSubclassOf<UPalUserWidgetWorldHUD> WidgetClass, UPalHUDDispatchParameterBase* Parameter);
    
    UFUNCTION(BlueprintCallable)
    UPalUserWidget* CreateHUDWidget(TSubclassOf<UPalUserWidget> WidgetClass, const EPalHUDWidgetPriority Priority, UPalHUDDispatchParameterBase* Parameter);
    
    UFUNCTION(BlueprintCallable)
    void CloseWorldHUDWidget(const FGuid WidgetId);
    
    UFUNCTION(BlueprintCallable)
    void CloseOverlayUI(const FGuid& ID);
    
    UFUNCTION(BlueprintCallable)
    void CloseHUDWidget(UPalUserWidget* Widget);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_SetupPlayerUI();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BindGameOverUI();
    
    UFUNCTION(BlueprintCallable)
    FGuid AddWorldHUD(FPalWorldHUDParameter Parameter);
    
    UFUNCTION(BlueprintCallable)
    FGuid AddHUD(TSubclassOf<UPalUserWidget> WidgetClass, const EPalHUDWidgetPriority Priority, UPalHUDDispatchParameterBase* Parameter);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void PlayAkSound(UAkAudioEvent* AkEvent) override PURE_VIRTUAL(PlayAkSound,);
    
    UFUNCTION(BlueprintCallable)
    UPalSoundPlayer* GetSoundPlayer() override PURE_VIRTUAL(GetSoundPlayer, return NULL;);
    
};

