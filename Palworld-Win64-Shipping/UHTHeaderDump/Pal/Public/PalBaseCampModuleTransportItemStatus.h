#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalBaseCampModuleTransportItemDirection.h"
#include "PalBaseCampModuleTransportItemRequirement.h"
#include "PalBoundsTransform.h"
#include "PalInstanceID.h"
#include "PalBaseCampModuleTransportItemStatus.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampModuleTransportItemStatus {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalBaseCampModuleTransportItemRequirement Requirement;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bDepot;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalBoundsTransform DepotLocalBoundsTransform;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid WorkId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FPalInstanceID, FPalBaseCampModuleTransportItemDirection> DirectionMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FName, int32> NotSatisfiedRequirementItemInfoMap;
    
    PAL_API FPalBaseCampModuleTransportItemStatus();
};

