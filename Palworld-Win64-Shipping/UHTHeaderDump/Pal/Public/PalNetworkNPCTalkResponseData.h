#pragma once
#include "CoreMinimal.h"
#include "PalNetworkNPCTalkResponseData.generated.h"

class UPalNPCTalkFlowComponent;

USTRUCT(BlueprintType)
struct FPalNetworkNPCTalkResponseData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UPalNPCTalkFlowComponent* TalkFlowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName OutputPinName;
    
    UPROPERTY(EditAnywhere)
    FName NetworkInvokeName;
    
    PAL_API FPalNetworkNPCTalkResponseData();
};

