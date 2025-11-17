#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMouseCaptureMode -FallbackName=EMouseCaptureMode
#include "ECommonInputEventFlowBehavior.h"
#include "ECommonInputMode.h"
#include "CommonInputActionDomain.generated.h"

UCLASS()
class COMMONINPUT_API UCommonInputActionDomain : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ECommonInputEventFlowBehavior Behavior;
    
    UPROPERTY(EditDefaultsOnly)
    ECommonInputEventFlowBehavior InnerBehavior;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseActionDomainDesiredInputConfig;
    
    UPROPERTY(EditDefaultsOnly)
    ECommonInputMode InputMode;
    
    UPROPERTY(EditDefaultsOnly)
    EMouseCaptureMode MouseCaptureMode;
    
    UCommonInputActionDomain();

};

