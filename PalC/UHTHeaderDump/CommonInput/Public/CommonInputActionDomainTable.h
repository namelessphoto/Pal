#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMouseCaptureMode -FallbackName=EMouseCaptureMode
#include "ECommonInputMode.h"
#include "CommonInputActionDomainTable.generated.h"

class UCommonInputActionDomain;

UCLASS(BlueprintType)
class COMMONINPUT_API UCommonInputActionDomainTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UCommonInputActionDomain*> ActionDomains;
    
    UPROPERTY(EditDefaultsOnly)
    ECommonInputMode InputMode;
    
    UPROPERTY(EditDefaultsOnly)
    EMouseCaptureMode MouseCaptureMode;
    
    UCommonInputActionDomainTable();

};

