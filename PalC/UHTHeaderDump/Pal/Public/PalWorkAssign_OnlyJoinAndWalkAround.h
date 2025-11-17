#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalWorkAssign.h"
#include "PalWorkAssign_OnlyJoinAndWalkAround.generated.h"

UCLASS()
class PAL_API UPalWorkAssign_OnlyJoinAndWalkAround : public UPalWorkAssign {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FVector TargetLocation;
    
public:
    UPalWorkAssign_OnlyJoinAndWalkAround();

};

