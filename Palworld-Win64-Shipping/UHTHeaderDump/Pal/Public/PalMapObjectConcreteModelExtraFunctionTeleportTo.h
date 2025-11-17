#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalInteractiveObjectActionType.h"
#include "PalMapObjectConcreteModelExtraFunctionBase.h"
#include "PalMapObjectConcreteModelExtraFunctionTeleportTo.generated.h"

UCLASS(BlueprintType)
class PAL_API UPalMapObjectConcreteModelExtraFunctionTeleportTo : public UPalMapObjectConcreteModelExtraFunctionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    EPalInteractiveObjectActionType ActionType;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid LocationIdTeleportTo;
    
public:
    UPalMapObjectConcreteModelExtraFunctionTeleportTo();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Setup_ServerInternal(const EPalInteractiveObjectActionType InActionType, const FGuid& InLocationIdTeleportTo);
    
};

