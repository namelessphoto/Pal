#pragma once
#include "CoreMinimal.h"
#include "EBasicAxis.h"
#include "EWarpingDirectionSource.h"
#include "RetargetGlobalSettings.generated.h"

USTRUCT(BlueprintType)
struct IKRIG_API FRetargetGlobalSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnableRoot;
    
    UPROPERTY(EditAnywhere)
    bool bEnableFK;
    
    UPROPERTY(EditAnywhere)
    bool bEnableIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bWarping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EWarpingDirectionSource DirectionSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBasicAxis ForwardDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName DirectionChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WarpForwards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SidewaysOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WarpSplay;
    
    FRetargetGlobalSettings();
};

