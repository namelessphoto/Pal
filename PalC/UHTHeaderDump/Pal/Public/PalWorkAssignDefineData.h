#pragma once
#include "CoreMinimal.h"
#include "EPalActionType.h"
#include "EPalElementType.h"
#include "EPalGenusCategoryType.h"
#include "EPalSizeType.h"
#include "EPalTribeID.h"
#include "EPalWorkSuitability.h"
#include "EPalWorkType.h"
#include "PalWorkAssignDefineData.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkAssignDefineData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<EPalGenusCategoryType> GenusCategories;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<EPalElementType> ElementTypes;
    
    UPROPERTY(EditDefaultsOnly)
    EPalWorkSuitability WorkSuitability;
    
    UPROPERTY(EditDefaultsOnly)
    int32 WorkSuitabilityRank;
    
    UPROPERTY(EditDefaultsOnly)
    bool bPlayerWorkable;
    
    UPROPERTY(EditDefaultsOnly)
    bool bBaseCampWorkerWorkable;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<EPalTribeID> WorkableTribeIDs;
    
    UPROPERTY(EditDefaultsOnly)
    EPalSizeType WorkableSizeMin;
    
    UPROPERTY(EditDefaultsOnly)
    EPalSizeType WorkableSizeMax;
    
    UPROPERTY(EditDefaultsOnly)
    EPalWorkType WorkType;
    
    UPROPERTY(EditDefaultsOnly)
    EPalActionType ActionType;
    
    UPROPERTY(EditDefaultsOnly)
    int32 WorkerMaxNum;
    
    UPROPERTY(EditDefaultsOnly)
    float AffectSanityValue;
    
    UPROPERTY(EditDefaultsOnly)
    float AffectFullStomachValue;
    
    PAL_API FPalWorkAssignDefineData();
};

