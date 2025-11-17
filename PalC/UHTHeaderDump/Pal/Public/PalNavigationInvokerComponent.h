#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavigationInvokerComponent -FallbackName=NavigationInvokerComponent
#include "FlagContainer.h"
#include "PalNavigationInvokerComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNavigationInvokerComponent : public UNavigationInvokerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bIsAutoActivateInvoker;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsWaitWorldPartition;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FIntPoint AreaBelongTo;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer IsDisableInvorkerFlag;
    
public:
    UPalNavigationInvokerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDisableInvorkerFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintPure)
    bool IsDisableInvorker() const;
    
    UFUNCTION(BlueprintPure)
    bool GetDisableInvorkerFlag(FName flagName) const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateInvoker();
    
    UFUNCTION(BlueprintCallable)
    void ActivateInvoker();
    
};

