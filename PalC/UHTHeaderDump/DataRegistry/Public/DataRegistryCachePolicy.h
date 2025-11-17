#pragma once
#include "CoreMinimal.h"
#include "DataRegistryCachePolicy.generated.h"

USTRUCT(BlueprintType)
struct DATAREGISTRY_API FDataRegistryCachePolicy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCacheIsAlwaysVolatile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCurveTableCacheVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinNumberKept;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxNumberKept;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForceKeepSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForceReleaseSeconds;
    
    FDataRegistryCachePolicy();
};

