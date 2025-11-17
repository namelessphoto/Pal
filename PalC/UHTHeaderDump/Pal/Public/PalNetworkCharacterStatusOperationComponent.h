#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalCharacterStatusOperationName.h"
#include "EPalCharacterStatusOperationResult.h"
#include "PalCharacterStatusOperationResultDelegateDelegate.h"
#include "PalInstanceID.h"
#include "PalStatusAndRank.h"
#include "PalNetworkCharacterStatusOperationComponent.generated.h"

class APalCharacter;
class UObject;
class UPalIndividualCharacterHandle;
class UPalNetworkCharacterStatusOperationComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalNetworkCharacterStatusOperationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPalCharacterStatusOperationResultDelegate OnReceiveRequestResultDelegate;
    
    UPalNetworkCharacterStatusOperationComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestReviveCharacterFromDying_ToServer(APalCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestReviveCharacterFromDying(APalCharacter* Character);
    
private:
    UFUNCTION(Reliable, Server)
    void RequestPlayerStatusUp_ToServer(int32 ToRank);
    
    UFUNCTION(Reliable, Server)
    void RequestPlayerStatusClear_ToServer();
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestPlayerRankClear();
    
    UFUNCTION(BlueprintCallable)
    void RequestPlayerRankAdd(const int32 ToRank);
    
private:
    UFUNCTION(Reliable, Server)
    void RequestOtomoStatusPointClearAll_ToServer(const FPalInstanceID& IndividualId);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestOtomoStatusPointClearAll(const UPalIndividualCharacterHandle* IndividualHandle);
    
private:
    UFUNCTION(Reliable, Server)
    void RequestOtomoStatusPointClear_ToServer(const FPalInstanceID& IndividualId, const EPalCharacterStatusOperationName StatusName);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestOtomoStatusPointClear(const UPalIndividualCharacterHandle* IndividualHandle, const EPalCharacterStatusOperationName StatusName);
    
private:
    UFUNCTION(Reliable, Server)
    void RequestOtomoStatusPointAdd_ToServer(const FPalInstanceID& IndividualId, const TArray<FPalStatusAndRank>& ToStatusRank);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestOtomoStatusPointAdd(const UPalIndividualCharacterHandle* IndividualHandle, const TMap<EPalCharacterStatusOperationName, int32> ToStatusRank);
    
private:
    UFUNCTION(Client, Reliable)
    void ReceiveOperationResult_ToClient(const EPalCharacterStatusOperationResult Result);
    
public:
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalNetworkCharacterStatusOperationComponent* NetCharacterStatusOperation(const UObject* WorldContextObject);
    
};

