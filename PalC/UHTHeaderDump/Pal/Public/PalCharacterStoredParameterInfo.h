#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "GameDateTime.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalInstanceID.h"
#include "PalCharacterStoredParameterInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterStoredParameterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    FPalIndividualCharacterSaveParameter SaveParameter;
    
    UPROPERTY(VisibleInstanceOnly)
    FGameDateTime StoredAt;
    
    UPROPERTY(VisibleInstanceOnly)
    FGuid LostPlayerUId;
    
    UPROPERTY(VisibleInstanceOnly)
    FPalInstanceID InstanceId;
    
    PAL_API FPalCharacterStoredParameterInfo();
};

