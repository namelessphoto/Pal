#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=IpNetDriver -FallbackName=IpNetDriver
#include "NetDriverEOSBase.generated.h"

UCLASS(NonTransient)
class SOCKETSUBSYSTEMEOS_API UNetDriverEOSBase : public UIpNetDriver {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bIsPassthrough;
    
    UPROPERTY(Config)
    bool bIsUsingP2PSockets;
    
    UNetDriverEOSBase();

};

