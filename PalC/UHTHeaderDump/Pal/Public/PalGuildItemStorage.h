#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalGuildItemStorage.generated.h"

class UPalGuildItemStorage;
class UPalItemContainer;

UCLASS()
class PAL_API UPalGuildItemStorage : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalGuildItemStorage*, Self);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfDelegate OnUpdateItemContainerDelegate;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_ItemContainer)
    UPalItemContainer* ItemContainer;
    
public:
    UPalGuildItemStorage();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_ItemContainer();
    
};

