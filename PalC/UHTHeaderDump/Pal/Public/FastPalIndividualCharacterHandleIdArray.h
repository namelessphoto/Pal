#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PalIndividualCharacterHandleId.h"
#include "FastPalIndividualCharacterHandleIdArray.generated.h"

USTRUCT(BlueprintType)
struct FFastPalIndividualCharacterHandleIdArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    TArray<FPalIndividualCharacterHandleId> Items;
    
    PAL_API FFastPalIndividualCharacterHandleIdArray();
};

