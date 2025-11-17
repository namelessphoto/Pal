#pragma once
#include "CoreMinimal.h"
#include "EPalInteractiveObjectActionType.h"
#include "PalMapObjectConcreteModelExtraFunctionBase.h"
#include "PalStageInstanceId.h"
#include "PalMapObjectConcreteModelExtraFunctionEnterRoom.generated.h"

class UDataLayerAsset;

UCLASS(BlueprintType)
class PAL_API UPalMapObjectConcreteModelExtraFunctionEnterRoom : public UPalMapObjectConcreteModelExtraFunctionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    EPalInteractiveObjectActionType ActionType;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalStageInstanceId StageInstanceId;
    
public:
    UPalMapObjectConcreteModelExtraFunctionEnterRoom();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Setup_ServerInternal(const EPalInteractiveObjectActionType InActionType, UDataLayerAsset* InDataLayerAsset);
    
};

