#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalIndividualCharacterSaveParameter.h"
#include "PalIndividualCharacterSaveParameterObject.generated.h"

UCLASS()
class UPalIndividualCharacterSaveParameterObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPalIndividualCharacterSaveParameter SaveParameter;
    
    UPalIndividualCharacterSaveParameterObject();

};

