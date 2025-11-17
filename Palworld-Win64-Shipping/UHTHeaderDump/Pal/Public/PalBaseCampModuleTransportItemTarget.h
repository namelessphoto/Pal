#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalBaseCampModuleTransportItemTargetReservedInfo.h"
#include "PalInstanceID.h"
#include "PalBaseCampModuleTransportItemTarget.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampModuleTransportItemTarget {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bTargetRemoved;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FPalInstanceID, FPalBaseCampModuleTransportItemTargetReservedInfo> ReservedInfoMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bNotExistMovePath;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bEnableObtainAnywhere;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FName, int32> NotReservedItemInfoMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid WorkId;
    
    PAL_API FPalBaseCampModuleTransportItemTarget();
};

