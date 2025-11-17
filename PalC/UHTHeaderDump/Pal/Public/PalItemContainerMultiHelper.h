#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalStaticItemIdAndNum.h"
#include "PalItemContainerMultiHelper.generated.h"

class UPalItemContainer;
class UPalItemContainerMultiHelper;

UCLASS(BlueprintType)
class UPalItemContainerMultiHelper : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateContentDelegate, UPalItemContainerMultiHelper*, Self);
    
    UPROPERTY(BlueprintAssignable)
    FUpdateContentDelegate OnUpdateContentDelegate;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_Containers)
    TArray<UPalItemContainer*> Containers;
    
public:
    UPalItemContainerMultiHelper();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnUpdateContainerContent(UPalItemContainer* Container);
    
protected:
    UFUNCTION()
    void OnRep_Containers();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsExistItems(const TArray<FPalStaticItemIdAndNum>& StaticItemInfos);
    
    UFUNCTION(BlueprintPure)
    void FindByStaticItemIds(const TArray<FName>& StaticItemIds, TArray<FPalStaticItemIdAndNum>& StaticItemInfos);
    
    UFUNCTION(BlueprintPure)
    void FindByStaticItemId(const FName StaticItemId, FPalStaticItemIdAndNum& StaticItemInfo);
    
};

