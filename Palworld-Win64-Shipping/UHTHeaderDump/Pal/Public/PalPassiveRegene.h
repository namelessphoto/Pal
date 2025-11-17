#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalPassiveSkillEffectType.h"
#include "PalPassiveRegene.generated.h"

UCLASS()
class UPalPassiveRegene : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Interval;
    
    UPROPERTY()
    int32 RemainingTime;
    
    UPROPERTY()
    float Value;
    
    UPROPERTY()
    EPalPassiveSkillEffectType EffectType;
    
    UPROPERTY()
    FGuid PassiveId;
    
    UPalPassiveRegene();

};

