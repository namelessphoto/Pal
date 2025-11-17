#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "CharacterParameterRepInfo.h"
#include "FastCharacterParameterRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FFastCharacterParameterRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    TArray<FCharacterParameterRepInfo> Items;
    
    PAL_API FFastCharacterParameterRepInfoArray();
};

