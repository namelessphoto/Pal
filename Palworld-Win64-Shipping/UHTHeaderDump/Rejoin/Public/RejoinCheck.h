#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ERejoinStatus.h"
#include "RejoinCheck.generated.h"

UCLASS(Abstract)
class REJOIN_API URejoinCheck : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ERejoinStatus LastKnownStatus;
    
private:
    UPROPERTY()
    bool bRejoinAfterCheck;
    
    UPROPERTY()
    bool bAttemptingRejoin;
    
public:
    URejoinCheck();

};

