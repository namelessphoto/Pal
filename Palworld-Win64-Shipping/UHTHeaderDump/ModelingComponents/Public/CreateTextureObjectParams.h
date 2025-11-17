#pragma once
#include "CoreMinimal.h"
#include "CreateTextureObjectParams.generated.h"

class UObject;
class UTexture2D;
class UWorld;

USTRUCT(BlueprintType)
struct MODELINGCOMPONENTS_API FCreateTextureObjectParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 TypeHintExtended;
    
    UPROPERTY(EditAnywhere)
    UWorld* TargetWorld;
    
    UPROPERTY(EditAnywhere)
    UObject* StoreRelativeToObject;
    
    UPROPERTY(EditAnywhere)
    FString BaseName;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* GeneratedTransientTexture;
    
    FCreateTextureObjectParams();
};

