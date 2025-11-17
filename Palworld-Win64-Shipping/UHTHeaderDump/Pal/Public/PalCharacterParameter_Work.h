#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "FlagContainer.h"
#include "PalCharacterParameter_Work.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterParameter_Work {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid MapObjectInstanceIdApproachTo;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bApproachToAssignedLocation;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float RepairRequiredWorkAmount;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer NotWorkableFlag;
    
public:
    PAL_API FPalCharacterParameter_Work();
};

