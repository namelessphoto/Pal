#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalUIDismantlingModel.generated.h"

class UPalBaseCampModel;
class UPalItemContainer;

UCLASS(Blueprintable)
class UPalUIDismantlingModel : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    FName BuildObjectId;
    
public:
    UPalUIDismantlingModel();

    UFUNCTION(BlueprintCallable)
    void Setup();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateInventory(UPalItemContainer* Container);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsOutsideBaseCamp() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInsideBaseCampForPlayer() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInsideBaseCamp() const;
    
    UFUNCTION(BlueprintPure)
    UPalBaseCampModel* GetBaseCampModelForPlayer() const;
    
    UFUNCTION(BlueprintPure)
    UPalBaseCampModel* GetBaseCampModel(bool bIncludeForPlayer);
    
    UFUNCTION(BlueprintCallable)
    void FinishDismantling();
    
    UFUNCTION(BlueprintCallable)
    void Dispose();
    
    UFUNCTION(BlueprintCallable)
    void DismantleObject(const bool bContinuously);
    
};

