#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WordFilterReceiveObject.generated.h"

UCLASS()
class UWordFilterReceiveObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid PlayerUId;
    
    UWordFilterReceiveObject();

    UFUNCTION()
    void ReceivedResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
};

