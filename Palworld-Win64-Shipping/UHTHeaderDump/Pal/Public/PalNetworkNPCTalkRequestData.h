#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalNetworkNPCTalkRequestData.generated.h"

class UPalNPCTalkFlowComponent;

USTRUCT(BlueprintType)
struct FPalNetworkNPCTalkRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UPalNPCTalkFlowComponent* TalkFlowComponent;
    
    UPROPERTY(EditAnywhere)
    FGuid Token;
    
    UPROPERTY(EditAnywhere)
    FName NetworkInvokeName;
    
    PAL_API FPalNetworkNPCTalkRequestData();
};

