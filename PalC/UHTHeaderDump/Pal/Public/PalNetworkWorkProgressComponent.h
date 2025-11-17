#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalWorkRequestResult.h"
#include "PalNetArchive.h"
#include "PalNetworkWorkProgressComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkWorkProgressComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkWorkProgressComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(Reliable, Server)
    void RequestStartPlayerWork_ToServer(const FGuid& RequestID, const FGuid& WorkProgressId);
    
    UFUNCTION(Reliable, Server)
    void RequestEndPlayerWork_ToServer(const FGuid& WorkId);
    
    UFUNCTION(Client, Reliable)
    void ReceiveStartPlayerWork_ToRequestClient(const FGuid& RequestID, const EPalWorkRequestResult Result);
    
public:
    UFUNCTION(Client, Reliable)
    void AddCompleteBuildWorkLog(const FPalNetArchive& Archive);
    
};

