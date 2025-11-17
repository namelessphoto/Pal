#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalGroupType.h"
#include "EPalInvaderType.h"
#include "PalIndividualCharacterCacheParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalIndividualCharacterCacheParameter {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid GroupId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bSleeping;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bContinueSleepingUntilFullRecovery;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FGuid InvaderTargetBaseCampId;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    EPalInvaderType InvaderType;
    
    UPROPERTY()
    bool bIsInArena;
    
    UPROPERTY()
    float ArenaDamageRate;
    
    UPROPERTY()
    int32 OverrideLevel;
    
    UPROPERTY(Transient)
    EPalGroupType GroupType;
    
    PAL_API FPalIndividualCharacterCacheParameter();
};

