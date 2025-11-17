#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalBaseCampFunctionModuleBase.generated.h"

UCLASS(Abstract)
class UPalBaseCampFunctionModuleBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bTriggeredReady;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid OwnerBaseCampId;
    
public:
    UPalBaseCampFunctionModuleBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

