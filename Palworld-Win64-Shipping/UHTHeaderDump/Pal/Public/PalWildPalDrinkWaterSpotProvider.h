#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalWildPalDrinkWaterSpotProvider.generated.h"

class AActor;
class UPalWildDrinkWaterSpot;

UCLASS(BlueprintType)
class PAL_API UPalWildPalDrinkWaterSpotProvider : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<FGuid, UPalWildDrinkWaterSpot*> DrinkWaterSpotList;
    
public:
    UPalWildPalDrinkWaterSpotProvider();

    UFUNCTION(BlueprintCallable)
    bool RequestReservation(AActor* LeaderPal, FVector WildPalSpawnerCenter, int32 MemberNum, FGuid& OutSpotID);
    
    UFUNCTION(BlueprintCallable)
    UPalWildDrinkWaterSpot* FindSpot(FGuid SpotId);
    
    UFUNCTION(BlueprintCallable)
    void CancelReservation(FGuid SpotId);
    
    UFUNCTION(BlueprintCallable)
    void AddDrinkWaterSpot(FVector ActorLocation, TArray<FVector> GoalLocations);
    
};

