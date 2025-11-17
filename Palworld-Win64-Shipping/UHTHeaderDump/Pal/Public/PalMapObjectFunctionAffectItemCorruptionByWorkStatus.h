#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectFunctionAffectedByWorkStatusBase.h"
#include "PalMapObjectFunctionAffectItemCorruptionByWorkStatus.generated.h"

class UPalItemContainer;

UCLASS()
class PAL_API UPalMapObjectFunctionAffectItemCorruptionByWorkStatus : public UPalMapObjectFunctionAffectedByWorkStatusBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bWorkableOnlyExistsCorruptibleItem;
    
public:
    UPalMapObjectFunctionAffectItemCorruptionByWorkStatus();

private:
    UFUNCTION()
    void OnUpdateContainerContent(UPalItemContainer* Container);
    
};

