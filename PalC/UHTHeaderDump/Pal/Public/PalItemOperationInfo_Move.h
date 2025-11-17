#pragma once
#include "CoreMinimal.h"
#include "PalContainerId.h"
#include "PalInstanceID.h"
#include "PalItemId.h"
#include "PalItemSlotId.h"
#include "PalItemOperationInfo_Move.generated.h"

USTRUCT(BlueprintType)
struct FPalItemOperationInfo_Move {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FPalInstanceID ExecutorIndividualId;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TArray<FPalItemId> ItemIds;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TArray<FPalItemSlotId> FromSlotIds;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FPalContainerId ToContainerId;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TArray<FPalItemSlotId> ToSlotIds;
    
    PAL_API FPalItemOperationInfo_Move();
};

