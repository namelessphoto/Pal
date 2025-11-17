#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Templates/SubclassOf.h"
#include "PalMapObjectPlayerBedParameterComponent.generated.h"

class UPalActionBase;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectPlayerBedParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalActionBase> SleepPlayerBedActionClass;
    
    UPROPERTY(EditDefaultsOnly)
    FVector SleepPlayerLocationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator SleepPlayerRotatorOffset;
    
    UPalMapObjectPlayerBedParameterComponent(const FObjectInitializer& ObjectInitializer);

};

