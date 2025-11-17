#pragma once
#include "CoreMinimal.h"
#include "ECreateModelingObjectResult.h"
#include "CreateTextureObjectResult.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct MODELINGCOMPONENTS_API FCreateTextureObjectResult {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    ECreateModelingObjectResult ResultCode;
    
    UPROPERTY(VisibleAnywhere)
    UObject* NewAsset;
    
    FCreateTextureObjectResult();
};

