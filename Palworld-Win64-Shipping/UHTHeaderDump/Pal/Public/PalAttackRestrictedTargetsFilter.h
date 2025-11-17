#pragma once
#include "CoreMinimal.h"
#include "EPalAttackTargetsType.h"
#include "PalAttackFilter.h"
#include "PalAttackRestrictedTargetsFilter.generated.h"

UCLASS(EditInlineNew)
class PAL_API UPalAttackRestrictedTargetsFilter : public UPalAttackFilter {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<EPalAttackTargetsType> AttackTargetsTypeList;
    
    UPalAttackRestrictedTargetsFilter();

};

