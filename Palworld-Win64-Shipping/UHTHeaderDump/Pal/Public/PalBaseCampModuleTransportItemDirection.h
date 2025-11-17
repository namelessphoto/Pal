#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalBaseCampModuleTransportItemDirection.generated.h"

USTRUCT()
struct FPalBaseCampModuleTransportItemDirection {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid RequiredMapObjectConcreteModelInstanceId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid TransportTargetMapObjectConcreteModelInstanceId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 MaxItemStackNum;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bRetunring;
    
    PAL_API FPalBaseCampModuleTransportItemDirection();
};

