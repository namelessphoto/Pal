#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalAnimNotifyParameterComponent.generated.h"

class UPalAnimNotifyDynamicParameterBase;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalAnimNotifyParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<FString, UPalAnimNotifyDynamicParameterBase*> DynamicParameterMap;
    
public:
    UPalAnimNotifyParameterComponent(const FObjectInitializer& ObjectInitializer);

};

