#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "PalInstanceID.h"
#include "PalIndividualCharacterHandleId.generated.h"

USTRUCT()
struct FPalIndividualCharacterHandleId : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalInstanceID HandleId;
    
    PAL_API FPalIndividualCharacterHandleId();
};

