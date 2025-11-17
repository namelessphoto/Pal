#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalCoopSkillSearchResultParameter.h"
#include "PalCoopSkillSearchLocationRegister.generated.h"

UCLASS()
class UPalCoopSkillSearchLocationRegister : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    TArray<FGuid> RegisteredLocationIds;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FGuid, float> RegisteredLocationElapsedSec;
    
    UPROPERTY(VisibleAnywhere)
    float LocationDisplayTimeSec;
    
public:
    UPalCoopSkillSearchLocationRegister();

    UFUNCTION()
    void UnregisterMapObjectLocationsFromCompass(const FGuid& guiid);
    
    UFUNCTION()
    void RegisterMapObjectLocationsToCompass(const FPalCoopSkillSearchResultParameter& ResultParameter);
    
};

