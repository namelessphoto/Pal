#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "StatePerObjectConfig.generated.h"

UCLASS(PerObjectConfig)
class NETCORE_API UStatePerObjectConfig : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FString PerObjectConfigSection;
    
public:
    UPROPERTY(Config)
    bool bEnabled;
    
    UStatePerObjectConfig();

};

