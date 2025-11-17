#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalActionType.h"
#include "EPalElementType.h"
#include "EPalGenusCategoryType.h"
#include "EPalSizeType.h"
#include "EPalTribeID.h"
#include "EPalWorkSuitability.h"
#include "EPalWorkType.h"
#include "PalMapObjectAssignData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectAssignData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalGenusCategoryType GenusCategory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalElementType ElementType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalWorkSuitability WorkSuitability;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 WorkSuitabilityRank;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPlayerWorkable;
    
    UPROPERTY(EditDefaultsOnly)
    bool bBaseCampWorkerWorkable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<EPalTribeID> WorkableTribeIDs;
    
    UPROPERTY(EditDefaultsOnly)
    EPalSizeType WorkableSizeMin;
    
    UPROPERTY(EditDefaultsOnly)
    EPalSizeType WorkableSizeMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalWorkType WorkType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalActionType WorkActionType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 WorkerMaxNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AffectSanityValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AffectFullStomachValue;
    
    PAL_API FPalMapObjectAssignData();
};

