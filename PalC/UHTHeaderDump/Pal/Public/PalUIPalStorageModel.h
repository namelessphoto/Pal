#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalItemSlotPressType.h"
#include "PalContainerId.h"
#include "PalUIPalStorageModel.generated.h"

class UPalUICharacterDisplayModel;
class UPalUIPalStorageModel;

UCLASS(BlueprintType)
class UPalUIPalStorageModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatePageDelegate, UPalUIPalStorageModel*, Model);
    
    UPROPERTY(BlueprintAssignable)
    FUpdatePageDelegate OnUpdatePageDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 CurrentPageIndex;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    UPalUICharacterDisplayModel* DisplayModel;
    
public:
    UPalUIPalStorageModel();

    UFUNCTION(BlueprintCallable)
    void ToPrevPage();
    
    UFUNCTION(BlueprintCallable)
    void ToPage(const int32 pageIndex, const bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void ToNextPage();
    
    UFUNCTION(BlueprintCallable)
    void SelectHandleSlot(const int32 DisplayIndex, const EPalItemSlotPressType PressType);
    
private:
    UFUNCTION()
    void OnOperatedByOuter();
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetWholePageCount() const;
    
    UFUNCTION(BlueprintPure)
    FPalContainerId GetTargetContainerId() const;
    
    UFUNCTION(BlueprintPure)
    bool CanMoveToPrev() const;
    
    UFUNCTION(BlueprintPure)
    bool CanMoveToNext() const;
    
};

