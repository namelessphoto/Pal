#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalMapObjectDefenseType.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectDefenseModelBase.generated.h"

UCLASS(Abstract)
class UPalMapObjectDefenseModelBase : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    UPalMapObjectDefenseModelBase();

    UFUNCTION(BlueprintPure)
    FVector GetLocation() const;
    
    UFUNCTION(BlueprintPure)
    EPalMapObjectDefenseType GetDefenseType() const;
    
};

