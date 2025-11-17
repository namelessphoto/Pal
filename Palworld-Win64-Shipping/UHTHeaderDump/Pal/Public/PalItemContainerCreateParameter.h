#pragma once
#include "CoreMinimal.h"
#include "PalItemAndNum.h"
#include "PalItemContainerBelongInfo.h"
#include "PalItemPermission.h"
#include "PalItemContainerCreateParameter.generated.h"

USTRUCT()
struct FPalItemContainerCreateParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 SlotNum;
    
    UPROPERTY()
    FPalItemPermission Permission;
    
    UPROPERTY()
    FPalItemContainerBelongInfo BelongInfo;
    
    UPROPERTY()
    TArray<FPalItemAndNum> InitialItems;
    
    PAL_API FPalItemContainerCreateParameter();
};

