#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalStaticItemIdAndNum.h"
#include "PalBaseCampModuleTransportItemTargetReservedInfo.generated.h"

USTRUCT()
struct FPalBaseCampModuleTransportItemTargetReservedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalStaticItemIdAndNum> ItemInfos;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid RequiredConcreteModelId;
    
    PAL_API FPalBaseCampModuleTransportItemTargetReservedInfo();
};

