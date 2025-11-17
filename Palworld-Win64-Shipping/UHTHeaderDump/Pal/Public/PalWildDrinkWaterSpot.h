#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalWildDrinkWaterSpot.generated.h"

class AActor;

UCLASS(BlueprintType)
class PAL_API UPalWildDrinkWaterSpot : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    bool IsReserved;
    
    UPROPERTY(Transient)
    FVector SpotActorLocation;
    
    UPROPERTY(Transient)
    TArray<FVector> PalGoalLocations;
    
public:
    UPalWildDrinkWaterSpot();

    UFUNCTION(BlueprintCallable)
    bool SetAssignPointToMember(TArray<AActor*> MemberList);
    
    UFUNCTION(BlueprintPure)
    FVector GetActorLocation();
    
};

