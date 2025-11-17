#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalContainerId.h"
#include "PalDimensionPalStorageSaveParameter.h"
#include "PalUserWidget.h"
#include "PalUIDImensionPalStorageList.generated.h"

class UPalIndividualCharacterContainer;
class UPalIndividualCharacterHandleReference;
class UPalIndividualCharacterSlot;

UCLASS(EditInlineNew)
class PAL_API UPalUIDImensionPalStorageList : public UPalUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FPalContainerId LocalDPSContainerId;
    
    UPROPERTY()
    UPalIndividualCharacterContainer* LocalDPSContainer;
    
    UPROPERTY()
    TArray<UPalIndividualCharacterHandleReference*> DummyHandleArray;
    
    UPROPERTY()
    TArray<FPalDimensionPalStorageSaveParameter> CurrentPageData;
    
public:
    UPalUIDImensionPalStorageList();

    UFUNCTION(BlueprintCallable)
    void Setup(const FGuid& OpenLockerConcreteModelInstanceId);
    
    UFUNCTION(BlueprintCallable)
    void RequestUpdatePage(int32 NewPageNum);
    
    UFUNCTION(BlueprintCallable)
    void RefreshPage();
    
protected:
    UFUNCTION()
    void OnUpdatePageData(const TArray<FPalDimensionPalStorageSaveParameter>& NewPageData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdatedPageNum_BP(int32 NewPageNum);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdatedPageData_BP(const TArray<FPalDimensionPalStorageSaveParameter>& NewPageData);
    
    UFUNCTION()
    void OnUpdateCurrentPageNum(int32 NewPageNum);
    
    UFUNCTION()
    void OnSortedLocker();
    
public:
    UFUNCTION(BlueprintPure)
    bool GetSlots(TArray<UPalIndividualCharacterSlot*>& OutSlots) const;
    
    UFUNCTION(BlueprintPure)
    bool GetDPSContainerId(FPalContainerId& OutID) const;
    
};

