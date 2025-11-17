#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "FastPalIndividualCharacterHandleIdArray.h"
#include "PalGroupIndividualCharacterHandleIdArray.generated.h"

UCLASS()
class UPalGroupIndividualCharacterHandleIdArray : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FFastPalIndividualCharacterHandleIdArray IndividualCharacterHandleIds;
    
public:
    UPalGroupIndividualCharacterHandleIdArray();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

