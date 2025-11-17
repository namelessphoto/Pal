#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnPingCompleteDelegate.h"
#include "OnPingFailureDelegate.h"
#include "PingIP.generated.h"

class UPingIP;

UCLASS(BlueprintType, Config=Game)
class POCKETPAIRUSER_API UPingIP : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnPingComplete OnPingComplete;
    
    UPROPERTY(BlueprintAssignable)
    FOnPingFailure OnPingFailure;
    
    UPingIP();

    UFUNCTION(BlueprintCallable)
    void SendPing(const FString& ipAddress);
    
    UFUNCTION(BlueprintCallable)
    void PollThread();
    
    UFUNCTION(BlueprintCallable)
    static UPingIP* ConstructPingObject();
    
};

