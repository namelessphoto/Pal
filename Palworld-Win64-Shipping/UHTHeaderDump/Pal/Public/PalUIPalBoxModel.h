#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalItemSlotPressType.h"
#include "PalUIPalBoxModel.generated.h"

class UPalIndividualCharacterSlot;
class UPalUIPalBoxModel;

UCLASS(BlueprintType)
class UPalUIPalBoxModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatePageDelegate, UPalUIPalBoxModel*, Model);
    
    UPROPERTY(BlueprintAssignable)
    FUpdatePageDelegate OnUpdatePageDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 CurrentPageIndex;
    
public:
    UPalUIPalBoxModel();

    UFUNCTION(BlueprintCallable)
    void ToPrevPage();
    
    UFUNCTION(BlueprintCallable)
    void ToNextPage();
    
    UFUNCTION(BlueprintCallable)
    void SelectHandleSlot(const int32 DisplayIndex, const EPalItemSlotPressType PressType);
    
    UFUNCTION(BlueprintPure)
    int32 GetWholePageCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSlotCountInPage() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UPalIndividualCharacterSlot*> GetCurrentPageSlots() const;
    
};

