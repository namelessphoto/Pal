#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalBaseCampFunctionModuleBase.h"
#include "PalBaseCampModuleMedical.generated.h"

class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;

UCLASS()
class UPalBaseCampModuleMedical : public UPalBaseCampFunctionModuleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FGuid> ReviveWorkIds;
    
public:
    UPalBaseCampModuleMedical();

protected:
    UFUNCTION()
    void OnReviveCharacter_ServerInternal(UPalIndividualCharacterParameter* IndividualParameter);
    
private:
    UFUNCTION()
    void OnRemovedWorkerInServer(UPalIndividualCharacterHandle* IndividualHandle);
    
};

