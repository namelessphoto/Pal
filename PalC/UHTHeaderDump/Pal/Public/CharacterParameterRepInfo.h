#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "PalInstanceID.h"
#include "CharacterParameterRepInfo.generated.h"

class UPalIndividualCharacterParameter;

USTRUCT(BlueprintType)
struct FCharacterParameterRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    FGuid RequestGUID;
    
    UPROPERTY(VisibleInstanceOnly)
    FPalInstanceID ID;
    
    UPROPERTY(VisibleInstanceOnly)
    UPalIndividualCharacterParameter* Parameter;
    
    PAL_API FCharacterParameterRepInfo();
};

