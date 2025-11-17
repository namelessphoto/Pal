#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UVLayoutOperatorFactory.generated.h"

class UUVLayoutProperties;

UCLASS()
class MODELINGOPERATORS_API UUVLayoutOperatorFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UUVLayoutProperties* Settings;
    
    UUVLayoutOperatorFactory();

};

