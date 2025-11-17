#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalVisitorFormationMoveInitParameter.h"
#include "PalVisitorFormationMoveModule.generated.h"

class APalAIController;
class APalCharacter;

UCLASS(BlueprintType)
class PAL_API UPalVisitorFormationMoveModule : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    APalAIController* AIController;
    
    UPROPERTY(Transient)
    APalCharacter* LeaderCharacter;
    
public:
    UPalVisitorFormationMoveModule();

    UFUNCTION(BlueprintCallable)
    void TickModule(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetLeaderGoalArrived(bool bIsArrived);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const FPalVisitorFormationMoveInitParameter& Parameter);
    
    UFUNCTION(BlueprintPure)
    FVector GetMoveLocation() const;
    
};

