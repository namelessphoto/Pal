#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AINoiseEvent.h"
#include "AISense.h"
#include "AISense_Hearing.generated.h"

class AActor;
class UObject;

UCLASS(Config=Game)
class AIMODULE_API UAISense_Hearing : public UAISense {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FAINoiseEvent> NoiseEvents;
    
    UPROPERTY(Config)
    float SpeedOfSoundSq;
    
public:
    UAISense_Hearing();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReportNoiseEvent(UObject* WorldContextObject, FVector NoiseLocation, float Loudness, AActor* Instigator, float MaxRange, FName Tag);
    
};

