#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalContainerBelongInfo.h"
#include "PalItemContainerBelongInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalItemContainerBelongInfo : public FPalContainerBelongInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid GroupId;
    
    UPROPERTY()
    bool bControllableOthers;
    
    PAL_API FPalItemContainerBelongInfo();
};

