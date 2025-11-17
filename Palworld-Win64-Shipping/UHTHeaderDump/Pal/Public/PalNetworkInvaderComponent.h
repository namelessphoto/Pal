#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalIncidentBroadcastParameter.h"
#include "PalNetworkInvaderComponent.generated.h"

class APalNPC;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalNetworkInvaderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkInvaderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestRecruitPal(APalNPC* NPC);
    
    UFUNCTION(Client, Reliable)
    void OnInvaderStart(const FPalIncidentBroadcastParameter& Parameter);
    
    UFUNCTION(Client, Reliable)
    void OnInvaderEnd(const FPalIncidentBroadcastParameter& Parameter);
    
    UFUNCTION(Client, Reliable)
    void OnInvaderArrived(const FPalIncidentBroadcastParameter& Parameter);
    
};

