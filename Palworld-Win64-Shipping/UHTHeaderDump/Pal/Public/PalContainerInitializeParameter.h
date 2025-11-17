#pragma once
#include "CoreMinimal.h"
#include "EPalContainerOperationRestrictType.h"
#include "PalContainerId.h"
#include "PalContainerInitializeParameter.generated.h"

USTRUCT()
struct FPalContainerInitializeParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPalContainerId ID;
    
    UPROPERTY()
    int32 SlotNum;
    
    UPROPERTY()
    bool bReferenceSlot;
    
    UPROPERTY()
    bool bIgnoreOnSave;
    
    UPROPERTY()
    EPalContainerOperationRestrictType OperationRestrictType;
    
    PAL_API FPalContainerInitializeParameter();
};

