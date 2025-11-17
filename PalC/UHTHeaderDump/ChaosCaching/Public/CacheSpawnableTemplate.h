#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CacheSpawnableTemplate.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FCacheSpawnableTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    UObject* DuplicatedTemplate;
    
    UPROPERTY(VisibleAnywhere)
    FTransform InitialTransform;
    
    UPROPERTY(VisibleAnywhere)
    FTransform ComponentTransform;
    
    CHAOSCACHING_API FCacheSpawnableTemplate();
};

