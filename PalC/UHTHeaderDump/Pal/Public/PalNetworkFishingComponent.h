#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalFishingResultType.h"
#include "EPalFishingRodState.h"
#include "PalNetworkFishingComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalNetworkFishingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkFishingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Reliable, Server)
    void SuccessCatchBattle_ToServer();
    
    UFUNCTION(Reliable, Server)
    void StartFishing_ToServer();
    
    UFUNCTION(Reliable, Server)
    void StartCatchBattle_ToServer(const FGuid& SpotAreaId, const FGuid& TargetFishShadowId);
    
    UFUNCTION(Reliable, Server)
    void SetRodState_ToServer(EPalFishingRodState State);
    
    UFUNCTION(Reliable, Server)
    void SetFloatLocation_ToServer(FVector FloatLocation);
    
    UFUNCTION(Reliable, Server)
    void RequestUseBait_ToServer(const FGuid& RequestPlayerUId, const FName BaitItemId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestRecordFirstFishing_ToServer();
    
    UFUNCTION(Reliable, Server)
    void RequestObtainCatchCharacter_ToServer(const FGuid& SpotId, const FGuid& FishShadowId);
    
    UFUNCTION(Reliable, Server)
    void RequestFishing_ToServer(const FGuid& SpotId, const FGuid& FishShadowId);
    
    UFUNCTION(Reliable, Server)
    void RequestEscapeFishShadow_ToServer(const FGuid& SpotId, const FGuid& FishShadowId);
    
    UFUNCTION(Client, Reliable)
    void ReceiveUseBaitResult_ToClient(bool IsSuccess, const FName BaitItemId);
    
    UFUNCTION(Client, Reliable)
    void ReceiveFishingResult_ToClinet(EPalFishingResultType resultType);
    
    UFUNCTION(Client, Reliable)
    void ReceiveEscapeFishShadow_ToClinet(const FGuid& SpotId, const FGuid& FishShadowId);
    
    UFUNCTION(Reliable, Server)
    void FinishCutscene_ToServer();
    
    UFUNCTION(Reliable, Server)
    void FailedCatchBattle_ToServer();
    
    UFUNCTION(Reliable, Server)
    void EndFishing_ToServer();
    
    UFUNCTION(Reliable, Server)
    void EndCatchBattle_ToServer();
    
    UFUNCTION(Reliable, Server)
    void CancelFishing_ToServer();
    
};

