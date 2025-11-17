#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPlayerPlatform.h"
#include "PalPlayerPlatformInfoObject.generated.h"

UCLASS()
class UPalPlayerPlatformInfoObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Replicated, Transient)
    FGuid RequestGUID;
    
    UPROPERTY(Replicated, Transient)
    FGuid PlayerId;
    
    UPROPERTY(Replicated, Transient)
    EPlayerPlatform Platform;
    
    UPROPERTY(Replicated, Transient)
    FString AccountID;
    
    UPROPERTY(Replicated, Transient)
    bool IsListenServerHost;
    
    UPalPlayerPlatformInfoObject();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

