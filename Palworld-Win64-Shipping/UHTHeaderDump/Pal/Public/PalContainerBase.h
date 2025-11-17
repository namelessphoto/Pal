#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalContainerOperationRestrictType.h"
#include "PalContainerId.h"
#include "PalContainerBase.generated.h"

UCLASS(Abstract, BlueprintType)
class UPalContainerBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDisposeContainerDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FDisposeContainerDelegate OnDisposeContainerDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleInstanceOnly)
    FPalContainerId ID;
    
    UPROPERTY(Replicated, VisibleInstanceOnly)
    EPalContainerOperationRestrictType OperationRestrictType;
    
    UPROPERTY(VisibleInstanceOnly)
    bool bIgnoreOnSave;
    
public:
    UPalContainerBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintPure)
    FPalContainerId GetId() const;
    
};

