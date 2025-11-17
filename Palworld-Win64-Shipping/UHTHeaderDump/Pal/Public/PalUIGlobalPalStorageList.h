#pragma once
#include "CoreMinimal.h"
#include "PalContainerId.h"
#include "PalUserWidget.h"
#include "PalUIGlobalPalStorageList.generated.h"

class UPalIndividualCharacterContainer;
class UPalIndividualCharacterHandleGPS;
class UPalIndividualCharacterSlot;

UCLASS(EditInlineNew)
class PAL_API UPalUIGlobalPalStorageList : public UPalUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FPalContainerId LocalGPSContainerId;
    
    UPROPERTY()
    UPalIndividualCharacterContainer* LocalGPSContainer;
    
    UPROPERTY()
    TArray<UPalIndividualCharacterHandleGPS*> DummyHandleArray;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAutoLoadGPSData;
    
public:
    UPalUIGlobalPalStorageList();

    UFUNCTION(BlueprintCallable)
    void Setup();
    
    UFUNCTION(BlueprintCallable)
    void RefreshSlot(const int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void RefreshPage(const int32 PageNum);
    
    UFUNCTION(BlueprintCallable)
    void RefreshAllPage();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReflectContainerToGPSData();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRefreshSlot(const int32 SlotIndex);
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetMaxPageNum() const;
    
    UFUNCTION(BlueprintPure)
    bool GetGPSContainerId(FPalContainerId& OutID) const;
    
    UFUNCTION(BlueprintPure)
    bool GetDummyPageSlots(const int32 PageNum, TArray<UPalIndividualCharacterSlot*>& OutSlots) const;
    
};

