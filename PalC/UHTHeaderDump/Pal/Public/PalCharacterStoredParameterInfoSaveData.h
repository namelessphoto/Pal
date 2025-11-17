#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "GameDateTime.h"
#include "PalCharacterStoredParameterId.h"
#include "PalIndividualCharacterSaveParameterSaveData.h"
#include "PalInstanceID.h"
#include "PalCharacterStoredParameterInfoSaveData.generated.h"

USTRUCT()
struct FPalCharacterStoredParameterInfoSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    FPalCharacterStoredParameterId ID;
    
    UPROPERTY(VisibleInstanceOnly)
    FPalIndividualCharacterSaveParameterSaveData SaveParameter;
    
    UPROPERTY(VisibleInstanceOnly)
    FGameDateTime StoredAt;
    
    UPROPERTY(VisibleInstanceOnly)
    FGuid LostPlayerUId;
    
    UPROPERTY(VisibleInstanceOnly)
    FPalInstanceID InstanceId;
    
    PAL_API FPalCharacterStoredParameterInfoSaveData();
};

