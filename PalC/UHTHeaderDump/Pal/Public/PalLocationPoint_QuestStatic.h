#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalLocationPoint_QuestBase.h"
#include "PalLocationPoint_QuestStatic.generated.h"

UCLASS()
class PAL_API UPalLocationPoint_QuestStatic : public UPalLocationPoint_QuestBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FVector Location;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float Range;
    
public:
    UPalLocationPoint_QuestStatic();

protected:
    UFUNCTION(BlueprintPure)
    float GetRange() const;
    
};

