#pragma once
#include "CoreMinimal.h"
#include "PalContainerInfo.h"
#include "PalItemContainerBelongInfo.h"
#include "PalItemPermission.h"
#include "PalItemContainerInfo.generated.h"

USTRUCT()
struct FPalItemContainerInfo : public FPalContainerInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPalItemContainerBelongInfo BelongInfo;
    
    UPROPERTY()
    FPalItemPermission Permission;
    
    PAL_API FPalItemContainerInfo();
};

