#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampModuleTransportItemTransportPriority.h"
#include "EPalBaseCampModuleTransportItemTransportableItemExtraType.h"
#include "EPalItemTypeA.h"
#include "EPalItemTypeB.h"
#include "PalStaticItemIdAndNum.h"
#include "PalBaseCampModuleTransportItemRequirement.generated.h"

USTRUCT()
struct FPalBaseCampModuleTransportItemRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalBaseCampModuleTransportItemTransportPriority Priority;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalStaticItemIdAndNum> ItemInfo;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<EPalItemTypeA> ItemTypeA;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<EPalItemTypeB> ItemTypeB;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<EPalBaseCampModuleTransportItemTransportableItemExtraType> ItemExtraTypes;
    
    PAL_API FPalBaseCampModuleTransportItemRequirement();
};

