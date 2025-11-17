#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Templates/SubclassOf.h"
#include "PalSwimmingMotionTester.generated.h"

class APalCharacter;

UCLASS()
class APalSwimmingMotionTester : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<APalCharacter> MotionCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Transient)
    float Buoyancy;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    float InWaterRate;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool DisableApply;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    APalCharacter* MotionTestCharacter;
    
public:
    APalSwimmingMotionTester(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ShowDialog(const FString& Message);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ApplyBuoyancyParameter();
    
};

