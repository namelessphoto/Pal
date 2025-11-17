#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalBaseCampModuleTransportItemRequirement.h"
#include "PalBoundsTransform.h"
#include "PalBaseCampModuleTransportItemDepotParameter.generated.h"

USTRUCT()
struct FPalBaseCampModuleTransportItemDepotParameter {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid OwnerMapObjectConcreteModelInstanceId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalBoundsTransform DepotLocalBoundsTransform;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalBaseCampModuleTransportItemRequirement Requirement;
    
    PAL_API FPalBaseCampModuleTransportItemDepotParameter();
};

