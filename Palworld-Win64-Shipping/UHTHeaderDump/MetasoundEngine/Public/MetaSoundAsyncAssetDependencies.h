#pragma once
#include "CoreMinimal.h"
#include "MetaSoundAsyncAssetDependencies.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FMetaSoundAsyncAssetDependencies {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UObject* Metasound;
    
    METASOUNDENGINE_API FMetaSoundAsyncAssetDependencies();
};

