#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalWorkSuitability.h"
#include "PalInstanceID.h"
#include "PalUIWorkSuitabilitySettingModel.generated.h"

class UPalIndividualCharacterContainer;

UCLASS(BlueprintType)
class PAL_API UPalUIWorkSuitabilitySettingModel : public UObject {
    GENERATED_BODY()
public:
    UPalUIWorkSuitabilitySettingModel();

    UFUNCTION(BlueprintCallable)
    void RequestChangeWorkSuitability(const FPalInstanceID& TargetIndividualId, const EPalWorkSuitability WorkSuitability, const bool bOn);
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeBaseCampBattle(const FPalInstanceID& TargetIndividualId, const bool bOn);
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterContainer* GetTargetBaseCampWorkerCharacterContainer() const;
    
};

