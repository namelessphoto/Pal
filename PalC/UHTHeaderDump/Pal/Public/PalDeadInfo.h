#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalDeadType.h"
#include "EPalWazaID.h"
#include "PalDeadInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPalDeadInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 LastDamage;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* LastAttacker;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* SelfActor;
    
    UPROPERTY(BlueprintReadOnly)
    FVector BlowVelocity;
    
    UPROPERTY(BlueprintReadOnly)
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadOnly)
    EPalWazaID SelfDestructWaza;
    
    UPROPERTY(BlueprintReadOnly)
    EPalDeadType DeadType;
    
    PAL_API FPalDeadInfo();
};

