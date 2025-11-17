#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSettings -FallbackName=WorldSettings
#include "FlowWorldSettings.generated.h"

class UFlowComponent;

UCLASS()
class FLOW_API AFlowWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UFlowComponent* FlowComponent;
    
public:
    AFlowWorldSettings(const FObjectInitializer& ObjectInitializer);

};

