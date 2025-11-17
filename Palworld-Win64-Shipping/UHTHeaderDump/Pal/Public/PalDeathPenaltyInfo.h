#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalItemAndNum.h"
#include "PalDeathPenaltyInfo.generated.h"

USTRUCT()
struct FPalDeathPenaltyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FGuid DeathPenaID;
    
    UPROPERTY(Transient)
    FGuid DeathPlayerID;
    
    UPROPERTY(Transient)
    FVector PlayerDeathLocation;
    
    UPROPERTY(Transient)
    FVector DropItemLocation;
    
    UPROPERTY(Transient)
    TArray<FPalItemAndNum> DropItemList;
    
    PAL_API FPalDeathPenaltyInfo();
};

