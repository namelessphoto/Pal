#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalDeathPenaltyList.h"
#include "PalDeathPenaltyManager.generated.h"

class APalPlayerCharacter;

UCLASS(BlueprintType)
class PAL_API UPalDeathPenaltyManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float StageDeathPenaltyRayStartHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float StageDeathPenaltyChestRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float StageDeathPenaltySpaceWidth;
    
    UPROPERTY(EditDefaultsOnly)
    float StageDeathPenaltySpaceDepth;
    
    UPROPERTY(Transient)
    TMap<FGuid, FPalDeathPenaltyList> DeathPenaMap;
    
public:
    UPalDeathPenaltyManager();

    UFUNCTION(BlueprintCallable)
    void DropDeathPenaltyChest(APalPlayerCharacter* Player);
    
};

