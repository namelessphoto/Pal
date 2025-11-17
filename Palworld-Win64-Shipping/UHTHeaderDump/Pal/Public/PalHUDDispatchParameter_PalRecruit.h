#pragma once
#include "CoreMinimal.h"
#include "OnRecruitDelegateDelegate.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalHUDDispatchParameter_PalRecruit.generated.h"

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_PalRecruit : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    FOnRecruitDelegate OnRecruit;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FPalIndividualCharacterSaveParameter PalSaveParameter;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FName CarreerTextId;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<FName> AppealTextIds;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 ContractFee;
    
    UPalHUDDispatchParameter_PalRecruit();

};

