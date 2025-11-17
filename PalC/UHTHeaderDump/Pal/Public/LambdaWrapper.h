#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LambdaWrapper.generated.h"

UCLASS()
class ULambdaWrapper : public UObject {
    GENERATED_BODY()
public:
    ULambdaWrapper();

    UFUNCTION()
    void Dispatch(bool IsSuccess);
    
};

