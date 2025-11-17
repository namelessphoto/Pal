#pragma once
#include "CoreMinimal.h"
#include "PalUICharacterSkinDisplayInfo.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUICharacterSkinChanger.generated.h"

class UPalIndividualCharacterSlot;

UCLASS(EditInlineNew)
class PAL_API UPalUICharacterSkinChanger : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUpdateSkinInfoDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FUpdateSkinInfoDelegate OnUpdateSkinInfoDelegate;
    
private:
    UPROPERTY()
    TMap<FName, FPalUICharacterSkinDisplayInfo> CachedSkinInfoMap;
    
public:
    UPalUICharacterSkinChanger();

protected:
    UFUNCTION(BlueprintCallable)
    void RequestRemoveSkin(UPalIndividualCharacterSlot* TargetSlot);
    
    UFUNCTION(BlueprintCallable)
    void RequestGetSkinInfo();
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeSkin(const FName& SkinName, UPalIndividualCharacterSlot* TargetSlot);
    
    UFUNCTION(BlueprintPure)
    TMap<FName, FPalUICharacterSkinDisplayInfo> GetCachedSkinInfo();
    
};

